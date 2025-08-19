/*
https://acm.hdu.edu.cn/showproblem.php?pid=2012
*/
#include <iostream>
using namespace std;

bool isPrime(int x);

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (!x && !y) {
            break;
        }
        bool flag = false;
        for (int i = x; i <= y; ++i) {
            int z = i * i + i + 41;
            if (!isPrime(z)) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "OK" << endl;
        }
        else {
            cout << "Sorry" << endl;
        }
    }
    return 0;
}

bool isPrime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
