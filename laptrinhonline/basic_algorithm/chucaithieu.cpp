#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100];
	int check[26]={0};
	printf("");
	fgets(a, sizeof(a), stdin); //fgets(tên_mang, kich_thuoc_mang, stdin);
	for (int i=0;i<strlen(a);i++) //duyet xem da co ky tu nao roi
	{
		if (a[i]>='a' && a[i]<='z'){
			check[a[i]-'a']=1;
		}
	}
	for(char c='a';c<='z';c++){ //in ra cac ky tu thieu
		if(check[c-'a']==0)
		printf("%c",c);
	}
return 0;
}
