#include <stdio.h>
#include <math.h>
// kadane co ban tim tong day con lon nhat
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int currents=a[0];
	int maxs=a[0];
	//Thuat toan chinh
	for (int i=1;i<n;i++)
	{
    if (currents+a[i]>a[i]) //khi ma currents=so am hoac bang 0 thi khi cong voi a[i] se luon nho hon a[i] nen moi co dk nay
    currents=currents+a[i];
    else currents=a[i];
    
	if (currents>maxs) //neu currents>maxs thi cap nhat maxs
	maxs=currents;
    }
	printf("max s= %d\n",maxs);
}
