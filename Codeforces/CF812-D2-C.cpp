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
int arr[1000][1000] = { 0 };
map<int, int>mp;
set<string>::iterator it;
bitset <64> bt;
set <string> st;
using namespace std;
/*int FFF(int n, int k)
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
*/

void print(int x)
{
	if (x < 1)
		return;
	print(x / 2);
	cout << x % 2;



}
int main() {
	int n, s;
	cin >> n >> s;
	vector<long long> arr(n);
	 vector<long long> TT(n);
	
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	int l = 1, r = n, mid, it = 0, cnt = 0;
	long long su, ans = 0;
	while (r >= l && it<20) {
		su = 0;
		it++;
		mid = (r + l) / 2;
		for (int i = 0; i < n; i++)
			TT[i] = arr[i] + (i + 1)*mid;
		sort(TT.begin(), TT.end() );
		for (int i = 0; i<mid; i++)
			su += TT[i];
		if (su <= s && su >= ans){
			ans = su;
			cnt = mid;
		}

		if (su >= s || su<0) r = mid - 1;
		else l = mid + 1;
	}
	cout << cnt << " " << ans;
	system("pause");
}
