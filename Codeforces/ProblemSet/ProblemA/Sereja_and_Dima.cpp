//https://codeforces.com/problemset/problem/381/A
#include <stdio.h>
#include <math.h>
int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	
	int left=0;
	int sum1=0,sum2=0;
	int right=n-1;
	int turn=0;
	
	while(left<=right){
		int change;
		if (a[right]>a[left]) {
		change=a[right]; 
		right--;

		}
		else {
			change=a[left];
			left++;
		}
		if (turn%2==0) sum1+=change;
	    else sum2+=change;
	    turn++;
	}
	
	
	printf("%d",sum1);
	printf(" %d",sum2);
	
}
