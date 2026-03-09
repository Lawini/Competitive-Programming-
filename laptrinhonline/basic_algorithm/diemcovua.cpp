#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[100][10];
    for (int i=0;i<n;i++) scanf("%s",&a[i]);
    int tong=0;
	for(int i=0;i<n;i++)
    {
    	if (strcmp(a[i], "t")==0) tong+=1;
    	if (strcmp(a[i], "M")==0) tong+=3;
    	if (strcmp(a[i], "T")==0) tong+=3;
    	if (strcmp(a[i], "X")==0) tong+=5;
    	if (strcmp(a[i], "H")==0) tong+=9;
    	if (strcmp(a[i], "V")==0) tong+=0;
	}
	printf("%d",tong);
	return 0;
}
