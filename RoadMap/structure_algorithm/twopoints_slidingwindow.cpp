//https://codeforces.com/problemset/problem/279/B
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    long long t;
    scanf("%d %lld", &n, &t);
    
    int a[n];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    int left=0;
    int currenttime=0;
    int maxbooks=0;
    
    for (int right=0;right<n;right++){
    	currenttime+=a[right];
    	
    	while(currenttime>t){
    		currenttime=currenttime-a[left];
    		left++;
    	}
    		int currentbooks=right-left+1;
    		if (maxbooks<currentbooks)
    		maxbooks=currentbooks;
		
	}
	printf("%d",maxbooks);
	return 0;
	
}
