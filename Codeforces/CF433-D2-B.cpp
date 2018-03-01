#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	//vector <vector <int>> v2 (n+1,vector<int>(n+1));
	//cout << v2[0][0];
	vector <long long>v(n + 1, 0);
	vector <long long > vsu(n+1,0);
	vector <long long > vsso(n + 1, 0);
	v[0]=0;

	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		vsu[i] = v[i] + vsu[i - 1];

	}
	sort(v.begin(), v.begin() + (n+1));
	for (int i = 1; i <= n; i++)
	{
		vsso[i] = v[i] + vsso[i - 1];
	}

	int m;
	cin >> m;

	for (int i = 0; i< m; i++)
	{
		int a, s,c;
		cin >> c >> a >> s;
		if (c == 1)
			cout << vsu[s] - vsu[a - 1] << endl;
		else
		{
			cout << vsso[s] - vsso[a - 1] << endl;
		}
	}



//	system("pause");
}
