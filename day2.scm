(import (chicken io))
(import scheme)

(define (test num) (display (count-digits num)))

(define (string-head str end)
  (substring str 0 end))

(define (string-tail str start)
  (substring str start (string-length str)))

(define (string-find-next-char str char)
  (if (= (string-length str) 0)
   (string-length str) 
   (if (char=? (string-ref str 0) char) 0 
    (+ 1 (string-find-next-char (string-tail str 1) char))))) 

(define (count-digits num) 
  (if (= 0 num) 0 (+ 1 (count-digits (truncate (/ num 10))))))

(define (check-num num)
  (if (=
	(truncate (/ num (expt 10 (/ (count-digits num) 2))))
	(modulo num (expt 10 (truncate (/ (count-digits num) 2)))))
  num 0))

(define (search-range first second)
  (if (and (= 1 (modulo (count-digits first) 2)) (= 1 (modulo (count-digits second) 2)))
    0
    (if (= first second)
      (check-num first)
      (+ (check-num first) (search-range (+ first 1) second))
    )
  )
)


(define (parse-line line)
  (if (= 0 (string-length line)) 
    0
    (let* ((first (string-head line (string-find-next-char line #\-)))
	(tail (string-tail line (+ 1 (string-find-next-char line #\-))))
	(second (string-head tail (string-find-next-char tail #\,)))) 
	(begin
	  (+  
	  (search-range (string->number first) (string->number second))
	  (parse-line (if (>= (string-find-next-char tail #\,) (string-length tail))
			""
		       (string-tail tail (+ 1 (string-find-next-char tail #\,)))))
	  )
	)
      )
    )
   )

(define (solve file)
  (let ((in (open-input-file file)))
    (begin
      (display (parse-line (read-line in)))
      (close-input-port in)
      (newline))))
