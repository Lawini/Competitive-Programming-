#include<stdio.h>
#include<math.h> //fabs() tri tuyet doi cho so thuc
#include<stdlib.h> //abs() tri tuyet doi cho so nguyen
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	//sap xep tang dan (selection sort)
	for (int i=0;i<n-1;i++){
		int minindex=i;
	for (int j=i+1;j<n;j++)
	{   
	if (a[j]<a[minindex]) 
	minindex=j;
	}
	int temp=a[i];
	a[i]=a[minindex];
	a[minindex]=temp;
	}
	
	//Tim trung vi
	//le thi trung vi bang (n/2)+0.5
	//chan thi trung bi bang (n/2-1)
	int sum=0,trungvi;
	if(n%2!=0) trungvi=n/2;
	else trungvi=(n/2)-1;
	
	for (int i=0;i<n;i++){
		sum+=abs(a[i]-a[trungvi]);
	}
	printf("%d",sum);
}

