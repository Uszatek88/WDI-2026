#include <stdio.h>
#include <ctype.h>

int main(){
    
    char imie[100]; 

    printf("Podaj swoje imie: "); 
    scanf("%s", imie); 

    if (islower(imie[0])) { 
        imie[0] = toupper(imie[0]); 
    }

    printf("Twoje imie z pierwsza wielka litera: %s\n", imie); 

    return 0;    
    
}

