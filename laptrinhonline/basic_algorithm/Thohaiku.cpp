#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	scanf("%s",a);
	
	printf("%.5s %.7s %.5s",a, a+6 ,a+14);
}
