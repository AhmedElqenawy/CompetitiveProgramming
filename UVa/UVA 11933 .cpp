#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <map>
using namespace std;
map<int, int>mp;
set<string>::iterator it;
bitset <64> bt;
set <string> st;
int main()
{	
	int x;
	while (cin >> x && x)
	{
		bitset <64> no(x);
		bitset <64> a(0);
		bitset <64> b(0);
		bool co = false;
		for (int i = 0; i < no.size(); i++)
		{
			if (no[i] == 1)
			{
				if (co)
				{
					b.flip(i);
					co = 0;
				}
				else
				{
					a.flip(i);
					co = 1;
				}
			}
		}
		long long  A = a.to_ulong(), B = b.to_ulong();
		cout << A << " " << B << endl;
	}
//	system("pause");
}
