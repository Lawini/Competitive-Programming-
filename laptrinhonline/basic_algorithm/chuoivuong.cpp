#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	
	while(n--){
	char s[101];
	scanf("%s", s);
	

	if (strlen(s) % 2 !=0)
	printf("NO\n");
	else {
		int half=strlen(s)/2;
		int count=1;
		for (int i=0;i<half;i++){
			if (s[i] !=s[i+half]){
			count=0;
			break;
		    }
	    }
	    if (count==1) printf("YES\n");
		else printf("NO\n");
    } 
}
}
    
