#include <stdio.h>
int main(){
    int miesiac;
    printf("Podaj numer miesiaca (1-12): ");
    scanf("%d", &miesiac);

    switch(miesiac){
        case 1:
        case 2:
        case 3:
            printf("Miesiac %d nalezy do 1 kwartalu.\n", miesiac);
            break;
        case 4:
        case 5:
        case 6:
            printf("Miesiac %d nalezy do 2 kwartalu.\n", miesiac);
            break;
        case 7:
        case 8:
        case 9:
            printf("Miesiac %d nalezy do 3 kwartalu.\n", miesiac);
            break;
        case 10:
        case 11:
        case 12:
            printf("Miesiac %d nalezy do 4 kwartalu.\n", miesiac);
            break;
        default:
            printf("Niepoprawny numer miesiaca! Podaj liczbe od 1 do 12.\n");
            break;
    }

    return 0;
}
