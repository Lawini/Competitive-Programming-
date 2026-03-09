#include <stdio.h>

#define MAXN 200000

int p[MAXN + 5];
int mx[MAXN + 5];
int pos[MAXN + 5];

void reverse(int l, int r) {
    while (l < r) {
        int tmp = p[l];
        p[l] = p[r];
        p[r] = tmp;
        l++;
        r--;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            scanf("%d", &p[i]);
        }

        // suffix maximum
        mx[n] = p[n];
        pos[n] = n;
        for (int i = n - 1; i >= 1; i--) {
            if (p[i] > mx[i + 1]) {
                mx[i] = p[i];
                pos[i] = i;
            } else {
                mx[i] = mx[i + 1];
                pos[i] = pos[i + 1];
            }
        }

        int done = 0;
        for (int i = 1; i <= n; i++) {
            if (mx[i] > p[i]) {
                reverse(i, pos[i]);
                done = 1;
                break;
            }
        }

        for (int i = 1; i <= n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}

