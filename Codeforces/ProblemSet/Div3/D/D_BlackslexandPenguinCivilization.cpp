#include<stdio.h>
int a[100005];
void solve(){
	int n;
	scanf("%d",&n);
	
	//n=0
	a[0]=0;
	int size=1;
	
	for (int step=1; step<=n;step++){
		//nua dau
		for (int i=0;i<size;i++){
			a[i]=a[i]*2+1;
		}
	
	 	// nua sau
		for(int i=0;i<size ;i++){
		a[size+i]=i*2;
		}
		size=size*2;
	}
	
	
	//output
	for(int i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}	
}
