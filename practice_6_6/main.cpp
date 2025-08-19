/*
https://acm.hdu.edu.cn/showproblem.php?pid=1093
*/
#include <iostream>
using namespace std;
int main() {
	int t,n, x, sum;
	cin >> t;
	while (t--) {
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
		}
		cout << sum << endl;
	}

	return 0;
}