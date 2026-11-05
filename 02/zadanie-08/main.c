#include <stdio.h>

int wieksza(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int mniejsza(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int x;
    int y;

    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &x, &y);

    printf("Wieksza: %d\n", wieksza(x, y));
    printf("Mniejsza: %d\n", mniejsza(x, y));

    return 0;
}
