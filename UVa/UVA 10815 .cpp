#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
using namespace std;
map<int, int>mp;
set<string>::iterator it;
set <string> st;
int main()
{
	string x;
	string z = "";
	while (getline(cin, x))
	{
		for (int i = 0; i < x.length(); i++)
		{
			if (isalpha(x[i]))
			{
				x[i] = tolower(x[i]);
				z += x[i];
			}
			else if (z != ""){ st.insert(z); z = ""; }

		}
		if (z != ""){ st.insert(z); z = ""; }

	}
	for (auto it : st)
		cout << it << endl;
	
	
	system("pause");
}
