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
int main()
{
	int b, v,c,d,x;

	while (cin >> b >> n && b && n) {

		bool f = false;
		for (int i = 0; i < b; i++)
			cin >> arr[i];

		x = b;
		while (n--)
		{
			
			cin >> d >> c >> v;
			arr[d - 1] -= v;
			arr[c - 1] += v;
		}
		for (int i = 0; i < x; i++)
		if (arr[i] < 0)
			f = true;
		if (!f)
			cout << "S" << endl;
		else 
			cout << "N" << endl;

	}
	system("pause");
}
