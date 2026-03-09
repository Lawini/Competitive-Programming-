#include <stdio.h>
#define N 505 

void solve() {
    int n;
    scanf("%d", &n);

    int p[N];
    int pos = 1; 
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        if (p[i] == n) {
            pos = i; 
        }
    }

    if (pos != 1) {
        int temp = p[1];
        p[1] = p[pos];
        p[pos] = temp;
    }


    for (int i = 1; i <= n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main() {
    int t;
	scanf("%d",&t);
        while (t--) {
            solve();
        }
    return 0;
}
