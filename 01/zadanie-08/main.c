#include <stdio.h>

int main(){
    int a, b;
    char znak;  

    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d", &a, &b); 

    printf("Podaj znak dzialania (+, -, *, /, %%): \n");
    scanf(" %c", &znak);

    if (znak == '+'){
        printf("Wynik dodawania: %d\n", a + b);
    }

    else if (znak == '-'){
        printf("Wynik odejmowania: %d\n", a - b);
    }

    else if (znak == '*'){
        printf("Wynik mnozenia: %d\n", a * b);
    }

    else if (znak == '/'){
        if (b == 0){
            printf("Nie mozna dzielic przez zero!\n");
        }
        else{
            printf("Wynik dzielenia: %d\n", a / b);
        }
    }

    else if (znak == '%'){
        if (b == 0){
            printf("Nie mozna dzielic przez zero!\n");
        }
        else{
            printf("Wynik reszty z dzielenia: %d\n", a % b);
        }
    }

    else{
        printf("Niepoprawny znak dzialania!\n");
    }
return 0;

}

