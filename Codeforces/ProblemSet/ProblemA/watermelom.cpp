//https://codeforces.com/problemset/problem/4/A
#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	int n;
	scanf("%d",&n);
	if (n%2==0 && n>2) //neu n=2 thi chia 2 phan bang 1+1 2 so le
	printf("YES\n");
	else printf("NO\n");
	return 0;
}
