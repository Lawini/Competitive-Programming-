//https://codeforces.com/problemset/problem/443/A
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char a[1001];
	
	int seen[26]={0}; //danh dau su xuat hien cua cac chu cai tu a->z
	
	int count=0;
	fgets(a,sizeof(a),stdin);
	
	for (int i=0;i<strlen(a);i++){
		if (a[i]>='a' && a[i]<='z'){
			seen[a[i]-'a']=1; //day la gan cac gia tri a->z bang so 0->25
	}
	for (int i=0;i<26;i++)
	{
		if(seen[i]==1){
			count++;
		}
	}
	printf("%d",count);
}
