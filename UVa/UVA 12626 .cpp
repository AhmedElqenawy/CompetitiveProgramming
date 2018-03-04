#include<cmath>
#include<string>
#include<algorithm>
#include <iostream>
using namespace std;
int main()
{/*string a, z;
	for (int q = 0;; q++)
	{   
		
		getline(cin, a);
		if (a == "DONE")
			break;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == ' ' || a[i] == '.' || a[i] == '!' || a[i] == ',' || a[i] == '?')
			{
				a.erase(i, 1);
				i--;
			}
			else if ((a[i] >= 'A'&& a[i <= 'Z']) )
				a[i]=a[i]-32;
		}
		cout << a;
		z = a;
		std::reverse(z.begin(), z.end());
		if (a == z)
			cout << "You won't be eaten! " << endl;
		else
			cout << "Uh oh.." << endl;
}*/
	
	string a;

	int q; cin >> q;
	for (int w = 0; w < q; w++)
	{
		int c = 0;
		int arr[28] = {0};
		cin >> a;
		for (int i = 0; i < a.length(); i++)
		{
			arr[a[i]-'A']++;
		}
		for (int i = 0;; i++)
		{
			if (arr['A' - 'A'] >= 3 && arr['M' - 'A'] >= 1 && arr['R' - 'A'] >= 2 && arr['G' - 'A'] >= 1 && arr['I' - 'A'] >= 1 && arr['T' - 'A'] >= 1)
			{
				c++;
				arr['A' - 'A'] -= 3;
				arr['M' - 'A'] -= 1;
				arr['R' - 'A'] -= 2;
				arr['G' - 'A'] -= 1;
				arr['I' - 'A'] -= 1;
				arr['T' - 'A'] -= 1;

			}
			else
			{
				break;
			}
		}

		cout << c << endl;
	
	
	}
		
	//system("pause");
}
