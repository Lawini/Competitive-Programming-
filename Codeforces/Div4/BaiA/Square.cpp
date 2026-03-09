#include <stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n][4];
	for (int i=0;i<n;i++){
		for (int j=0;j<4;j++) 
		scanf("%d",&a[i][j]);
	}
	
	for (int i=0;i<n;i++){
		int j=0;
			if (a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2] && a[i][j]==a[i][j+3] )
			printf("YES\n");
			else printf("NO\n");
		}
	}
	

