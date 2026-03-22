#include <stdio.h>
#include <math.h>
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
    if (currents+a[i]>a[i]) 
    currents=currents+a[i];
    else currents=a[i];
    
	if (currents>maxs) 
	maxs=currents;
    }
	printf("%d\n",maxs);
}

