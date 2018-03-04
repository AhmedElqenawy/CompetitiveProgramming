#include <iostream>
#include<cmath>
#include<string>>
#include<algorithm>

using namespace std;
int main(){
	string s;
	while (getline(cin, s)){
		int c = 0;
		int h = 5;
		for (int i = 0; i < s.size(); i++){
			if ((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= 'a'&&s[i] <= 'z'))
			{
				h = 1;
				continue;
			}
			if (h == 1)
			{
				c++;
			}
			h = 5;
		}
		if (h == 1)
			c++;
		cout << c << endl;
	}
}
