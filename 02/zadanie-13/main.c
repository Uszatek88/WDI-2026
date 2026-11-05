#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    {
        int a = 0;
        int b = 1;
        int wynik = 0;
        int i;
        
        for (i = 2; i <= n; i++) {
            wynik = a + b;
            a = b;
            b = wynik;
        }
        return wynik;
    }
}

int main() {
    int n;
    printf("Podaj numer wyrazu ciagu Fibonacciego: ");  
    scanf("%d", &n);
    

    printf("%d. wyraz ciagu Fibonacciego to: %d\n", n, fibonacci(n));
    return 0;
}
