#include <stdio.h>

int main() {
  
    char wyraz1[100];
    char wyraz2[100];
    int licznik[26];
    int i;
    int sa_anagramami;


    for (i = 0; i < 26; i++) {
        licznik[i] = 0;
    }

    printf("Podaj pierwszy wyraz (małe litery): ");
    scanf("%99s", wyraz1);

    printf("Podaj drugi wyraz (małe litery): ");
    scanf("%99s", wyraz2);

    i = 0;
    while (wyraz1[i] != '\0' && wyraz2[i] != '\0') {
        licznik[wyraz1[i] - 'a']++;
        licznik[wyraz2[i] - 'a']--;
        i++;
    }

   
    if (wyraz1[i] != '\0' || wyraz2[i] != '\0') {
        sa_anagramami = 0; 
    } else {
        sa_anagramami = 1; 
        for (i = 0; i < 26; i++) {
            if (licznik[i] != 0) {
                sa_anagramami = 0; 
                break;
            }
        }
    }

    
    if (sa_anagramami) {
        printf("Wynik: Podane wyrazy SĄ anagramami!\n");
    } else {
        printf("Wynik: Podane wyrazy NIE są anagramami.\n");
    }

    return 0;
}
