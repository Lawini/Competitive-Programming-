#include <stdio.h>
#include <math.h>
#include <limits.h>
void push (int x){
	a[n] = x;
	n++;
}
void pop(){
	n--;
	return a[n];
}

int at (int i){
	if (i < n) return a[i];
	else return NULL;
}

int main(){
	
	
	int n;
	scanf("%d", &n);
	push (n);
	
	
	
}
