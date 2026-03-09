#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
 	char n[25];
 	scanf("%s",n);
 	
 	if (strcmp(n,"0")==0){
 	printf("0");
 	return 0;
	}
 	int tong=0;
 	
 	for (int i=0;n[i]!='\0';i++) {
 	int digit=n[i]-'0';
 	tong+=digit;
 	}
 	
 	if(tong == 0){
 		printf("0");
 		return 0;
	}
 	
 	//modulo
 	
 	
	long long tich_mod=1;
	for (int i=0; n[i] !='\0';i++){
		int digit =n[i]-'0';
		if (digit !=0) {
			tich_mod=(tich_mod*digit)%tong;
		}
	}
	printf("%lld",tich_mod);
}
	
	

