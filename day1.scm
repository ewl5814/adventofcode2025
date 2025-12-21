(import (chicken io))

;(define filename "input.txt")
;(define in (open-input-file filename)) 
(define (print-lines in)
  (let* ((line (read-line in)))
    (if (eof-object? line) 
     (close-input-port in)
     (begin
      (display line)
      (newline)
      (print-lines in)
     )
    )
  )
)


(define (read-from-file file) 
 (begin
  (print-lines (open-input-file file))
 )
)




(define (decode (in curr)
  (let* ((line (read-line in)))
    (if (eof-object? line)
      (close-input-port in)
      (begin
	(


(define (decode-file file)
  (begin
    (decode (open-input-file file))
  )
)
