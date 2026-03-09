#include <stdio.h>
#include <string.h>

#define N 200005 

void solve() {
    int n;
    scanf("%d", &n);

    
    char s[N]; 
    scanf("%s", s);

    int ans = 0;

    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ans++;
    }

    
    for (int i = 0; i < n; i++) {
        
        int left_empty = (i == 0 || s[i-1] == '0'); //left_empty = 1(true)
        int right_empty = (i == n-1 || s[i+1] == '0'); 

        if (s[i] == '0' && left_empty && right_empty) {
            if (i + 1 < n && (i + 2 >= n || s[i+2] == '0')) {
                s[i+1] = '1'; 
                ans++;
            } else {
                s[i] = '1';   
                ans++;
            }
        }
    }

    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}