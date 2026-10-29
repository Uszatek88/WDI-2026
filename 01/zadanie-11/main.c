#include <stdio.h>

int main (){

    int a;
    printf("Podaj liczbe calkowita: ");

    if(scanf("%d", &a) != 1){
        printf("Niepoprawne dane wejsciowe!\n");
        return 1;
    }
    else if (a>0 && a%2 == 0){
        printf("Liczba %d jest parzysta i dodatnia.\n", a);

    }
    else{
        printf("Liczba %d nie jest jednoczesnie parzysta i dodatnia. \n", a);
    }
    return 0;


}
