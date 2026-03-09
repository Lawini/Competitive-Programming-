#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main(){
	int n;
	scanf("%d",&n);
	
	while(n--){
		int x;
		scanf("%d",&x);
		
		int a[x];
		for (int i=0;i<x;i++)
		scanf("%d", &a[i]);
	
		int countchan=0, countle=0;
		for (int i=0;i<x;i++){
			if (a[i]%2==0)
		    countchan++;
			
			else if (a[i]%2!=0)
			countle++;
        }
        if (countchan==x) {
        	for (int i=0;i<x;i++) printf("%d ",a[i]);
		}
		else if (countle==x){
			for (int i=0;i<x;i++) printf("%d ", a[i]);
		}
		else {
			qsort(a, x, sizeof(int), compare);
			for (int i=0;i<x;i++) printf("%d ",a[i]);
		}
	printf("\n");
		
}
}
