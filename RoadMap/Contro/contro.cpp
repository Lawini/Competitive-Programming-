#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", &a);
    printf("Gia tri cua p (dia chi ma p tro toi): %p\n", p);
    printf("Gia tri ma p tro toi (*p): %d\n", *p);

    return 0;
}

