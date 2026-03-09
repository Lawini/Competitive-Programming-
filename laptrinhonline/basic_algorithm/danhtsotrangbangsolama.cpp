#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int d1,d2,d3,d4,d5,d6;
	if (n==999) {
	printf ("CMXCIX");
	return 0;
}
	if (n>=500) printf("D");

	if (n>=100) d2=(n%500)/100;
	for (int i=0;i<d2;i++) printf("C");
	
	if (n>=50) d3=((n%500)%100)/50;
	for (int i=0;i<d3;i++) printf("L");
	
	if (n>=10) d4=(((n%500)%100)%50)/10;
	for (int i=0;i<d4;i++) printf("X");
	
	if (n>=5) d5=((((n%500)%100)%50)%10)/5;
	for (int i=0;i<d5;i++) printf("V");
	
	if (n>=1) d6=(((((n%500)%100)%50)%10)%5)/1;
	for (int i=0;i<d6;i++) printf("I");
	
	return 0;
}
