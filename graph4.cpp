Cho đồ thị có hướng G = <V, E> gồm n đỉnh và m cạnh được biểu diễn dưới dạng danh sách kề.

Hãy chuyển đổi đồ thị dưới dạng danh sách kề này sang danh sách cạnh tương ứng.

Đầu vào
Dòng đầu tiên là số nguyên dương n, tương ứng với số đỉnh của đồ thị.

m dòng tiếp theo mỗi dòng chứa nhiều số nguyên, dòng thứ i tương ứng với các đỉnh trong danh sách kề của đỉnh i.

Giới hạn
1<=n<=1000

Đầu ra
In ra các cạnh trong đồ thị trên từng dòng, các cạnh được liệt kê tăng dần.

Ví dụ :
Input 01
Copy
5
5 3 4
4 1 3 5
4 2
3 1 2
3 2
Output 01
Copy
1 3
1 4
1 5
2 1
2 3
2 4
2 5
3 2
3 4
4 1
4 2
4 3
5 2
5 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int,int>> dscanh;
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string j;
        while(ss >>j){
            dscanh.push_back({i,stoi(j)});
        }
    }
    sort(dscanh.begin(),dscanh.end());
    for(auto it : dscanh){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
