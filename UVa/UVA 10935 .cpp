#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include<map>
#include<set>
#include<vector>
#include <queue>
#include<deque>
using namespace std;
priority_queue <int> pq;
queue <int> q;
//long long v1[1000000];
//long long v2[1000000];
int main()
 
{
	//priority_queue <int, vector<int >, greater <int> > pq;
	int n; 
	while (cin >> n && n)
	{
		int c = 0;
 
		for (int i = 1; i <= n; i++)
		{
			q.push(i);
		}
 
		cout << "Discarded cards:";
		while (q.size() > 1)
		{
			cout <<" "<<q.front();
			c++;
			if (c <= n - 2)
				cout << ',';
			q.pop();
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << endl;
		cout << "Remaining card: " << q.front() << endl;
		q.pop();
 
	}
 
}
