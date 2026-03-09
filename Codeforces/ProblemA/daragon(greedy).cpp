//bai toan tham lam(greedy) kinh dien https://codeforces.com/problemset/problem/230/A
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int s,n;
	scanf("%d%d",&s,&n);
	
	int a[n][2];
	for (int i=0;i<n;i++) {
	for(int j=0;j<2;j++) scanf("%d",&a[i][j]);
        }    
	//sort
	int mindex;
	for (int i=0;i<n-1;i++){
		mindex=i;
		for (int j=i+1;j<n;j++){
			if (a[j][0]<a[mindex][0])
			mindex=j;
		}
		//hoan doi ca suc manh va phan thuong
		int temp=a[i][0];
		a[i][0]=a[mindex][0];
		a[mindex][0]=temp;
	    int temp2=a[i][1];
	    a[i][1]=a[mindex][1];
	    a[mindex][1]=temp2;
	    
	}
	//defeat dargon

			for (int i=0;i<n;i++){
				if (s>a[i][0]) {
				s+=a[i][1];
				}
				else {
				printf("NO");
				return 0;
			}
				
		}
		printf("YES");
	}
