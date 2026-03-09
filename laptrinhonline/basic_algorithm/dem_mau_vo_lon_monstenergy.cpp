#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char chuoi[10000];
	scanf("%s",chuoi);
	
	char dau1=chuoi[0], dau2=chuoi[1], dau3=chuoi[3]
	int dem=0;
	
	for(int i=0;i<26;i++)
{
	scanf("%s",chuoi[i]);
}
    
	for (int i=1;chuoi[i]!='\0';i++) 
	{
		if(chuoi[i]==dau)
		dem++;
	}

	printf("%d",dem);
}
