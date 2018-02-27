#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int l, c = 0, cc = 0, d,n, arr[1000] = {0};
	cin >> n>>d;
	for (int i = 1; i <= n;i++)
	{
		cin >> arr[i];
	}	
	if (arr[d] == 1)
		c++;

	if (2 * d - 1 <= n){
		for (int i = 1; i < d; i++)
		{
			if (arr[i] == 1 && arr[2*d - i] == 1)
				c+=2;
		}
		for (int i = 2 * d; i <= n; i++)
		{
			if (arr[i] == 1)
				c++;
		}
	}
	else if (2 * d - 1>n)
	{
		for (int i = (d-(n-d)); i < d; i++)
		{
			if (arr[i] == 1 && arr[2*d-i] == 1)
				c+=2;
		}
		for (int i = 1; i < (d - (n - d));i++)
		if (arr[i] == 1)
			c++;
	}
	

	cout << c << endl;
}
