#include <stdio.h>

void wyswietl_od_poczatku(int tablica[], int rozmiar) {
    int i;
    for (i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

void wyswietl_od_konca(int tablica[], int rozmiar) {
    int i;
    for (i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

void wyswietl_od_poczatku_while(int tablica[], int rozmiar) {
    int i = 0;
    while (i < rozmiar) {
        printf("%d ", tablica[i]);
        i++;
    }
    printf("\n");
}

void wyswietl_od_konca_while(int tablica[], int rozmiar) {
    int i = rozmiar - 1;
    while (i >= 0) {
        printf("%d ", tablica[i]);
        i--;
    }
    printf("\n");
}

void wyswietl_od_poczatku_do_while(int tablica[], int rozmiar) {
    int i = 0;
    if (rozmiar > 0) {
        do {
            printf("%d ", tablica[i]);
            i++;
        } while (i < rozmiar);
    }
    printf("\n");
}

void wyswietl_od_konca_do_while(int tablica[], int rozmiar) {
    int i = rozmiar - 1;
    if (rozmiar > 0) {
        do {
            printf("%d ", tablica[i]);
            i--;
        } while (i >= 0);
    }
    printf("\n");
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int wybor1;
    char wybor2; 

    printf("Podaj rodzaj wyswietlania:\n");
    printf("1 - od poczatku\n");
    printf("2 - od konca\n");
    scanf("%d", &wybor1);

    switch(wybor1) {
        case 1:
            printf("Wybierz sposob wyswietlania:\n");
            printf("a - for\n");
            printf("b - while\n");
            printf("c - do...while\n");

            scanf(" %c", &wybor2); 

            switch(wybor2) {
                case 'a':
                    printf("Wyswietlanie od poczatku (for):\n");
                    wyswietl_od_poczatku(tablica, rozmiar);
                    break;

                case 'b':
                    printf("Wyswietlanie od poczatku (while):\n");
                    wyswietl_od_poczatku_while(tablica, rozmiar);
                    break;

                case 'c':
                    printf("Wyswietlanie od poczatku (do...while):\n");
                    wyswietl_od_poczatku_do_while(tablica, rozmiar);
                    break;

                default:
                    printf("Nieprawidlowy wybor.\n");
            } 
            break; 

        case 2:
            printf("Wybierz sposob wyswietlania:\n");
            printf("a - for\n");
            printf("b - while\n");
            printf("c - do...while\n");

            scanf(" %c", &wybor2);

            switch(wybor2) {
                case 'a':
                    printf("Wyswietlanie od konca (for):\n");
                    wyswietl_od_konca(tablica, rozmiar);
                    break;

                case 'b':
                    printf("Wyswietlanie od konca (while):\n");
                    wyswietl_od_konca_while(tablica, rozmiar);
                    break; 

                case 'c':
                    printf("Wyswietlanie od konca (do...while):\n");
                    wyswietl_od_konca_do_while(tablica, rozmiar);
                    break;

                default:
                    printf("Nieprawidlowy wybor.\n");
            }
            break;

        default:
            printf("Nieprawidlowy rodzaj wyswietlania.\n");
    }

    return 0;
}
