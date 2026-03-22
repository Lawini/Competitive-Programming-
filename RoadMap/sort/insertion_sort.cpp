#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	int x;
	int j;
	for (int i = 1; i < n; i++){
		x = a[i];
		j = i;
		while (j > 0){
			if (x < a[j - 1]){
				a[j] = a[j - 1];
				j--;
			}
			else break;
		}
		a[j] = x;
	}
	
//	for (int i = 0; i < n; i++){
//		printf("%d", a[i]);
//	}

	// 2 2 2 3 4 5 
	// a[i] 
	
	for (int i = 0; i < n; i++){
		int count = 1;
		for (int j = 1; j < n; j++){
			if (a[j] != a[j - 1]){
				break;
			}
			if (a[j] == a[j - 1]){
				count++;
			}
		}
		printf ("%d xuat hien %d\n",a[i], count);
		
		
	}
	
}

