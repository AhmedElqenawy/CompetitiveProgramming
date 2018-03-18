#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <map>
using namespace std;
int arr[1000]={0};
map<int, int>mp;
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
	while (cin >> n >> m)
	{


		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i]; sum += arr[i];
		}

		int le = 1, te, r = sum, mid, V = m, VAL = sum, qqqq = 0;

		while (le <= r){
			mid = (le + r) / 2;
			te = F(mid);
			if (te == -1) { le = mid + 1; }
			if (te <= V && te != -1) { VAL = min(mid, VAL); r = mid - 1; }
			else if (te > V) { le = mid + 1; }

		}
		cout << VAL << endl;
	}
	//system("pause");
	
}
