#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	//int c=0,x[27] = {0};
	string a,b;
	cin >> a>>b;
	//bool q = NULL;
	for (int i = 0; i < a.length(); i++)
	{
		if (isupper(a[i]))
			a[i] = tolower(a[i]);

		if (isupper(b[i]))
				b[i] = tolower(b[i]);
	
	}

	if (a>b)
		cout << "1" << endl;
	else if (a<b)
		cout << "-1" << endl;
	else if (a==b)
		cout << "0" << endl;

	
	
//	system("pause");
}
