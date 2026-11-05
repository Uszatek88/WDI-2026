#include <stdio.h>
int potega(int liczba, int wykladnik) {
    int wynik = 1;
    int i;

    for (i = 1; i <= wykladnik; i++) {
        wynik = wynik * liczba;
    }

    return wynik;
}

int main() {
    int liczba;
    int wykladnik;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("Podaj wykladnik: ");
    scanf("%d", &wykladnik);

    if (wykladnik < 0) {
        printf("Blad: nie mozna obliczyc potegi o ujemnym wykladniku!\n");
        return 1;
    }

    printf("%d do potegi %d wynosi: %d\n", liczba, wykladnik, potega(liczba, wykladnik));
    return 0;
}
