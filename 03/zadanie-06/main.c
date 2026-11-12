#include <stdio.h>

double oblicz_srednia(int tablica[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }
    return (double)suma / rozmiar;
}

void wieksze_elementy (int tablica[], int rozmiar, double srednia) {
    printf("Elementy wieksze od sredniej (%.2f):\n", srednia);
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i] > srednia) {
            printf("%d ", tablica[i]);
        }
    }
    printf("\n");
}

int main() {
    int tablica[5];
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    printf("Podaj 5 liczb calkowitych:\n");
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tablica[i]);
    }

    double srednia = oblicz_srednia(tablica, rozmiar);
    printf("Srednia: %.2f\n", srednia);

    wieksze_elementy(tablica, rozmiar, srednia);

    return 0;
}

