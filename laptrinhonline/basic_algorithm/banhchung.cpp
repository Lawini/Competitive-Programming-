#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	
	long a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int id=0;
	 for (int i=0;i<n-1;i++){
	 	id=i;
	 	for (int j=i+1;j<n;j++){
	 		if (a[j]<=a[id])
	 		id=j;
		}
		int temp=a[i];
		a[i]=a[id];
		a[id]=temp; 
	}
	//two pointer
	int left = 0;
    int right = n - 1;
    int total_banh_chung = 0;

  
    while (left <= right) {
        total_banh_chung++; 
        int remaining_space = 4 - a[right];
        right--; 
        while (left <= right && a[left] <= remaining_space) {
            remaining_space -= a[left];
            left++; 
        }
    }

    printf("%d\n", total_banh_chung);
    return 0;
}
