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
int F(int n, int k)
{
	int  frist = 1, mid = 0;
	int last = n;	
	while (frist<last)
	{
		mid = (frist+last)/2;
		int trry = mid, count = 0;
		while (trry)
		{
			count += trry;
			trry /= k;
		}

		if (count < n)      frist = mid+1;
		else    last = mid ;  
	}
	return last;
}
int main()
{
	  int n, k;
		cin >> n >> k;
   cout << F(n, k) << endl;
	
	
}
