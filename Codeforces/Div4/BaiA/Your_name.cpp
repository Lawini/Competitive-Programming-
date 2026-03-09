#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	
    while(n--)
    {
    	int x;
    	scanf("%d",&x);
    	
    	char a[x+1];
    	scanf("%s", a);
    	char b[x+1];
    	scanf("%s", b);
    	
    	
    	int fa[26]={0};
    	int fb[26]={0};
    	

    	for (int i=0;i<x;i++){
            fa[a[i]-'a']++;
            fb[b[i]-'a']++;
			}
			
			int match=1;
	    for (int i=0;i<26;i++){
	    	if (fa[i]!=fb[i])
	    	match=0;
		}
		if (match) printf("YES\n");
		else printf("NO\n");
      
    	
	}
	






}
