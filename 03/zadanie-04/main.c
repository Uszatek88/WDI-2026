#include <stdio.h>

int suma_cyfr (unsigned int liczba){

if(liczba == 0){
 return 0;
}

return (liczba % 10) + suma_cyfr(liczba / 10);


}


int main(){


unsigned int liczba;

printf("Podaj calkowita liczbe nieujemna: \n");
scanf("%u", &liczba);

printf("Suma cyfr wynosi: %d\n", suma_cyfr (liczba));


return 0;
}
