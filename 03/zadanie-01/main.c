#include <stdio.h>

int fibonacci(int n) {
    int wczesniejszy = 0;
    int obecny = 1;
    int nastepny;;
    int suma = 0;
    int i;

    if (n <= 0) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        suma = suma + obecny;
        nastepny = wczesniejszy + obecny;
        wczesniejszy = obecny;
        obecny = nastepny;
    }
    
    return suma;
}

int main() {
    int n;
    
    printf("Podaj numer wyrazu ciagu Fibonacciego: ");  
    scanf("%d", &n);
    
    printf("Suma %d wyrazow ciagu Fibonacciego to: %d\n", n, fibonacci(n));
    
    return 0;
}
