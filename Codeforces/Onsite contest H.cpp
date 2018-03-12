#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;
long long v1[1000000];
long long v2[1000000];
int main()

{
	vector <long long> v3;
	int n,q,x=0; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v1[i];

	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		if (l > r)
			swap(l, r);
		v2[l - 1] += -1;
		v2[r]++;
	}
	for (int i = 1; i <= n; i++)
		v2[i] += v2[i - 1];

	for (int i = 0; i < n; i++)
	if (v2[i] >= 0) {
		v3.push_back(v1[i]);
		x++;
	}

	cout << x << endl;
	for (int i = 0; i < x; i++)
		cout << v3[i] << " ";
//	cout << endl;
//	system("pause");
}
