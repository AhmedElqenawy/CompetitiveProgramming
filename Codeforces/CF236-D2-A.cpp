#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int c=0,x[27] = {0};
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		x[a[i] - 'a']++;
	}
	for (int i = 0; i < 27;i++)
	if (x[i] != 0)
		c++;

	if (c % 2 == 0)
		cout << "CHAT WITH HER!"<<endl;
	else
		cout << "IGNORE HIM!" << endl;
//	system("pause");
}
