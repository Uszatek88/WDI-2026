#include <stdio.h>

double ceiling(double x) {
    int granica = (int)x;
    if (x > 0.0 && x > (double)granica) {
        return granica + 1.0;
    }
    return (double)granica;
}

double floor(double x) {
    int granica = (int)x;
    if (x < 0.0 && x < (double)granica) {
        return granica - 1.0;
    }
    return (double)granica;
}

double round(double x) {
    if (x>= 0.0){
        return floor(x + 0.5);
    } else {
        return ceiling(x - 0.5);
    }   
}

int main() {
    double liczba;

    printf("Podaj liczbe zmiennoprzecinkowa: \n");
   if  (scanf("%lf", &liczba) == 1) {

        printf("Ceiling: %.2f\n", ceiling(liczba));
        printf("Floor: %.2f\n", floor(liczba));
        printf("Round: %.2f\n", round(liczba));
    } else {
        printf("Blad wczytywania liczby.\n");
    }

    return 0;
}
