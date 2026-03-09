#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char a[11];
	char stack[11];
	int top=0; //top la chi so dang dung de ghi vao mang stack
	scanf("%s",a);

	for (int i=0;i<strlen(a);i++)
	{
		if (a[i]=='B'){
			if (top>0) top--;
		}
		else {
			stack[top++]=a[i];
		}
}
    stack[top] ='\0';
    printf("%s\n",stack);
}

   
   
   
