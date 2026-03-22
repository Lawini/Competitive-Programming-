#include <stdio.h>
#include <math.h>
//https://codeforces.com/problemset/problem/136/A
int main(){
	int n;
	scanf("%d",&n);
    int p[n+1];
	int q[n+1];
	
	
	for (int i=1;i<=n;i++){
	scanf("%d",&p[i]);
}
    for (int i=1;i<=n;i++) {
    	int j=p[i] ; //1=2   2=3   3=4   4=1
    	q[j]=i   ;    //
	}
	for (int j=1;j<=n;j++){
		printf("%d ",q[j]);
		
	}
	}
	 

