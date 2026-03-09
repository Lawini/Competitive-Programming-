#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	int dem=0;
	
	int z;
	do {
		scanf("%d",&z);
	} while (z<=x);
	
	
	int y=0;
	while (y<=z){
		y+=x;
		x++;
		dem++;
	}
	printf("%d\n",dem);
}
