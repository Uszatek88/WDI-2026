#include <stdio.h>

int main(){
    int liczba1, liczba2, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
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
                printf("Blad: dzielenie przez zero!\n");
                return 1;
            }
            break;
        case '%':
            if ((int)liczba2 != 0) {
                wynik = (int)liczba1 % (int)liczba2;
            } else {
                printf("Blad: dzielenie przez zero!\n");
                return 1;
            }
            break;
        default:
            printf("Blad: nieprawidlowy znak dzialania!\n");
            return 1;
    }

    printf("Wynik: %.2d\n", wynik);
    return 0;
}
