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

(define (count-fresh num file biggest)
  (if (> num biggest) 0 
  (+ (begin (check-in-range (open-input-file file) num))
     (count-fresh (+ 1 num) file biggest))))

(define (find-fresh-available file)
  (let ((available (move-to-available (open-input-file file))))
   (begin
    (display (search-ranges available file))
    (newline)
    (close-input-port available))))

(define (find-biggest in large)
    (let* ((range (read-line in)) (split (string-find-next-char range #\-)) (next-tail (string->number (string-tail range (+ 1 split)))))
      (if (string=? range "")
        large
        (if (> next-tail large)
          (find-biggest in next-tail)
          (find-biggest in large)))))

; found this swap solution online
(define (swap-index idx1 idx2 lst)
  (define (build-list lst idx e1 e2)
    (cond ((null? lst)
           '())
          ((= idx idx1)
           (cons e2 (build-list (cdr lst) (add1 idx) e1 e2)))
          ((= idx idx2)
           (cons e1 (build-list (cdr lst) (add1 idx) e1 e2)))
          (else
           (cons (car lst) (build-list (cdr lst) (add1 idx) e1 e2)))))
  (build-list lst 0 (list-ref lst idx1) (list-ref lst idx2)))

(define (look-for-swaps ranges low pivot i k)
    (if (<= i low) (cons k ranges)
    (if (> (list-ref ranges i) pivot)
      (look-for-swaps (swap-index i k ranges) low pivot (- i 1) (- k 1))
      (look-for-swaps ranges low pivot (- i 1) k))))

(define (partition ranges low high)
  (let* ((ranges-and-k (look-for-swaps ranges low (list-ref ranges low) high high)) (k (car ranges-and-k)) (swapped-ranges (cdr ranges-and-k)))
    (cons k (swap-index low k swapped-ranges)))) 

(define (quick-sort ranges low high)
   (if (>= low high) ranges
    (let* ((swapped-and-pi (partition ranges low high)) (pi (car swapped-and-pi)) (swapped (cdr swapped-and-pi)))
     (quick-sort (quick-sort swapped low (- pi 1)) (+ pi 1) high))))

(define (find-fresh file)
  (let ((biggest (find-biggest (open-input-file file) 0)))
    (display (count-fresh 100000000000000 file biggest))))
