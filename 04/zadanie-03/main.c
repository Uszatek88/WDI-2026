#include <stdio.h>

int main() {
    
    char tekst[256];
    int licznik[26];
    int i;
    char znak;


    for (i = 0; i < 26; i++) {
        licznik[i] = 0;
    }

    printf("Podaj tekst: ");
    if (fgets(tekst, sizeof(tekst), stdin) != NULL) {
        i = 0;
        while (tekst[i] != '\0' && tekst[i] != '\n') {
            znak = tekst[i];

            if (znak >= 'A' && znak <= 'Z') {
                znak = znak + 32;
            }

            if (znak >= 'a' && znak <= 'z') {
                licznik[znak - 'a']++;
            }

            i++;
        }
    }

    printf("\nLiczba wystąpień poszczególnych liter:\n");
    for (i = 0; i < 26; i++) {
        if (licznik[i] > 0) {
            printf("Litera '%c': %d raz(y)\n", i + 'a', licznik[i]);
        }
    }

    return 0;
}
