//https://codeforces.com/problemset/problem/71/A
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n][101];
	int len;
	for (int i=0;i<n;i++) 
	scanf("%s",a[i]);
	for (int i=0;i<n;i++) {
    len=strlen(a[i]);
	if (len>10) printf("%c%d%c\n",a[i][0],len-2,a[i][len-1]);
	else printf("%s\n",a[i]);
}
}
//cach 2
/*
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) { // 
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        if (len > 10) {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("%s\n", s);
        }
    }
    return 0;
}
*/

