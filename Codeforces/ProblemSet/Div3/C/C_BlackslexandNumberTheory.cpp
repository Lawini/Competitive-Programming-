#include<stdio.h>
void solve(){
	int n;
	scanf("%d",&n);
	int a[n];
	int min_val=-1;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (i==0 || a[i]<min_val){
			min_val=a[i];
		}
	}
	//x=a[i]
	//a[i]=a[i]%a[i]=0
	//x>=k
	
	long long mdiff=-1;
	int check=1;
	for (int i=0;i<n;i++){
		if (a[i]>min_val){
			check=0;
			long long diff=a[i]-min_val;
			//find difference min
			if (mdiff==-1 || diff <mdiff){
				mdiff=diff;
			}
		}
	}
	//case 1 
	if (check){
		printf("%d\n",min_val);
	}
	//case 2
	else {
		if(mdiff>min_val){
			printf("%lld\n",mdiff);
		}
		else {
			printf("%d\n", min_val); 
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}	
}
