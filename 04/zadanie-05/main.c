#include <stdio.h>

int main() {
    
    char str[100];
    int i;
    int wynik;
    int poprawna;

    printf("Podaj liczbę (tylko cyfry): ");
    scanf("%99s", str);

    wynik = 0;
    poprawna = 1;
    i = 0;

    while (str[i] != '\0') {
        
        if (str[i] < '0' || str[i] > '9') {
            poprawna = 0;
            break;
        }

        wynik = wynik * 10 + (str[i] - '0');
        i++;
    }

    if (poprawna && i > 0) {
        printf("Sukces! Liczba int: %d\n", wynik);
    } else {
        printf("Błąd! To nie jest poprawna liczba całkowita.\n");
    }

    return 0;
}
