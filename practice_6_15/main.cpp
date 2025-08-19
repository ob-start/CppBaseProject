/*
https://acm.hdu.edu.cn/showproblem.php?pid=2052
*/
#include <iostream>
using namespace std;
int main() {
    int n, m;
    while (cin >> n >> m) {
        // 1、第一行
        cout << '+';
        for (int i = 0; i < n; ++i) {
            cout << '-';
        }
        cout << '+' << endl;
        // 2、中间的行
        for (int i = 0; i < m; ++i) {
            cout << '|';
            for (int j = 0; j < n; ++j) {
                cout << ' ';
            }
            cout << '|' << endl;
        }
        // 3、最后一行
        cout << '+';
        for (int i = 0; i < n; ++i) {
            cout << '-';
        }
        cout << '+' << endl;
        cout << endl;
    }
    return 0;
}