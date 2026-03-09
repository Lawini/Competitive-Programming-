#include<stdio.h>
#include<math.h> //fabs() tri tuyet doi cho so thuc
#include<stdlib.h> //abs() tri tuyet doi cho so nguyen
int main(){
	int n;
	scanf("%d",&n);// luu phan tu thu nhat cua mang
	int *a=(int *)malloc(n * sizeof(int)); //cap phat bo nho


	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	//thuat toan sap xep tang dan bubble sort
	for (int i=0;i<n-1;i++) {
	
	int min_index=i; //vd i=0 thi min_index=0 nen j=1 nen so sanh a[0] voi a[1]
	for (int j=i+1;j<n;j++)
	{
		if (a[j]<a[min_index])
		min_index=j;
	}
	int temp=a[i]; 
	a[i]=a[min_index];
	a[min_index]=temp;
}
int maxgr=0;
  
  for (int i=0;i<n;i++){
  int count=1;
  
  	for (int j=i+1;j<n;j++){
  	
  		if (abs(a[i]-a[j])<=1)
  		count++;
  	}
	  if (count>maxgr)
	  maxgr=count;
  }
  
  printf("%d",maxgr);
  free(a); //giai phong bo nho sau khi malloc
  return 0;

}
