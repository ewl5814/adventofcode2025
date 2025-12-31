(import (chicken io))
(import scheme)

(define (string-tail str start)
  (substring str start (string-length str)))

(define (string-head str end)
  (substring str 0 end))

(define (string-find-next-char str char)
  (if (= (string-length str) 0) -1 
   (if (char=? (string-ref str 0) char) 0 
    (+ 1 (string-find-next-char (string-tail str 1) char))))) 

(define (move-to-available in)
  (let ((line (read-line in)))
    (if (eof-object? line) in
      (if (string=? line "") in 
        (move-to-available in)))))

(define (check-in-range ranges num)
  ((lambda (range) 
      (if (string=? range "") (begin (close-input-port ranges) 0)
      (let ((split (string-find-next-char range #\-)))
        (if (and (>= num (string->number (string-head range split))) (<= num (string->number (string-tail range (+ 1 split))))) 1 
          (check-in-range ranges num))))) (read-line ranges)))


(define (search-ranges available file)
  (let ((line (read-line available)))
    (if (eof-object? line) 0
      (+ (check-in-range (open-input-file file) (string->number line))
      (search-ranges available file)))))

(define (solve-file file)
  (let ((available (move-to-available (open-input-file file))))
   (begin
    (display (search-ranges available file))
    (newline)
    (close-input-port available))))
