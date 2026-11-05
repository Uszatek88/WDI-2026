#include <stdio.h>

int main(){
    double liczba1, liczba2, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &liczba2);
    printf("Podaj znak dzialania (+, -, *, /, %%): ");
    scanf(" %c", &znak);

    switch (znak) {
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            if (liczba2 != 0) {
                wynik = liczba1 / liczba2;
            } else {
                printf("Błąd: dzielenie przez zero!\n");
                return 1;
            }
            break;
        case '%':
            if ((int)liczba2 != 0) {
                wynik = (int)liczba1 % (int)liczba2;
            } else {
                printf("Błąd: dzielenie przez zero!\n");
                return 1;
            }
            break;
        default:
            printf("Błąd: nieprawidłowy znak działania!\n");
            return 1;
    }

    printf("Wynik: %.2lf\n", wynik);
    return 0;
}
