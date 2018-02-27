#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int a1, a2, a3, b1, b2, b3,n; long long ca=0,cb=0,c=0;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	cin >> n;
	ca = a1 + a2 + a3;
	cb = b1 + b2 + b3;
	if (ca % 5 == 0 && ca!=0)
		c += (ca / 5);
	else if (ca!=0)
		c += (ca / 5)+1;
	if (cb % 10 == 0 && cb != 0)
		c += (cb / 10);
	else if (cb != 0)
		c += (cb / 10) + 1;

	if (c <= n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
