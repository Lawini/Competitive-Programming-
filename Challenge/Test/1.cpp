#include <stdio.h>
#define N 100005
long long a[N];
void solve(int n, long long k)
{
	int L = 0;
	int R = n - 1;
	int count = 0;
	while (L < R)
	{
		if (a[L] + a[R] == k)
		{
			count++;
			L++;
			R--;
		}
		else if (a[L] + a[R] < k)
		{
			L++;
		}
		else
		{
			R--;
		}
	}
	
	
}
int main()
{
	int n;
	scanf("%d", &n);

	long long k;
	scanf("%lld", &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	solve(n, k);
}
