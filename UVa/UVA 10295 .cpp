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
int arr[1000]={0};
map<string, int>mp;
set<string>::iterator it;
bitset <64> bt;
set <string> st;
int n, m;
int F(int nx)
{
	int c = 1,i=0, count=0;
	int t=n;
	while (t--)
	{ 
		if (arr[i] > nx) return -1;
		if (arr[i] + count <= nx) count += arr[i];
		else
		{
			c++;
			count = arr[i];
		}
		i++;
		
	}
	return c;

}
int ser(int xx,int M)
{

	int le = 1,te, r = xx,mid,V=M,VAL;
	
	while (le<=r){
		mid = (le + r) / 2;
		te = F(mid);
		cout << te << " ";
		if (te == -1 || te>V) { le = mid + 1; }
		if (te <= V && te != -1) {V = te; VAL =mid; r = mid - 1; }
	}
	return VAL;
}

int main()
{
	int w;
	string a;
	cin >> n >> m;
	while (n--)
	{
		cin >> a >> w;
		mp[a] = w;
	}
	while (m--)
	{
		w = 0;
		while ((cin>>a)){
			if (a[0] == '.')break;
			w += mp[a];
		}
		cout << w << endl;
		
	}
}
