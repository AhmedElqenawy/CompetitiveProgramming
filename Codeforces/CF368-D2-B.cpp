#include <iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include <vector>
#include<map>
using namespace std;
map<int, int>mp;
int main()
{
	int x, y;
	cin >> x >> y;

	vector <int>v(x+2) ;
	vector <int>v2(x+2);

	for (int i = 1; i <= x; i++)
		cin >> v[i];
	
	//mp[v[x]]++;
	for (int i = x; i > 0; i--)
	{
		mp[v[i]]++;

		if (mp[v[i]] == 1)
			v2[i] = 1 + v2[i + 1];
		else
			v2[i] = v2[i + 1];
	}
	


	for (int i = 0; i < y; i++)
	{
		int a;
		cin >> a;
		cout << v2[a] << endl;;
	}
	
//	system("pause");
}
