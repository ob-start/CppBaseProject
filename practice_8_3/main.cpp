/*
https://acm.hdu.edu.cn/showproblem.php?pid=2000
*/
#include <iostream>
#include <algorithm>//sort()排序函数所在头文件
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        sort(s.begin(), s.end());
        cout << s[0] << ' ' << s[1] << ' ' << s[2] << endl;
    }
    return 0;
}