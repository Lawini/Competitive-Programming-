#include <stdio.h>
#include <math.h>
// kadane co ban tim tong day con lon nhat (mo rong in ra ca day con co tong lon nhat nua)
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int currents=a[0];
	int maxs=a[0];
	
	int start=0, end=0, tempstart=0;
	for (int i=1;i<n;i++)
	{
    if (currents+a[i]>a[i])
    currents=currents+a[i];
    else {
	currents=a[i];
	tempstart=i; //neu if ko xay ra thi se bat dau o so tiep theo do
}
    if (currents>maxs){
	maxs=currents;
	start=tempstart;
	end=i;
	}
}
    printf("Day con tang lon nhat la:");
	for (int i=start;i<=end;i++ )
	printf(" %d",a[i]);
	printf ("\n");
	printf("max s= %d\n",maxs);	
}
