#include <stdio.h>
#include <ctype.h>

int main(){
    
    char imie[100]; 
    int i;
    int wybor;


    printf("Podaj swoje imie: "); 
    scanf("%s", imie); 

    printf("Wybierz sposob rozwiazania: \n");
    printf("1. Przy użyciu biblioteki ctype.h\n");
    printf("2. Bez użycia biblioteki ctype.h (używając kodów znaków ASCII)\n");
    scanf("%d", &wybor);

    switch(wybor){
        case 1:
            if (islower(imie[0])) { 
                imie[0] = toupper(imie[0]); 
            }
            i =1;
            while (imie[i] != '\0') { 
                if (isupper(imie[i])) { 
                    imie[i] = tolower(imie[i]); 
                }
                i++;
            }
            break;

        case 2:
        if (imie[0]!= '\0'){
            
            if (imie[0] >= 'a' && imie[0] <= 'z') { 
                imie[0] = imie[0] - 32; 
            }
            i = 1;
            while (imie[i] != '\0') { 
                if (imie[i] >= 'A' && imie[i] <= 'Z') { 
                    imie[i] = imie[i] + 32; 
                }
                i++;
            }
        }
        break;
    }

    
    
    printf("Twoje imie z pierwsza wielka litera: %s\n", imie); 

    return 0;    
}



