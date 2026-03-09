#include <stdio.h>
#include <string.h>
int check(char s1[], char s2[]) {
    int i=0,j=0;
    int len1=strlen(s1);
    int len2=strlen(s2);
    while (i<len1&&j<len2) {
        if (s1[i]==s2[j]) {
            i++;
        }
        j++;
    }
    return (i==len1);
}
int main(){
    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    if (check(s1,s2)) {
        printf("YES\n"); 
    } else {
        printf("NO\n");
    }
    return 0;
}
