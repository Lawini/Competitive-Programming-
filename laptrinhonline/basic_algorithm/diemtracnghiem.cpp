#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char dapan[100],trl[100];
	printf("");
	scanf("%s%s",dapan,trl);
	int len=strlen(dapan);// ham strlen() dung de do do dai chuoi 
	int sai=0;
	for (int i=0;i<len;i++)
	{
		if(dapan[i]!=trl[i])
		sai++;
	}
    float diem=(float)(len-sai)*10/len;
	printf("%.1f\n",diem);
c
