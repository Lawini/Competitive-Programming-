#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a[100];
    for(int i=0;i<100;i++)
    {
    scanf("%d",&a[i]);
	}
    int max=a[0], vt=1;
    for(int i=1;i<100;i++)
    {
    	if(a[i]>max){
    	max=a[i];
    	vt=i+1;
		}
    	
}
   printf("%d\n",max);   
   printf("%d\n",vt);  

}
