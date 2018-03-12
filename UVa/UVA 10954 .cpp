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
//long long v1[1000000];
//long long v2[1000000];
int main()

{
	//priority_queue <int, vector<int >, greater <int> > pq;
	int n; 
	while (cin >> n && n)
	{
		
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			pq.push(-(x));
		}
		long long tsum = 0;
		while (pq.size()>1)
		{
			long long sum = 0;
			sum += (-1 * (pq.top())); pq.pop();
			sum += (-1 * (pq.top())); pq.pop();
			tsum += sum;
				pq.push(-1*sum);
		}
		cout << tsum << endl;
		pq.pop();
	}

	system("pause");
}
