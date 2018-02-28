#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
char q[26];
int main()
{
	int l; string x;
	for (int w = 0;; w++)
	{
		cin >> l;

		if (l == 0)
			break;

		else
		{
			cin >> x;
			int idx = x.find('Z');
			if (idx != -1)
			{
				cout << '0' << endl;
				continue;
			}
			else
			{
				int dd = 10e6, d = -1, id = -1, ir = -1;
				for (int i = 0; i < x.length(); i++)
				{

					if (x[i] == 'D')
						id = i;
					else if (x[i] == 'R')
						ir = i;
					if (id != -1 && ir != -1)
					{
						d = abs(id - ir);
						if (d < dd)
							dd = d;
					}

				}
				cout << dd << endl;
			}

		}
	}


}
