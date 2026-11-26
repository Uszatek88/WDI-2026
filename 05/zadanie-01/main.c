#include <stdio.h>

int main(){
    char liczba1[2];
    char liczba2[2];
    
    printf("Podaj 2 liczby (10-99): ");
    scanf("%s %s", liczba1, liczba2);

     if (liczba1[0]==liczba2[1] || liczba1[1]==liczba2[0]){
        printf ("\n Liczby %s %s sa lustrzane \n", &liczba1, &liczba2);
    }
    else{
        printf("To nie sa liczby lustrzane");
    }

        return 0;
}
