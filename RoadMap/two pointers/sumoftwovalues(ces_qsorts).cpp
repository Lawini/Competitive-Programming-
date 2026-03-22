#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int val;
	int id;
}element;

int compare (const void *a, const void *b){
    element *e1 = (element *)a;
    element *e2 = (element *)b;
    return (e1->val - e2->val); 

}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	
	element a[n];
	for (int i=0;i<n;i++) {
	scanf("%d",&a[i].val);
	a[i].id=i+1; 
	}
	 	
	//sort
	qsort(a, n, sizeof(element), compare);
	
	
	int L=0;
	int R=n-1;
	
	while (L<R){
		int target=a[L].val+a[R].val;
		if (target==m){
			printf("%d %d",a[L].id,a[R].id);
			return 0;
		}
		else if (target > m){
			R--;
		}
		else {
			L++;
		}
	}
	printf("IMPOSSIBLE");
	return 0;
}

