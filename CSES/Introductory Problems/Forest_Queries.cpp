#include<stdio.h>
long long S[1005][1005];
char buffer[1005];
void solve(){
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	long long sum;
	sum=S[x2][y2]-S[x1-1][y2]-S[x2][y1-1]+S[x1-1][y1-1];
	printf("%lld\n",sum);
}
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	

	for (int i=1;i<=n;i++){
		scanf("%s", buffer);
		for (int j=1;j<=n;j++){
			int val=0;
			if (buffer[j-1]=='*'){
				val=1;
			}
			else {
				val=0;
			}
			
		S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+val;		
		}
	}
	

	while(q--){
		solve();
	}
	
	
}
