#include <stdio.h>

#define ROZMIAR 10

int stos[ROZMIAR];
int licznik_stos = 0;

int kolejka[ROZMIAR];
int licznik_kolejka = 0;

void push_lifo(int wartosc) {
    if (licznik_stos < ROZMIAR) {
        stos[licznik_stos] = wartosc;
        licznik_stos++;
    }
}

int pop_lifo() {
    if (licznik_stos <= 0) return -1;
    licznik_stos--;
    return stos[licznik_stos];
}

void push_fifo(int wartosc) {
    if (licznik_kolejka < ROZMIAR) {
        kolejka[licznik_kolejka] = wartosc;
        licznik_kolejka++;
    }
}

int pop_fifo() {
    int pobrany;
    int i;
    if (licznik_kolejka <= 0) return -1;
    
    pobrany = kolejka[0];
    for (i = 0; i < licznik_kolejka - 1; i++) {
        kolejka[i] = kolejka[i + 1];
    }
    licznik_kolejka--;
    return pobrany;
}

int main() {
    push_lifo(10);
    push_lifo(20);
    printf("LIFO: %d\n", pop_lifo()); 

    push_fifo(10);
    push_fifo(20);
    printf("FIFO: %d\n", pop_fifo()); 

    return 0;
}
