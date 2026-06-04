#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void Nhapfile(int *n, int *m, float *a, float *b, char *ten){
	FILE *f = fopen(ten, "rt");
	if(f == NULL){
		printf("Khong the mo\n");
		exit(1);
	}
	
	fscanf(f, "%d%d\n", n, m);
	 
	for (int i = 0; i <= *n; i++){
		fscanf(f, "%f\n", &a[i]);
	}
	for (int i = 0; i <= *m; i++){
		fscanf(f, "%f\n", &b[i]);
	}
	
	fclose(f);
}

float tinh(int a, float *b, float x){
	
	float sum  = 0;	
	for (int i = 0; i <= b; i++){
		sum += b[i] * pow(x, i);
	}
	
	return sum;
}
void tinh(int n, int m, float *a, float *b){
	
	float d1, d2;
	scanf("%f%f", &d1, &d2);
	
	float sum_1 = sqrt(tinh(n, a, d1) + tinh(m, b, d2)) - 2013;
	
	
	
	
	
}
int main(){
	
	int n, m;
	float a[n], float[m];
	
	char ten[50];
	scanf("%s", ten);
	fflush(stdin);
	Nhapfile(&n, &m, a, b, ten);
	
}
