#include<stdio.h>
int main(){
    long long a[4];
    for (long long i=0;i<4;i++) scanf("%lld",&a[i]);
    long long sum=0;
    long long min=a[0];
    
    
    for (long long i=2;i<4;i++){
        if(min>=a[i])
        min=a[i];
    }
    for (long long i=0;i<min;i++){
        sum+=256;
    }
    
    
    
    
    // ta con can the 2 va 3 the 2 con lai la a[0]-min=5-3=2;

    
    long long the2;
    the2=a[0]-min;
    
    int min2=the2;
    if (min2>a[1]) min2=a[1];
    
    for (int i=0;i<min2;i++){
    	sum+=32;
	}
	printf("%lld",sum);

}