#include <stdio.h>


void quick_sort(int tab[], int low, int high) {
   
    int i;
    int j;
    int pivot;
    int temp;
    int pi;

    if (low < high) {
        pivot = tab[high]; 
        i = (low - 1);

        /* Podział tablicy */
        for (j = low; j <= high - 1; j++) {
            if (tab[j] < pivot) {
                i++;
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
        
     
        pi = i + 1;
        temp = tab[pi];
        tab[pi] = tab[high];
        tab[high] = temp;

    
        quick_sort(tab, low, pi - 1);
        quick_sort(tab, pi + 1, high);
    }
}

int main() {
    int tablica[10];
    int i;

    printf("Podaj 10 liczb całkowitych:\n");
    for (i = 0; i < 10; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }
    
    quick_sort(tablica, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
