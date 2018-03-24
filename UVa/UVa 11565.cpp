#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <map>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int n;
char ar2[1000][1000];
bool vis[1000][1000] = { 0 };
int arr[1000][1000] = { 0 };
map<int, int>mp;
set<string>::iterator it;
bitset <64> bt;
set <string> st;
using namespace std; 
int main()
{


	bool T = false;
	int A, B, C, X, Y, Z;
	cin >> n;
	while (n--)
	{
		cin >> A >> B >> C;
		for (int i = -100; i <= 100; i++)
		{
			for (int j = i+1; j <= 100; j++)
			{
				for (int h = j+1; h <= 100; h++)
				{
					if (i + j + h == A && i*j*h == B && i*i + j*j + h*h == C)
					{
						X = i; Z = h; Y = j;
						T = true;
					}
				}
			}
		}

		if (!T)
			cout << "No solution." << endl;
		else 
			cout << X << " " << Y << " " << Z << endl;
		T = false;
	}


//	system("pause");
}
