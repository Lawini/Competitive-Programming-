#include <stdio.h>
#include<string.h>
int main() {
    char a[101];
    scanf("%s", a);
    int count[26]={0}; //mang dem so lan xuat hien cua tung chu cai
    
    for (int i=0;i<strlen(a);i++)
    {
    	count[a[i]-'a']++; //tinh chi so cua ky tu trong bang chu cai
	}
	int perfect=1;
	for (int i=0;i<26; i++)
	{
		if (count[i]%2!=0){
			perfect=0;
			break;
		}
	}
	if (perfect) printf("Yes");
	else printf("No");
	return 0;
}
