/*
https://acm.hdu.edu.cn/showproblem.php?pid=2071
*/
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        double x;
        double max = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x > max) {
                max = x;
            }
        }
        printf("%.2lf\n", max);
    }

    return 0;
}