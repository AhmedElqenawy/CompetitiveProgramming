#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
priority_queue <long long >pq;

int main()
{

	int n;
	while (cin >> n && n)
	{
		long long x;
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &x);
			
			pq.push(-1*x);
		}

		for (int i = 0; i < n; i++)
		{
			printf("%lld", -1 * pq.top());
			if (i != n - 1)
				printf(" ");
			pq.pop();
		}
		printf("\n");
		
	}


}
