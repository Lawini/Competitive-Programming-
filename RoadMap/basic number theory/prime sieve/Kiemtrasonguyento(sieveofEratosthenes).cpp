#include <stdio.h>
#include<stdbool.h>
#define N 20
bool primeN[N+1];
void sieve(){
	//khoi tao tat ca luc dau la so nguyen to
	for (int i=0;i<=N;i++){
		primeN[i]=true;
	}
	// 0 va 1 khong la so nguyen to
	primeN[0]=false;
	primeN[1]=false;
	
	//sang so nguyen to 
	for (int j=2;j*j<=N;j++){
	
		if (primeN[j]==true){
		// gach bo cac boi cua p
	for(int i=j*j;i<=N;i+=j){
		primeN[i]=false;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	printf("Nhung so can kiem tra la"); 
	scanf("%d",&n);
	if (n<=20 && primeN[n]){
		printf("YES, %d la so nguyen to\n",n);
	}
	else printf("No,%d khong la so nguyen to\n",n);
}
