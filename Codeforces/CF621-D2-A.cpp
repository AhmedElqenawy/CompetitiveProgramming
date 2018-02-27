#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;
int main()
{
	int n, x,arr[100000]; long long sum = 0, c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x % 2 == 0)
			sum += x;
		else
		{
			arr[c] = x; 
			c++;
		}
	}
	if (c % 2 == 0)
	{
		for (int i = 0; i < c; i++)
			sum+=arr[i];
	}
	else
	{
		sort(arr, arr + c);
		for (int i = (c - 1); i>0; i--)
			sum += arr[i];
	}
	cout << sum << endl;


//	system("pause");
}
