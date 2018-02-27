#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	long long n, x, c = 0;
	cin >> n >> x;
	for (int i = 1	; i <= n; i++)
	{
		if (x%i == 0)
		{
			for (int j = 1; j <= n; j++)
			if (i*j == x)
				c++;
		}
	}

	cout << c << endl;
	  
}
