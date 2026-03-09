#include<stdio.h>
#include<string.h>
#include<limits.h>
#define N 1000005
char a[N];
char b[N];
void solve(){
	
	int match =0;
	for (int i=0;i<strlen(b);i++){
		
		//pointer a
		int str_a=0;
		int curlen=0;
		for(int j=i;j<strlen(b);j++){
			while(str_a < strlen(a) && a[str_a] !=b[j]){
				str_a++;
			}
		if (str_a<strlen(a)){
			curlen++;
			str_a++; //move to the next char in a
		}
		else {
			break;
			}
		}
		if (curlen>match){
			match=curlen;
		}
	}
	printf("%d\n",strlen(b)+strlen(a)-match);		
	
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s", a);
		scanf("%s", b);
		solve();
	}
}
