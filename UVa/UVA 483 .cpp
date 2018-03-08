#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string b="";
	string a;
	while (getline(cin,a))
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != ' ')
				b += a[i];
			else
			{
				reverse(b.begin(), b.end());
				cout << b;
				cout << " ";
				b = "";
			}

		}
		reverse(b.begin(), b.end());
		cout << b;
		cout << endl;
		b = "";
		
	}

}
