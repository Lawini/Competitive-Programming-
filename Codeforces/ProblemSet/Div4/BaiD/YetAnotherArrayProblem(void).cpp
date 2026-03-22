#include<stdio.h>
#include<stdbool.h>
#include<vector>

    long long primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
    int lenprimes=16;
    
    void solve(){
    	int n;
        scanf("%d",&n);
        
        for (int i=0;i<n;i++){
        	int k;
        	scanf("%d",&k);
        	std::vector<int> a(k);
        	for (int j=0;j<k;j++) scanf("%d",&a[j]);
        	
        	long long answer=-1;
        	
        	for (int i=0;i<lenprimes;i++){
        		long long p=primes[i];
        		bool chiahet=true;
        		
        		for (int j=0;j<k;j++){
        			if (a[j]%p!=0){
        			chiahet=false;
        			break;
				}
			}
			if (chiahet) 
			answer=p;
			break;
		}
		printf("%lld\n",answer);
}
}
    int main(){
    	int t;
    	scanf("%d",&t);
    	
    	while (t--){
    		solve();
		}
		return 0;
	}
