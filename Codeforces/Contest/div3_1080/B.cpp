#include <stdio.h>
#define N 200005

int a[N];
//Thuat toan sort theo insertion sort O(N log N)
void solve(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    
    
    for (int i = 1; i <= n; i++){
        int k = i;
   
        while(k % 2 == 0 && a[k] < a[k / 2]){
            int temp = a[k];
            a[k] = a[k / 2];
            a[k / 2] = temp;
            k /= 2;
        }
    }
    
  
    int check = 1;
    for (int i = 1; i <= n; i++){
        if (a[i] != i) {
            check = 0;
            break;
        }
    }
    
    if (check) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main(){
    int t;
    if (scanf("%d", &t) == 1) {
        while(t--){
            solve();
        }
    }
    return 0;
}
