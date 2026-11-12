#include <stdio.h>

void bubble_sort(int tablica[], int rozmiar) {
    int i, j, temp;
    for (i = 0; i < rozmiar - 1; i++) {
        for (j = 0; j < rozmiar - i - 1; j++) {
            if (tablica[j] > tablica[j + 1]) {
                temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}   

int main() {
    int tablica[10];

    printf("Wprowadź 10 liczb całkowitych:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }

    bubble_sort(tablica, 10);
 
    printf("Posortowana tablica:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
