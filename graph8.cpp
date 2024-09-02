Cho đồ thị vô hướng G = <V, E> được biểu diễn dưới ma trận trọng số A[][], trong đó A[i][j] khác không có nghĩa có cạnh nối giữa 2 đỉnh i, j.

Hãy chuyển đồ thị đã cho thành danh sách cạnh tương ứng.

Đầu vào
Dòng đầu tiên là n, tương ứng là số lượng đỉnh của đồ thị.

n dòng tiếp theo là ma trận A[][].

Giới hạn
1<=n<=1000

1<=A[i][j]<=10^6

Đầu ra
In ra danh sách cạnh và trọng số theo thứ tự đỉnh tăng dần.

Ví dụ :
Input 01
Copy
5
0 0 9 4 1
0 0 1 0 6
9 1 0 3 1
4 0 3 0 8
1 6 1 8 0
Output 01
Copy
1 3 9
1 4 4
1 5 1
2 3 1
2 5 6
3 4 3
3 5 1
4 5 8

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 0) {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
                a[j][i] = 0;
            }
        }
    }

    return 0;
}

