#include <stdio.h>

int potega(int liczba, int wykladnik) {
    if (wykladnik == 0) {
        return 1; 
    }
    if (wykladnik > 0) {
        return liczba * potega(liczba, wykladnik - 1); 
    }
    return 1 / potega(liczba, -wykladnik); 
}

int main() {
    int liczba;
    int wykladnik;
    int wynik;

    printf("Podaj podstawe (liczbe): ");
    scanf("%d", &liczba);

    printf("Podaj wykladnik (calkowity): ");
    scanf("%d", &wykladnik);

    wynik = potega(liczba, wykladnik);

    printf("Wynik: %.2d\n", wynik);

    return 0;
}
