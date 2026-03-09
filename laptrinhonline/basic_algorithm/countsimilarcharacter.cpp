#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char chuoi[10000];
	scanf("%s",chuoi);
	
	char dau=chuoi[0];
	int dem=0;

    
	for (int i=1;chuoi[i]!='\0';i++) //vi ham char co do dai co dinh nen '\0'se la diem ket thuc
	{
		if(chuoi[i]==dau)
		dem++;
	}

	printf("%d",dem);
}
