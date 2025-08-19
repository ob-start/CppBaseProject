/*
https://acm.hdu.edu.cn/showproblem.php?pid=2021
*/
#include <iostream>
using namespace std;

int calc(int n);

int main() {
    int n;
    int x;
    while (cin >> n && n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += calc(x);
        }
        cout << sum << endl;
    }
    return 0;
}

int calc(int n) {
    int b[] = { 100, 50, 10, 5, 2, 1 };
    int cnt = 0;
    for (int i = 0; i < 6; ++i) {
        int x = n / b[i];
        cnt += x;
        n -= x * b[i];
    }
    return cnt;
}
