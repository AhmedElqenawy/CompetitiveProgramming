#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
char q[26];
int main()
{
	int n;
	bool t = false;
	char a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		a = tolower(a);
		q[(int)a - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (q[i] == 0)
		{
			t = true; break;
		}
	}
	if (t == false)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


}
