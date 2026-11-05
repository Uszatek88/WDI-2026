#include <stdio.h>

int silnia(int a) {
    int wynik = 1;
    int i;

    for (i = 1; i <= a; i++) {
        wynik = wynik * i;
    }

    return wynik;
}

int main(){
    int a;

    printf("Podaj liczbe: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Blad: nie mozna obliczyc silni z liczby ujemnej!\n");
        return 1;
    }

    printf("Silnia z %d wynosi: %d\n", a, silnia(a));
    return 0;

}
