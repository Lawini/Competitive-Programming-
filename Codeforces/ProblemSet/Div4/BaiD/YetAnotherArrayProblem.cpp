#include<stdio.h>
#include<math.h>
#include <stdbool.h>
int main(){
	
	long long primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
	int num_primes=16;
	
	
	int n;
	scanf("%d",&n);
	
	
	while(n--) {
		int k;
		scanf("%d",&k);
		long long a[k];
	for (int j=0;j<k;j++) scanf("%lld",&a[j]);


    long long answer=-1;


   //duyet qua tung so nguyen to p
    for (int i=0;i<num_primes;i++){
    	long long p=primes[i];
    	
    	bool alldivisble=true;
    	
    	//duyet qua ca mang a de kiem tra
    	for (int j=0;j<k;j++){
    		if (a[j]%p !=0){
    			//tim thay mot so khong chia het
    			alldivisble=false;
    			break;
			}
		}
		//lat co tuc la khong phai tat ca deu chia het
    
            if (!alldivisble){
			answer=p;
			break;
    }	
}
    printf("%lld\n",answer);
}
}
