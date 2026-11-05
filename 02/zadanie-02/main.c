#include <stdio.h>

int main (){
    int n;
    int i;
    int suma = 0;
    int iloczyn = 1;

    printf("Podaj liczbe z zakresu 1-100: \n");

    scanf("%d", &n);
    if(n < 1 || n > 100){
        printf("Liczba spoza zakresu, podaj liczbe z zakresu 1-100! \n");
        return 1;
    }
    for(i = 1;i <= n; i++){
        iloczyn = i * i;
        suma = suma + iloczyn;
    }

    printf("Suma iloczynow wynosi: %d \n", suma);
    

    return 0;
}
