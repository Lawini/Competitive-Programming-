#include<stdio.h>
#include <math.h>
#include<string.h>
void solve(){
	int n,k;
	scanf("%d%d",&n,&k);
	
	char xanh[n][k+1];
	char hong[n][k+1];
	
	for (int i=0;i<n;i++) scanf("%s", &xanh[i]);
	for (int i=0;i<n;i++) scanf("%s", &hong[i]);
	
	int vitri=0;
	for (int j=0;j<k;j++){
		
		int nganxanh[128]={0};
		int nganhong[128]={0};
		
    for (int i=0;i<n;i++){
		nganxanh[xanh[i][j]]=1; //danh dau ky tu o so may trong bang ASCII
	}
	for (int i=0;i<n;i++){
		nganhong[hong[i][j]]=1;
    }
    int trungnhau=0;
    for (int i=0;i<128;i++) {
    	if (nganxanh[i]==1 && nganhong[i]==1){
    	trungnhau=1;
        }
	}
	if (trungnhau==0) 
	vitri++;	
	}
	printf("%d",vitri);
}

int main(){
    solve();
}
	
	

