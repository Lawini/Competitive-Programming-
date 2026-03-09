#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    char a[51];
    int check=0;
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
	
    for (int i=0;i<strlen(a);i++) 
    {
    	if (!(a[i]>='a' && a[i]<='z'))
		{
		check=1; 
    	break;
	}
}
	if (check==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
