#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=1;i<n;i++){
        for (int j=1;j<n;j++){
            if (i+j==n);
            count++;
            break;
        }
    }
    printf("%d\n",count);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}
