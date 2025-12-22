(import (chicken io))
(import scheme)

(define (test file) (open-input-file file))

(define (get-num line) (string->number (substring line 1 (string-length line))))

(define (move-curr curr line) 
  (if (equal? (substring line 0 1) "L")
   (- curr (get-num line))
   (+ curr (get-num line))
  )
)

(define (get-addend curr line)
      (if (or (and (<= (move-curr curr line) 0) (not(= 0 curr))) (> (move-curr curr line) 99))
	(if (> (abs(- (get-num line) curr)) 99) 
	  (truncate (/ (abs(- (get-num line) curr)) 99))
	  1)
	0)
  )

(define (decode in curr)
  (let ((line (read-line in)))
   (if (eof-object? line)
    (begin (close-input-port in) 0)
    (begin
      (display "curr ")
      (display curr)
      (newline)
      (display line)
      (newline)
      (display "adding ") 
      (display (get-addend curr line))
(newline)
      (+ 

     (get-addend curr line)  
     (decode in (modulo (move-curr curr line) 100))
      )
    )
   )
  )
)

(define (decode-file file) (display (decode (open-input-file file) 50)))
