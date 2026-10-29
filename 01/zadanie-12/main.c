#include <stdio.h>

int main(){
    int a;
    int i;
    int suma = 0;


    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);
    
    if(a<0){
        printf("Nieprawidlowe dane, podaj liczbe dodatnia. \n");
    }
    else if (a > 0){
        for(i=0; i<a; i++){
            suma = suma + i;
        }
    }
    
    printf("Suma liczb mniejszych od %d wynosi: %d \n", a, suma);
  
    
    
    return 0;
}
