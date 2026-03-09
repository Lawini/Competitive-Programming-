#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	char a[51][51];
	char b[51][51];
	
	
	for (int i=0;i<n;i++){
			scanf("%s", a[i]);
	}
	
	for (int i=0;i<m;i++){
			scanf("%s", b[i]);
	}
	
	
	
	bool found=false; //gan co da tim thay
	
	int count=0;
	for (int i=0;i<=n-m;i++){
		for (int j=0;j<=n-m;j++){
			
		bool match=true;
		
		for (int k=0;k<m;k++){
			for (int l=0;l<m;l++){
				//so sanh tung ky tu
				if (a[i+k][j+l] !=b[k][l]){
					match=false;
					break;
				}
			}
		if (!match){
		break;
		}
		}
		if(match) {
		found=true;	
		break;
			}
		}
		if(found) {	
		break;
		}
	}
	if (found) printf("Yes\n");
	else printf("No\n");
	
}
