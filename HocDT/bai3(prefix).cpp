#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    
    int S[n+1];
    S[1]=a[1];
    for (int i=2;i<=n;i++){
        S[i]=S[i-1]+a[i];
    }
    S[0]=0;
    int j=0;
    int result=-1e9;
    for (int i=1;i<=n;i++){
    	if (result<S[i]-S[j])
    	result=S[i]-S[j];
    	if (S[j]>S[i])
    	j=i;
	}
	printf("%lld",result);
}

