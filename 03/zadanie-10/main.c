#include <stdio.h>
void merge(int tablica[], int lewy, int srodek, int prawy){
    int i, j, k;
    int n1 = srodek - lewy + 1;
    int n2 = prawy - srodek;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = tablica[lewy + i];
    for (j = 0; j < n2; j++)
        R[j] = tablica[srodek + 1 + j];

    i = 0;
    j = 0;
    k = lewy;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            tablica[k] = L[i];
            i++;
        } else {
            tablica[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tablica[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        tablica[k] = R[j];
        j++;
        k++;
    }
}
