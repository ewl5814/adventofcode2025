(import (chicken io))
(import scheme)

(define (string-tail str start)
  (substring str start (string-length str)))

(define (string-head str end)
  (substring str 0 end))

; find the largest digit in a string of numbers within a certain length of the string
(define (find-largest-digit original line large-index end)
  (begin
   (if (= (string-length line) end)
    large-index
    (let ((tail (string-tail line 1)) (curr-index (- (string-length original) (string-length line))))
    (if (>= (string->number (substring original large-index (+ 1 large-index)))
	   (string->number (substring original curr-index (+ 1 curr-index))))
       (find-largest-digit original tail large-index end)
       (find-largest-digit original tail curr-index end))))))

; find the two digits in a string of numbers that create the largest number when concatenated
(define (greatest-bank line)
  (let* ((tens-index (find-largest-digit line (string-tail line 1) 0 1)) 
	 (ones-index (find-largest-digit line (string-tail line (+ tens-index 1)) (+ tens-index 1) 0)))
     (string->number (string-append (substring line tens-index (+ 1 tens-index)) 
					(substring line ones-index (+ 1 ones-index))))))

; find a specified amount of digits in a string of numbers that create the largest number when concatenated
(define (greatest-twelve line prev-index end)
  (if (= end 0) ""
   (let ((digit-index (find-largest-digit line (string-tail line (+ 1 prev-index)) (+ 1 prev-index) (- end 1)))) 
      (string-append (substring line digit-index (+ 1 digit-index))
		   (greatest-twelve line digit-index (- end 1))))))

; sum the numbers formed from combining digits in multiple strings of numbers
(define (sum-batteries in)
  (let ((line (read-line in))) 
    (if (eof-object? line) 0 (+ (greatest-twelve line -1 12))
	(sum-batteries in)))))

(define (solve-file file)
  (let ((in (open-input-file file)))
   (begin
    (display (sum-batteries in))
    (close-input-port in)
    (newline)))) 
