#include <stdio.h>

int dodawanie(int n) {
    int suma = 0;
    int liczba;
    int i;

    for (i = 0; i < n; i++) {
        printf("Podaj liczbe %d: ", i + 1);
        scanf("%d", &liczba);
        suma = suma + liczba;
    }

    return suma;
}

int odejmowanie() {
    int liczba;
    int wynik = 0;
    int pierwsza = 1;

    printf("Podawaj liczby (wpisanie 0 kończy):\n");
    do {
        scanf("%d", &liczba);

        if (pierwsza) {
            wynik = liczba;
            pierwsza = 0;
        } else {
            if (liczba != 0) {
                wynik = wynik - liczba;
            }
        }
    } while (liczba != 0);

    return wynik;
}

int mnozenie(int a, int b) {
    return a * b;
}

int dzielenie(int a, int b) {
    if (b == 0) {
        printf("Blad: nie mozna dzielic przez zero!\n");
        return 0;
    }
    return a / b;
}

int potega(int liczba, int wykladnik) {
    if (wykladnik == 0) {
        return 1;
    }
    return liczba * potega(liczba, wykladnik - 1);
}

int kwadrat(int liczba) {
    return liczba * liczba;
}

int silnia(int n) {
    if (n < 0) {
        printf("Blad: nie mozna obliczyc silni z liczby ujemnej!\n");
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * silnia(n - 1);
}

int main() {
    int wybor;

    printf("Wybierz operacje:\n");
    printf("1 - Dodawanie n liczb\n");
    printf("2 - Odejmowanie od liczby az do momentu podania '0'\n");
    printf("3 - Mnozenie dwoch liczb\n");
    printf("4 - Dzielenie liczby\n");
    printf("5 - Potegowanie\n");
    printf("6 - Kwadrat liczby\n");
    printf("7 - Silnia\n");
    printf("Twoj wybor: ");

    scanf("%d", &wybor);

    switch(wybor) {
        case 1: {
            int n;
            printf("Podaj ilosc liczb do dodania: ");
            scanf("%d", &n);
            printf("Suma wynosi: %d\n", dodawanie(n));
            break;
        }
        case 2: {
            printf("Wynik odejmowania wynosi: %d\n", odejmowanie());
            break;
        }
        case 3: {
            int a, b;
            printf("Podaj dwie liczby: ");
            scanf("%d %d", &a, &b);
            printf("Wynik mnozenia wynosi: %d\n", mnozenie(a, b));
            break;
        }
        case 4: {
            int a, b;
            printf("Podaj dzielna i dzielnik: ");
            scanf("%d %d", &a, &b);
            printf("Wynik dzielenia wynosi: %d\n", dzielenie(a, b));
            break;
        }
        case 5: {
            int liczba, wykladnik;
            printf("Podaj liczbe i wykladnik: ");
            scanf("%d %d", &liczba, &wykladnik);
            printf("Wynik potegowania wynosi: %d\n", potega(liczba, wykladnik));
            break;
        }
        case 6: {
            int liczba;
            printf("Podaj liczbe: ");
            scanf("%d", &liczba);
            printf("Kwadrat liczby wynosi: %d\n", kwadrat(liczba));
            break;
        }
        case 7: {
            int n;
            printf("Podaj liczbe do silni: ");
            scanf("%d", &n);
            printf("Wynik silni wynosi: %d\n", silnia(n));
            break;
        }
        default:
            printf("Niepoprawny wybor!\n");
            break;
    }

    return 0;
}
