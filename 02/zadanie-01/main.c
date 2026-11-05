#include <stdio.h>

int main() {
    int wybor;
    int liczba;
    int suma;
    int ilosc;
    int min;
    int max;
    int pierwsza;

    printf("Wybierz tryb dzialania programu:\n");
    printf("1 - Koncz po wpisaniu liczby PARZYSTEJ\n");
    printf("2 - Koncz po wpisaniu liczby NIEPARZYSTEJ\n");
    printf("3 - Koncz po wpisaniu zera (0)\n");
    printf("Twoj wybor (1, 2 lub 3): ");
    scanf("%d", &wybor, "\n");

    
    suma = 0;
    ilosc = 0;
    pierwsza = 1;

    switch (wybor) {
        case 1:
            printf("Podawaj liczby (koniec po liczbie PARZYSTEJ):\n");
            do {
                scanf("%d", &liczba);

                if (pierwsza) {
                    min = liczba;
                    max = liczba;
                    pierwsza = 0;
                } else {
                    if (liczba < min) min = liczba;
                    if (liczba > max) max = liczba;
                }
                suma = suma + liczba;
                ilosc++;

            } while (liczba % 2 != 0); 
            break;

        case 2:
            printf("Podawaj liczby (koniec po liczbie NIEPARZYSTEJ):\n");
            do {
                scanf("%d", &liczba);

                if (pierwsza) {
                    min = liczba;
                    max = liczba;
                    pierwsza = 0;
                } else {
                    if (liczba < min) min = liczba;
                    if (liczba > max) max = liczba;
                }
                suma = suma + liczba;
                ilosc++;

            } while (liczba % 2 == 0); 
            break;

        case 3:
            printf("\nPodawaj liczby (koniec po wpisaniu ZERA):\n");
            while (1) {
                scanf("%d", &liczba);

                if (liczba == 0) {
                    break; 
                }

                if (pierwsza) {
                    min = liczba;
                    max = liczba;
                    pierwsza = 0;
                } else {
                    if (liczba < min) min = liczba;
                    if (liczba > max) max = liczba;
                }
                suma = suma + liczba;
                ilosc++;
            }
            break;

        default:
            printf("Niepoprawny wybór w menu!\n");
            ilosc = 0; 
            break;
    }

    
    if (ilosc > 0) {
        printf("\n--- WYNIKI ---\n");
        printf("Najwieksza liczba: %d\n", max);
        printf("Najmniejsza liczba: %d\n", min);
        printf("Suma: %d\n", suma);
        printf("Srednia: %.2f\n", (double)suma / ilosc);
    } else if (wybor >= 1 && wybor <= 3) {
        printf("Nie podano żadnych liczb.\n");
    }

    return 0;
}
