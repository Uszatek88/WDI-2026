double srednia(int tablica[], int rozmiar) {
    int suma = 0;
    int i;
    for (i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }
    return (double)suma / rozmiar;
}

void wieksze_od_sredniej(int tablica[], int rozmiar, double srednia) {
    int i;
    printf("Liczby wieksze od sredniej (%.2f):\n", srednia);
    for (i = 0; i < rozmiar; i++) {
        if (tablica[i] > srednia) {
            printf("%d ", tablica[i]);
        }
    }
    printf("\n");
}

int najmniejsza(int tablica[], int rozmiar) {
    int min = tablica[0];
    int i;
    for (i = 1; i < rozmiar; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
    }
    return min;
}

int najwieksza(int tablica[], int rozmiar) {
    int max = tablica[0];
    int i;
    for (i = 1; i < rozmiar; i++) {
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }
    return max;
}

int suma_nieparzystych(int tablica[], int rozmiar) {
    int suma = 0;
    int i;
    for (i = 0; i < rozmiar; i++) {
        if (tablica[i] % 2 != 0) {
            suma += tablica[i];
        }
    }
    return suma;
}

void wypisz_od_tylu(int tablica[], int rozmiar) {
    int i;
    printf("Tablica od ostatniego elementu:\n");
    for (i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

int main(){
    int tablica[10];
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int i;

    printf("Podaj 10 liczb calkowitych:\n");
    for (i = 0; i < rozmiar; i++) {
        scanf("%d", &tablica[i]);
    }

    double srednia_arytmetyczna = srednia(tablica, rozmiar);
    printf("Srednia arytmetyczna: %.2f\n", srednia_arytmetyczna);

    wieksze_od_sredniej(tablica, rozmiar, srednia_arytmetyczna);

    int min = najmniejsza(tablica, rozmiar);
    int max = najwieksza(tablica, rozmiar);
    printf("Najmniejsza liczba: %d\n", min);
    printf("Najwieksza liczba: %d\n", max);

    int suma_nieparzystych_liczb = suma_nieparzystych(tablica, rozmiar);
    printf("Suma wszystkich elementow nieparzystych: %d\n", suma_nieparzystych_liczb);

    wypisz_od_tylu(tablica, rozmiar);

    return 0;
}
