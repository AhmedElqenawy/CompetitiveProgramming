#include <iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a, z;

	while (getline(cin, a))
	{

		if (a == "DONE")
			break;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == ' ' || a[i] == '.' || a[i] == '!' || a[i] == ',' || a[i] == '?')
			{
				a.erase(i, 1);
				i--;
			}
			else if (isupper(a[i]))
				tolower(a[i]);
		}
		transform(a.begin(), a.end(), a.begin(), ::tolower);
		//cout << a;
		z = a;
		std::reverse(z.begin(), z.end());
		if (a == z)
			cout << "You won't be eaten!" << endl;
		else
			cout << "Uh oh.." << endl;

	}
	//system("pause");
}
