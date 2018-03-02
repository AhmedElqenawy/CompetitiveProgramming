#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	long long c=0,x;
	cin >> x;
	for (int i = 0;; i++)
	{
		if (x < 1)
			break;
		c += x % 2;
		x /= 2;
	}
	cout << c;	
//	system("pause");
}
