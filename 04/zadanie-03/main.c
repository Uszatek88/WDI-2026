#include <stdio.h>
#include <ctype.h>

int main(){
    int znaki;
    int licznik =0;
    
    printf("Podaj ciag znakow: \n");
    
    while((znaki = getchar()) != '\n' && znaki != EOF){
        if(isspace(znaki)==0){ 
        licznik++;
        }
    }

    printf("Liczba znakow w ciagu: %d\n", licznik);

    return 0;
}


