/*
https://acm.hdu.edu.cn/showproblem.php?pid=2033
*/
#include<iostream>
using namespace std;
int main() {
	int n, a, b, c, d, e, f, h, m, s;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d >> e >> f;
		s = (c + f) % 60;
		m = (b + e + (c + f) / 60) % 60;
		h = a + d + ((b + e + (c + f) / 60) / 60);
		cout << h << ' ' << m << ' ' << s << endl;
	}

	return 0;
}