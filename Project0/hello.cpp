#include<iostream>

using namespace std;

void print(int i);
int g_a = 0;
int main(void)
{
	int a = 1;
	cout << "hello " << endl;
	scanf(" %d", &a);
	cin >> g_a ;
	print(g_a);

		return 0;
}
void print(int i)
{
	cout << "g_a=" << i << endl;
}