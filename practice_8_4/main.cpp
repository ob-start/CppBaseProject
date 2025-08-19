/*
https://acm.hdu.edu.cn/showproblem.php?pid=2039
*/
#include <iostream>
#include <algorithm>
using namespace std;

double a[3];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] > a[2]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}