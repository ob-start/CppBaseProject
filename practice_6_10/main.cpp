/*
https://acm.hdu.edu.cn/showproblem.php?pid=2096
*/
#include<iostream>
using namespace std;
int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << ((a % 100 + b % 100) % 100) << endl;
	}
	
	return 0;
}
