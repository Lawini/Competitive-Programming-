#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    

    for (int i=0;i<n;i++) scanf("%lld",&a[i]);
    
    //b1 check cac so bang nhau
    int count=1;
    for (int i=1;i<n;i++) {
        if (a[i]!=a[i-1])
        count++;
    }
    
    
    //tao mang moi
    long long uniqueranks[count];
    int k=0;
    
    uniqueranks[k]=a[0]; 
    k++; // k ++ o day dung de bao ngan 0 da dung tang len ngan 1 de chay vong for cho dung
    
    for (int i=1;i<n;i++) {
    	if (a[i] != a[i-1]){
    		uniqueranks[k]=a[i];
    		k++; // k nay tang 1->2 , 2->3,..
		}	
	}
	
	//b2 duyet mang 2
	int m;
	scanf("%d",&m);
	long long b[m];
	
	for (int i=0;i<m;i++) scanf("%lld",&b[i]);
	
	//b3 duyen binary searching
	
	for (int i=0;i<m;i++){
		int low=0, high=count-1;
		int ans=count+1; //neu ko co ca nao tot hon no in ra hang lon hon hang cu 1 bac
		
		while (low<=high) {
		int mid=low+(high-low)/2;
		if (b[i]>=uniqueranks[mid]){
			ans=mid+1;
			high=mid-1;
		}
		else {
			low=mid+1;
		}
	}
		printf("%d\n",ans);
	}
	return 0;
}
