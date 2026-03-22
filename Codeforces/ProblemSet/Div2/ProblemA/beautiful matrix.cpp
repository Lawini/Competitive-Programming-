#include <stdio.h> //https://codeforces.com/problemset/problem/263/A
#include <math.h>
#include <stdlib.h>
int main(){
	int a[5][5];
	int i1,l1;
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
				if (a[i][j]==1) {
				i1=i;
				l1=j;
			}
			}
			
		}
		int kc=abs(2-i1)+abs(2-l1);
		printf("%d",kc);
	}

