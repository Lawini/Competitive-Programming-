#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define N 200005
char s[N];
long long p[N];
long long max_val(long long a, long long b){
	return (a > b) ? a : b;
}
void solve(){
	/*
	We have x voters for party A
			y votres for party B
			
		    string S 
			0 -> A
			1 -> B

		WE NEED AT LEAST P[I] VOTERS INTO EACH DISTRICT -> WE NEED MAX (P[I],1) 
		Example
		p[1]=2 we need at least 2 voter for AREA 1

		
	*/


	//khai bao
	int n;
	scanf("%d",&n);
	long long x,y;
	scanf("%lld%lld",&x,&y);

	
	scanf("%s", s);


	
	for(int i=0;i<n;i++){
		scanf("%lld",&p[i]);
	}
	
	long long needx=0;
	long long needy=0;
	
	bool c0=false;
	bool c1=false;
	
	for (int i=0;i<n;i++){
		
		//check who win A or B 
		if (s[i]=='0'){
			c0=true; //A win
		}
		else {
			c1=true; //B win
		}

		//toi thieu moi quan can max(p[i] hoac 1)
		long long total=max_val(p[i],1);
		long long a,b; 
		if (s[i]=='0'){
			a=total/2+1;
			b=total-a;
		}
		else {
			b=total/2+1;
			a=total-b;
		}

		needx+=a;
		needy+=b;
		

	}
	
	// ktra dieu kien
	if (x<needx || y<needy){
		printf("NO\n");
	}
	else {
		if (c0 && !c1){ //A thang tat
		if (x<y+n) printf("NO\n");
		else printf("YES\n");
	}
	else if (c1 && !c0){ //B thang tat
		if (y<x+n) printf("NO\n");
		else printf("YES\n");
	}
	else { //Co ca 0 va 1 
		printf("YES\n");
	}
}	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}	
}
