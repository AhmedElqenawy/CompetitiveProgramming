#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <map>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int arr[1000] = { 0 };
map<int, int>mp;
set<string>::iterator it;
bitset <64> bt;
set <string> st;
int n, m;
int FFF(int n, int k)
{
	int  frist = 0, last = n - 1, mid = 0;
	int val = -1;
	while (frist<last)
	{

		mid = (frist + last) / 2;

		if (arr[mid] <= k)     { val = arr[mid + 1];  frist = mid + 1; }
		else if (arr[mid] >k) { last = mid; }

	}
	return val;

}
int F(int n, int k)
{
	int  frist = 0, last = n - 1, mid = 0;
	int val = -1;
	while (frist <= last)
	{
		mid = (frist + last) / 2;
		if (arr[mid] <= k)     { frist = mid + 1; }
		else if (arr[mid] > k) { val = arr[mid]; last = mid - 1; }

	}
	return val;
}
int main()
{
	cin >> n ;
	vector <int > v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int q; cin >> q;
	while (q--)
	{
		cin >> m;
		int r = upper_bound(v.begin(), v.end(), m) - v.begin();
		int l = lower_bound(v.begin(), v.end(), m) - v.begin();
		l--;
		if (l < 0)
			cout << "X ";
		else
			cout << v[l]<<" ";
		if (r >= n)
			cout << "X" << endl;
		else
			cout << v[r] << endl;

	}   



	/*
	if (F(n, m) < m && F(n, m) != -1)
	cout << F(n, m) << " ";
	else cout << "X ";
	if (F(n, m) < m	)
	cout << F(n, m);
	else cout << "X";

	*/
	system("pause");
}
