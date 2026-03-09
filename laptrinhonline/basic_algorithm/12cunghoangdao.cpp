#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int k,n;
	scanf("%d%d",&k,&n);
	
	if (n==1){
		if (k<=19) printf("Ma Ket");
		else if (k>=20) printf("Bao Binh");
	}
	if (n==2){
		if (k<=18) printf("Bao Binh");
		else if (k>=19) printf("Song Ngu");
	}
	if (n==3){
		if (k<=20) printf("Song Ngu");
		else if (k>=21) printf("Bach Duong");
	}
	if (n==4){
		if (k<=20) printf("Bach Duong");
		else if (k>=21) printf("Kim Nguu");
	}
	if (n==5){
		if (k<=20) printf("Kim Nguu");
		else if (k>=21) printf("Song Tu");
	}if (n==6){
		if (k<=21) printf("Song Tu");
		else if (k>=22) printf("Cu Giai");
	}
	if (n==7){
		if (k<=22) printf("Cu Giai");
		else if (k>=23) printf("Su Tu");
	}
	if (n==8){
		if (k<=22) printf("Su Tu");
		else if (k>=23) printf("Xu Nu");
	}
	if (n==9){
		if (k<=22) printf("Xu Nu");
		else if (k>=23) printf("Thien Binh");
	}
	if (n==10){
		if (k<=23) printf("Thien Binh");
		else if (k>=24) printf("Bo Cap");
	}
	if (n==11){
		if (k<=22) printf("Bo Cap");
		else if (k>=23) printf("Nhan Ma");
	}
	if (n==12){
		if (k<=21) printf("Nhan Ma");
		else if (k>=22) printf("Ma Ket");
	}
	
	
}
