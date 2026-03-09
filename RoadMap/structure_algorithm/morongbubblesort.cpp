#include <stdio.h>
#include <math.h>
#include <stdlib.h> //dung abs
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	//thuat toan bubble sort
	for (int i=0;i<n-1;i++){
		int min_index=i;
		for (int j=i+1;j<n;j++) //hieu duoc cai vong lap nay thi moi oke dc
		{
			if (a[j]<a[min_index])
			min_index=j;
		}
		//swap
		int temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	}
	int x;
	scanf("%d",&x);
	int min=abs(a[0]-x);
	int close=a[0];
	for (int i=1;i<n;i++) 
	{
	if (abs(a[i]-x)<min){
	min=abs(a[i]-x);
	close=a[i];	
	}
	}
	printf("%d",close);
}
