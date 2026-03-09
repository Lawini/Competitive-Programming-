#include<stdio.h>
#include<string.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	
	char xanh[n][k+1];
	char hong[n][k+1];
	
	for (int i=0;i<n;i++) scanf("%s", &xanh[i]);
	for (int i=0;i<n;i++) scanf("%s", &hong[i]);
	
	int vitri=0;
	for (int j=0;j<k;j++){ //<k vi so sanh theo cot 
		int nxanh[128]={0};
		int nhong[128]={0};
		
		for (int i=0;i<n;i++){
			nxanh[xanh[i][j]]=1;
		}
		for (int i=0;i<n;i++){
			nhong[hong[i][j]]=1;
		}
		
		int trungnhau=0;
		for (int i=0;i<128;i++){
			if (nxanh[i]==1 && nhong[i]==1) {
			trungnhau=1;
			break;
		}
	}
	  if(trungnhau==0) 
	  vitri++;
	}	
	printf("%d",vitri);
}
