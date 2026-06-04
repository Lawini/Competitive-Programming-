#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int msv;
	char ht[20];
	int luong;
	char ban;
	
}Nhanvien;
int main(){
	FILE *f;
	f = fopen("input.txt", "rt");
	
	
	int n;
	fscanf(f, "%d\n", &n);
	Nhanvien ds[n], tmp;
	
	for (int i = 0; i < n; i++){
		fscanf(f, "%d\n", &ds[i].msv);
		fgets(ds[i].ht, sizeof(ds[i].ht), f);
		ds[i].ht[strcspn(ds[i].ht, "\n")] = 0; 
		fscanf(f, "%d\n", &ds[i].luong);
		fscanf(f, " %c\n", &ds[i].ban);
	}
	
	fclose(f);
	
	//Tinh tien luong trung binh
	
	
	f = fopen("output.txt", "w");
	
	int sumA = 0, sumB = 0, sumC = 0;
	int cntA = 0, cntB = 0, cntC = 0;
	for (int i = 0; i < n; i++){
		if (ds[i].ban == 'A'){
			sumA += ds[i].luong;
			cntA++;
		}
		else if (ds[i].ban == 'B'){
			sumB += ds[i].luong;
			cntB++;
		}
		else if (ds[i].ban == 'C'){
			sumC += ds[i].luong;
			cntC++;
		}
	}
	
	if (cntA > 0) fprintf(f, "Luong trung binh cua cty A la %l\nf", (double) sumA / cntA); else fprintf(f, "Khong co nhan vien A\n");
	if (cntB > 0) fprintf(f, "Luong trung binh cua cty B la %lf\n", (double) sumB / cntB); else fprintf(f, "Khong co nhan vien B\n");
	if (cntC > 0 ) fprintf(f, "Luong trung binh cua cty C la %lf\n", (double) sumC / cntC); else fprintf(f, "Khong co nhan vien C\n"); 
	
	double tbA = (double) sumA / cntA; 
	double tbB = (double) sumB / cntB; 
	double tbC = (double) sumC / cntC; 
	double min = tbA;
	
		if (min > tbB && min > tbC){
			if (tbB > tbC){
				fprintf(f, "Cong ty C co luong TB thap nhat\n");
			}
			else if (tbB < tbC){
				fprintf(f, "Cong ty B co luong TB thap nhat\n");
			}
			else {
				fprintf(f, "Cong ty B va C co luong Tb thap nhap\n");
			}
		}
		else if (min > tbB && min < tbC){
			fprintf(f, "Cong ty C co luong TB thap nhat\n");
		}
		else if (min < tbB && min > tbC){
			fprintf(f, "Cong ty B co luong TB thap nhat\n");
		}
		else if (min < tbB && min < tbC){
			fprintf(f, "Cong ty A co luong TB thap nhat\n");
		}
	
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n - i; j++){
				if (ds[j].luong < ds[j + 1].luong){
					tmp = ds[j];
					ds[j]= ds[j + 1];
					ds[j + 1] = tmp;
				}
			}
		}
		
		//
		fprintf(f, "Danh sach giam dan la\n");
		fprintf(f, "%-15s %-20s %-10s %-5s\n", "MSV", "Ho ten", "Luong", "Ban");
		for (int i = 0; i < n; i++){
			fprintf(f, "%-15d %-20s %-10d %-5c\n", ds[i].msv, ds[i].ht, ds[i].luong, ds[i].ban);
		}
		
		fclose(f);
}
