#include<stdio.h>
#define N 2000005
long long D[N];
long long S[N];
int main(){
	int n,k,q;
	scanf("%d%d%d",&n,&k,&q);
	
	for (int i=0;i<n;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		D[l]++;
		D[r+1]--;
	}
	
	long long cur_val=0;
	for(int i=1;i<N;i++){
		cur_val+=D[i];
		int is_valid=0;
		if (cur_val>=k){
			is_valid=1;
		}
		S[i]=S[i-1]+is_valid;
	}
	
	while(q--){
		int l,r;
		scanf("%d%d",&l,&r);
		
			long long sum=S[r]-S[l-1];
			printf("%lld\n",sum);
			
	}

	
}
