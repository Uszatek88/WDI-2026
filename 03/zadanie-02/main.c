#include <stdio.h>

int main(){

unsigned int n, wartosc;

printf("Podaj ile wyrazow ma liczyc ciag: \n");
scanf("%d", &n);

if (n==1){
printf("Wartosc wynosi: %d", n);
}

if (n==2){
printf("Wartosc wynosi: %d", n);

}

if(n==3){
printf("Wartosc wynosi: %d", n);
}

if(n>= 4){
wartosc = (n-1)*(n-2)-(n-3);
printf("Wartosc wynosi: %d", wartosc);
}

return 0;
}

