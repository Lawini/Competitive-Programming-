//tinh day fibonachi
//bai 1
/*
#include<stdio.h>
int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo(n-2)+fibo(n-1);

}
int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("%d ",fibo(i));
	}
	return 0;
}
*/
//bai 2 permutations(hoan vi)
#include <stdio.h>
//bien toan cuc
int N;
int hoan_vi[100];
int da_dung[100];



//ham in ra hoan vi
void inketqua(){
	for (int i=1;i<=N;i++){
		printf("%d",hoan_vi[i]);
	}
	printf("\n");
}
void thuxaydung(int slot){
	//1. Thu moi lua chon(so 1,2,3,...)
	for (int so=1;so<=N;so++){
		
		//2. Kiem tra xem lua chon co on khong
		if(da_dung[so]==0){ //neu so nay chua duoc dung
		
		hoan_vi[slot]=so;
		da_dung[so]=1; //danh dau da dung
		
		if (slot==N){
			inketqua();
		}else {
			//goi de quy de lap day slot tiep theo
			thuxaydung(slot+1);
		}
		
		
		//6. Quay lui
		//de ham for co the thu cac hoan vi khac
		da_dung[so]=0;
	}
}
}


int main(){
	printf("Nhap N =");
	scanf("%d",&N);
	
	for (int i=0;i<=N;i++){
		da_dung[i]=0;
	}
	
	thuxaydung(1);
	return 0;
	
	
	
	
	
	
	
}
