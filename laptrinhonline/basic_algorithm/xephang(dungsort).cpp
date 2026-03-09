#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int minindex;
	for (int i=0;i<n-1;i++){
		minindex=i;
		for (int j=i+1;j<n;j++){
			if (a[j]>a[minindex])
			minindex=j;
		}
		int temp=a[i];
		a[i]=a[minindex];
		a[minindex]=temp;
	}
	
	int count=0;
	int count1=0;
	int count2=0;
	int max[3]={0,0,0};
	max[0]=a[0];
	for(int i=0;i<n;i++){
		if (a[i] != max[0]){
		max[1]=a[i];
		break;
	}
	}
	for(int i=0;i<n;i++){
	if (a[i] != max[1] && a[i] !=max[0]){
	max[2]=a[i];
	break;
    }
	}
	for (int i=0;i<n;i++){
		if (a[i]==max[0]) count++;
		else if (a[i]==max[1]) count1++;
		else if(a[i]==max[2]) count2++;
	}
	
	
    printf("1st: %d\n",count);
     printf("2nd: %d\n",count1);
      printf("3rd: %d\n",count2);
}

/*
#include <stdio.h>
#include <stdlib.h> // Thu vi?n cho qsort

// 1. Dùng hàm so sánh c?a qsort (d? s?p x?p GI?M D?N)
int compare(const void *a, const void *b) {
    // L?y b - a d? s?p x?p gi?m d?n
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 2. Dùng qsort (O(N log N)) thay vì Selection Sort (O(N^2))
    qsort(a, n, sizeof(int), compare);

    // 3. T?i uu hóa vi?c d?m (ch? c?n 1 vòng l?p)
    long long count1 = 0;
    long long count2 = 0;
    long long count3 = 0;
    
    int i = 0; // Con tr? "di b?"

    // --- Ð?m h?ng 1 ---
    if (i < n) { // Ki?m tra xem m?ng có r?ng không
        int max1 = a[i]; // max1 ch?c ch?n là a[0]
        while (i < n && a[i] == max1) {
            count1++;
            i++; // Di chuy?n con tr?
        }
    }

    // --- Ð?m h?ng 2 ---
    if (i < n) { // Ki?m tra xem dã h?t m?ng chua
        int max2 = a[i]; // i dang là v? trí c?a s? l?n th? 2
        while (i < n && a[i] == max2) {
            count2++;
            i++; // Di chuy?n con tr?
        }
    }

    // --- Ð?m h?ng 3 ---
    if (i < n) { // Ki?m tra xem dã h?t m?ng chua
        int max3 = a[i]; // i dang là v? trí c?a s? l?n th? 3
        while (i < n && a[i] == max3) {
            count3++;
            i++; // Di chuy?n con tr?
        }
    }
    
    // In k?t qu?
    printf("1st: %lld\n", count1);
    printf("2nd: %lld\n", count2);
    printf("3rd: %lld\n", count3);
    
    return 0;
}
*/ //sort theo gemini=)
