#include <stdio.h>

void cezar(char tekst[], int klucz, int tryb) {
    int i;
    char c;
    
    if (tryb == 2) {
        klucz = -klucz;
    }

    klucz = klucz % 26;

    i = 0;
    while (tekst[i] != '\0') {
        c = tekst[i];

        if (c >= 'a' && c <= 'z') {
            c = c + klucz;
            if (c > 'z') {
                c = c - 26;
            } else if (c < 'a') {
                c = c + 26;
            }
        }
        
        else if (c >= 'A' && c <= 'Z') {
            c = c + klucz;
            if (c > 'Z') {
                c = c - 26;
            } else if (c < 'A') {
                c = c + 26;
            }
        }
        
        tekst[i] = c;
        i++;
    }
}

int main() {
   
    char tekst[256];
    int operacja;
    int wariant;
    int klucz;
    int i;

    printf("=== SZYFR CEZARA ===\n");
    printf("Wybierz operację:\n");
    printf("1. Szyfrowanie\n");
    printf("2. Deszyfrowanie\n");
    printf("Twój wybór (1/2): ");
    scanf("%d", &operacja);

    printf("\nWybierz wariant:\n");
    printf("1. Stałe przesunięcie (o 3 litery)\n");
    printf("2. Własny klucz (podany przez użytkownika)\n");
    printf("Twój wybór (1/2): ");
    scanf("%d", &wariant);

    if (wariant == 1) {
        klucz = 3;
    } else {
        printf("Podaj klucz (liczba całkowita przesunięcia): ");
        scanf("%d", &klucz);
    }

    while (getchar() != '\n');

    printf("\nPodaj tekst do przetworzenia: ");
    if (fgets(tekst, sizeof(tekst), stdin) != NULL) {

        i = 0;
        while (tekst[i] != '\0') {
            if (tekst[i] == '\n') {
                tekst[i] = '\0';
                break;
            }
            i++;
        }

        if (operacja == 2) {
            cezar(tekst, klucz, 2);
            printf("Wynik (zdeszyfrowany tekst): %s\n", tekst);
        } else {
            cezar(tekst, klucz, 1);
            printf("Wynik (zaszyfrowany tekst): %s\n", tekst);
        }
    }

    return 0;
}
