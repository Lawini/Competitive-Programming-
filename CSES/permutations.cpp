#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    
    if(n==1){
	printf("1");
    return 0;
}
    else if (n==2 || n==3) printf("NO SOLUTION");
    
    else {
    	for (int i=1;i<=n;i++) {
    	if (i%2==0) printf("%d ",i);
	}
		for (int i=1;i<=n;i++) {
		if(i%2!=0) printf("%d ",i);
}
}
}