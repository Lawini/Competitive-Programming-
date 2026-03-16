#include<stdio.h>
typedef struct {
	int val;
	int id;
}element;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	
	element a[n];
	for (int i=0;i<n;i++) {
	scanf("%d",&a[i].val);
	a[i].id=i+1; 
	}
	
	//sort
	int idx;
	for (int i=0;i<n-1;i++){
		idx=i;
		for (int j=i+1;j<n;j++){
			if (a[j].val<a[idx].val){
				idx=j;
			}
		}
		element temp =a[i];
		a[i]=a[idx];
		a[idx]=temp;
	}
	// sort xong 1 2 5 7 vi tri cung thay doi nen luc nay se la 1 4 nhung ma
	//nguoi ta can vi tri ban dau la 2 7 5 1 la 2 4
	
	
	
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

