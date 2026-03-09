#include<stdio.h>
#include<limits.h>
#define N 50

long long a[N][N];
long long P[N][N];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	
	
	for (int i=0;i<=n;i++) P[i][0]=0;
	for (int j=0;j<=m;j++) P[0][j]=0;
	
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
			
			P[i][j]=a[i][j]+P[i-1][j]+P[i][j-1]-P[i-1][j-1];
		}
	}
	long long ans=LLONG_MIN;
	int len=(n<m ? n:m);
	
	
	//hcn
	for (int x=1;x<=len;x++){
		for (int y=1;y<=len;y++){
			for (int i=1; i<=n;i++){
			for (int j=1;j<=m;j++){
				long long cur=P[i][j]-P[x-1][y]-P[x][y-1]+P[x-1][y-1];
			
			if (cur>ans){
				ans=cur;
					}
				}
			}
		}
	}
	printf("%lld",ans);
}
