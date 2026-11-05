#include <stdio.h>

int main() {
    int liczba1 = 0, liczba2 = 0, wynik;
    char znak;
    int wybor;

    do {
        printf("Aktualne liczby: %d i %d\n", liczba1, liczba2);
        printf("Wybierz opcje:\n"); 
        printf("--- MENU --- \n");
        printf("1 - Zmien pierwsza liczbe\n");
        printf("2 - Zmien druga liczbe\n");
        printf("3 - Wybierz dzialanie (+, -, *, /, %%)\n");
        printf("4 - Zakoncz program\n");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                printf("Podaj pierwsza liczbe: ");
                scanf("%d", &liczba1);
                break;
            case 2:
                printf("Podaj druga liczbe: ");
                scanf("%d", &liczba2);
                break;
            case 3:
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
                            printf("Blad: nie dzieli sie przez zero!\n");
                            continue;
                        }
                        break;
                    case '%':
                        if (liczba2 != 0) {
                            wynik = liczba1 % liczba2;
                        } else {
                            printf("Blad: nie dzieli sie przez zero!\n");
                            continue;
                        }
                        break;
                    default:
                        printf("Blad: nieprawidlowy znak dzialania!\n");
                        continue;
                }
                printf("\n Wynik: %d\n", wynik);
                break;
            case 4:
                printf("Koniec programu.\n");
                break;
            default:
                printf("Blad: nieprawidlowy wybor!\n");
        }
    } while (wybor != 4);   

    return 0;
}
