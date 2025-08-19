/*
https://acm.hdu.edu.cn/showproblem.php?pid=2007
*/
#include<iostream>
using namespace std;

int main() {
    int a[1000] = { 0 };
    int n, m;
    while (cin >> n >> m) {
        if (n > m) {
            n = n ^ m;
            m = n ^ m;
            n = n ^ m;
        }
        int cnt = m - n + 1;
        for (int i = n; i <= m; ++i) {
            a[i - n] = i;
        }
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < cnt; ++i) {
            if (a[i] % 2 == 0) {
                sum1 += a[i] * a[i];
            }
            else {
                sum2 += a[i] * a[i] * a[i];
            }
        }
        cout << sum1 << ' ' << sum2 << endl;

    }
    return 0;
}