#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char c[1000][15];
    int tong=a;
    for (int i=0;i<b;i++){
    	scanf("%s",c[i]);
	}
    for (int i=0;i<b;i++) {
    	if (strcmp (c[i],"fechou")==0)
    	tong=tong+1;
    	else if (strcmp (c[i],"clicou")==0)
    	tong=tong-1;
	}
	printf("%d",tong);

}
