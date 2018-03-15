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
	int n;
	cin >> n;
	int arr[51][51];
	vector <int> v(n+1,0);
	for (int i = 0; i < n;i++)
	for (int j = 0; j < n; j++)
		cin >> arr[i][j];

	for (int i = 1; i <= n; i++){
		int mn = 0; int ind = 0;
		for (int j = 0; j < n; j++){
			int cnt=0;
			for (int k = 0; k < n; k++){
				cnt += bool(arr[j][k] == i);
			}
			if (cnt>mn)mn = cnt, ind = j+1;
		}
		v[ind] = i;
	}
	for (int i = 1; i <= n; i++){
		if (v[i] == 0){
			v[i] = n; break;
		}
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << " ";
//	system("pause");
}
