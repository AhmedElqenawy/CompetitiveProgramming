#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	char a[4] = { ',', '!', '.', '?' };
	string x; getline(cin, x);
	//x.insert(1, " "); cout << x;
	
	for (int i = 0; i <(int) x.length(); i++)
	{
		if ((x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= 'a'&& x[i] <= 'z'))
			continue;
		else if (x[i] == ' ' && i < (int)x.length()-1)
		{
			if (x[i - 1] == ' ')
			{
				x.erase(i, 1); i--;
			}
			 if (x[i + 1] == ',' || x[i + 1] == '!' || x[i + 1] == '.' || x[i + 1] == '?')
			 {
				 x.erase(i, 1); i--;
			 }
		}
		else if ((x[i] == ',' || x[i ] == '!' || x[i] == '.' || x[i ] == '?') && i<(int)x.length()-1)
		{
			if ((x[i+1] >= 'A' && x[i+1]<='Z')||(x[i+1]>='a'&& x[i+1] <= 'z'))
			{
				x.insert(i+1," ");
			}

			 if (x[i + 1] == ' ')
				continue;
			
		}
	}


	cout << x << endl;
//	system("pause");
}
