(import (chicken io))
(import scheme)

(define (test num) (display (count-digits num)))

(define (string-head str end)
  (substring str 0 end))

(define (string-tail str start)
  (substring str start (string-length str)))

(define (string-find-next-char str char)
  (if (= (string-length str) 0) 0 
   (if (char=? (string-ref str 0) char) 0 
    (+ 1 (string-find-next-char (string-tail str 1) char))))) 

(define (count-digits num) 
  (if (= 0 num) 0 (+ 1 (count-digits (truncate (/ num 10))))))

; checks for single repeat in a number
(define (check-num num)
  (if (and (= (modulo (count-digits num) 2) 0)
	(= (truncate (/ num (expt 10 (/ (count-digits num) 2))))
	(modulo num (expt 10 (truncate (/ (count-digits num) 2))))))
  (begin (display num)(newline) num) 0))

; converts a string number into a list of strings of length division
(define (num-to-list num division)
  (if (string=? num "") '()
    (cons (string-head num division) (num-to-list (string-tail num division) division))))

; checks if all strings in a list are equivalent
(define (check-list l)
  (if (= (length l) 1) #t
    (if (string=? (car l) (car (cdr l)))
      (check-list (cdr l)) #f)))

; checks for repeats of any amount in a number
(define (check-num-many num division) 
  (if (or (= 0 (count-digits num)) (= division (count-digits num))) 0
    (if (= (modulo (count-digits num) division) 0) 
	(let ((list (num-to-list (number->string num) division))) 
	  (if (equal? (check-list list) #t) num	
	    (check-num-many num (+ division 1))) 
      (check-num-many num (+ division 1))))))

; searches a range of numbers for repeats and returns those numbers added together
(define (search-range first second)
 (if (= first second)
   (check-num-many first 1)
   (+ (check-num-many first 1) (search-range (+ first 1) second))))

; searches a line of comma separated ranges of numbers for ones that consist of repeats
(define (parse-line line)
  (if (= 0 (string-length line)) 0
      (let* ((first (string-head line (string-find-next-char line #\-)))
	(tail (string-tail line (+ 1 (string-find-next-char line #\-))))
	(second (string-head tail (string-find-next-char tail #\,)))) 
	(begin
	  (+  (search-range (string->number first) (string->number second))
	  (parse-line 
	    (if (>= (string-find-next-char tail #\,) (string-length tail)) ""
	        (string-tail tail (+ 1 (string-find-next-char tail #\,))))))))))

; opens the file and solves it
(define (solve file)
  (let ((in (open-input-file file)))
    (begin
      (display (parse-line (read-line in)))
      (close-input-port in)
      (newline))))
