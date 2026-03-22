#include<stdio.h>
#include<limits.h>
#define N 50

long long a[N][N];
long long P[N][N];

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int j=0;j<=n;j++) a[0][j]=0;
	for (int i=0;i<n;i++)  a[i][0]=0;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
			
			P[i][j]=a[i][j]+P[i-1][j]+P[i][j-1]-P[i-1][j-1];
		}
	}
	
	long long result=-1e9;
	for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            long long x=0;        
            long long y=0;       
            for (int k=1;k<=m;k++){
                long long t=P[j][k]-P[i-1][k]-P[j][k-1]+P[i-1][k-1];
                x+=t;                     
                long long cur=x-y;      
                if (cur>result) result=cur;
                if (x<y) 
				y=x;           
            }
        }
    }
	printf("%lld",result);	
}
	



