#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void lps(char*s, int lens, int*p){
	p[0]=0;
	int j=0;
	for (int i=1;i<lens;i++){
			while (j>0 && s[i]!=s[j]){ //j=1
				j=p[j-1]; 
			/*
			Xau A: A B
			Xau B: A B A C
			Xâu S A B # A B A C
				  0 0 0	1 2 1 0
			*/
			}
			/*
			i=1 s[1]!=s[0] j=0 /p[1]=0
			i=2 s[2]!=s[0] j=0 /p[2]=0
			i=3 s[3]==s[0] j=1 /p[3]=1
			i=4 s[4]==s[1] j=2 /p[4]=2
			i=5 while j=p[1]=0 s[5]==s[0] /p[5]=1
			i=6 while j=p[0]=0 /p[6]=0
			
			
			*/
			if (s[i]==s[j]){
				j++;
			}
			p[i]=j; 
		
			
	}
}
int main(){
	char a[100]; 
	fgets(a,sizeof a,stdin);
	a[strcspn(a, "\n")] = '\0';
	char b[100];
	fgets(b,sizeof b,stdin);
	b[strcspn(b,"\n")]='\0';


	int len1=strlen(a);
	int len2=strlen(b);
	char s[205];
	
	//abc
	//abc#cabcd 
	strcpy(s,a);
	strcat(s,"#");
	strcat(s,b);
	int len3=strlen(s); 	
	int p[205];

	lps(s, len3,p);
	int found=0;
	for (int i=0;i<len3;i++){
		if (p[i]==len1){
			found=1;
			break;
		}
	}
	if (found) printf("YES");
	else printf("NO");
}
	
