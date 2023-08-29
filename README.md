Cho 1 bãi mìn kích thước mxn ô vuông, trên 1 ô có thể có chứa 1 quả mìn hoặc không, để biễu diễn bản đồ mìn đó người ta có 2 cách :

Cách 1: dùng bản đồ đánh dấu: sử dụng 1 lưới ô vuông kích thước mxn, trên đó tại ô (i,j) ghi số 1 nếu ô đó có mìn, ghi số 0 nếu ô đó không có mìn.

Cách 2: dùng bản đồ mật độ: sử dụng 1 lưới ô vuông kíck thước mxn, trên đó tại ô (j,j) ghi 1 số trong khoảng từ 0->8 cho biết tổng số mình trong các ô lân cận với ô (i,j) ( ô lân cận với ô (i,j) là ô có chung với ô (i,j) ít nhất 1 đỉnh ) Giả thiết rằng 2 bản đồ được ghi chính xác theo tình trạng mìn trên hiện trường. Về nguyên tắc, lúc cài bãi mìn phải vẽ cả bản đồ đánh dấu và bản đồ mật độ, tuy nhiên sau 1 thời gian dài, khi người ta muốn gỡ mìn ra khỏi bãi thì vấn đề hết sức khó khăn bởi bản đồ đánh dấu đã bị thất lạc !! Công việc của các lập trình viên là: Từ bản đồ mật độ, hãy tái hiện lại bản đồ đánh dấu của mìn.

Dữ liệu: vào từ file văn bản MINE.INP, các số trên 1 dòng cách nhau ít nhất 1 dấu cách : + dòng 1 : ghi 2 số nguyên dương m, n ( 2 <= m, n <= 30 ) + m dòng tiếp theo, dòng thứ i ghi n số trên hàng i của bản đồ mật độ theo đúng thứ tự từ trái qua phải.

Kết quả: Ghi ra file văn bản MINE.OUT, các số trên 1 dòng ghi cách nhau ít nhất 1 dấu cách:

dòng 1: ghi tổng số mìn trong bãi.
m dòng tiếp theo, dòng thứ i ghi n số hàng i của bản đồ đánh dấu theo đúng thứ tự từ trái qua phải
Ví dụ:
MINE.INP
4 5
1 1 3 2 2
2 3 5 3 3
1 3 3 2 2
1 3 1 2 2
MINE.OUT
8
0 1 1 1 0
0 0 1 0 1
0 0 1 0 1
1 0 1 0 0
