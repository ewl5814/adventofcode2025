(import (chicken io))
(import scheme)

(define (test file) (open-input-file file))

; return the offset associated with a line of input
(define (get-num line) (string->number (substring line 1 (string-length line))))

; return the non-modulo position after adding or subtracting a value from the input
(define (move-curr curr line) 
  (if (equal? (substring line 0 1) "L") 
    (- curr (get-num line)) 
    (+ curr (get-num line))))

; calculate the amount of times 0 will be passed or landed on with the next instruction
(define (get-addend curr line)
  (if (or (= curr 0) (> (move-curr curr line) 99))
    (truncate (/ (+ curr (get-num line)) 100))
    (if (<= (move-curr curr line) 0) 
      (truncate (/ (+ (- 100 curr) (get-num line)) 100)) 0)))

; recurse through every line of code and add the amount of 0 crossings
(define (decode in curr)
  (let ((line (read-line in)))
   (if (eof-object? line) 0 (+ (get-addend curr line) 
       (decode in (modulo (move-curr curr line) 100))))))

; open file and decode
(define (decode-file file)
  (let ((in (open-input-file file))) 
    (begin
      (display (decode in 50))
      (close-input-port in)
      (newline))))
