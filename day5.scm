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

(define (get-end-range ranges index)
  (string->number (string-tail (list-ref ranges index) (+ 1 (string-find-next-char (list-ref ranges index) #\-))))) 

(define (get-start-range ranges index)
       (begin (display (cdr ranges))(newline) (string->number (string-head (list-ref ranges index) (string-find-next-char (list-ref ranges index) #\-)))))

(define (look-for-swaps ranges low pivot i k)
    (if (<= i low) (cons k ranges)
    (if (> (get-start-range ranges i) pivot)
      (look-for-swaps (swap-index i k ranges) low pivot (- i 1) (- k 1))
      (look-for-swaps ranges low pivot (- i 1) k))))

(define (partition ranges low high)
  (let* ((ranges-and-k 
           (look-for-swaps ranges low (get-start-range ranges low) high high)) 
           (k (car ranges-and-k)) 
           (swapped-ranges (cdr ranges-and-k)))
    (cons k (swap-index low k swapped-ranges)))) 

(define (quick-sort ranges low high)
   (if (>= low high) ranges
    (let* ((swapped-and-pi (partition ranges low high)) (pi (car swapped-and-pi)) (swapped (cdr swapped-and-pi)))
     (quick-sort (quick-sort swapped low (- pi 1)) (+ pi 1) high))))

(define (lines-to-list in) 
  (let ((line (read-line in)))
    (if (string=? line "") '()
      (cons line (lines-to-list in)))))

(define (count-ranges sorted-ranges end)
  (if (= (length sorted-ranges) 0) 0
    (let ((next-start (get-start-range sorted-ranges 0)) (next-end (get-end-range sorted-ranges 0))) 
      (if (> next-start end)
        (+ (+ 1 (- next-end next-start)) (count-ranges (cdr sorted-ranges) next-end))
        (if (> next-end end)
          (+ (- next-end end) (count-ranges (cdr sorted-ranges) next-end))
          (count-ranges (cdr sorted-ranges) end))))))

(define (find-fresh file)
  (let* ((range-list (lines-to-list (open-input-file file))) (sorted-list (quick-sort range-list 0 (- (length range-list) 1))))
    (display (+ (+ 1 (- (get-end-range sorted-list 0) (get-start-range sorted-list 0))) (count-ranges sorted-list (get-end-range sorted-list 0))))))
