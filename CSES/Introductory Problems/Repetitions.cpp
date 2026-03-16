#include <stdio.h>
#include <string.h>
int main(){
    char a[1000000];
    fgets(a,sizeof(a),stdin);
    int max=1;
    int count=1;
    for (int i=1;i<strlen(a);i++){
        if (a[i]==a[i-1])
        count++;
    
        else {
		    if(count>=max) {
            max=count;
        }
        count=1;
        }
    }
    if (count>=max)
    max=count;
    
    printf("%d\n",max);


}
