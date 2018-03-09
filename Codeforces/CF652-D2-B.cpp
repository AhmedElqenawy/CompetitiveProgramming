#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include<map>
#include<set>
#include<stack>
#include<bitset>
#include<queue>
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int > v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	for (int i = 0; i < n / 2; i++)
	{
		cout << v[i] << " " << v[n - i - 1] << " ";

	}
	if (n%2)
		cout << v[n / 2] << endl;
	else
		cout<<endl;

	
}
