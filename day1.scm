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
  (if (or (= curr 0) (> (move-curr curr line) 99))
    (truncate (/ (+ curr (get-num line)) 99))
    (if (<= (move-curr curr line) 0)
      (truncate (/ (+ (- 100 curr) (get-num line)) 100))
      0
    )
))

(define (decode in curr)
  (let ((line (read-line in)))
   (if (eof-object? line)
    (begin (close-input-port in) 0)
    (begin
      (if (and (not (= curr 0)) (> (get-addend curr line) 1))
       (begin
        (display "curr ")
        (display curr)
        (newline)
        (display line)
        (newline)
        (display "adding ") 
        (display (get-addend curr line))
        (newline)
        (display "new curr ")
        (display (modulo (move-curr curr line) 100))
        (newline)
       )
      )
      (+ 
       (get-addend curr line)
       (decode in (modulo (move-curr curr line) 100))
      )
))))

(define (decode-file file) (display (decode (open-input-file file) 50)))
