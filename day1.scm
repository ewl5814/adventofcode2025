(import (chicken io))
(import scheme)

(define (test file) (open-input-file file))

(define (move_curr curr line) 
  (if (equal? (substring line 0 1) "L")
   (modulo (- curr (string->number (substring line 1 (string-length line)))) 100)
   (modulo (+ curr (string->number (substring line 1 (string-length line)))) 100)
  )
)

(define (decode in curr)
  (let ((line (read-line in)))
   (if (eof-object? line)
    (begin (close-input-port in) 0)
    (+ (if (= 0 curr) 1 0) (decode in (move_curr curr line)))
   )
  )
)

(define (decode-file file) (display (decode (open-input-file file) 50)))
