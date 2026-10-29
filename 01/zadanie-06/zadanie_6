#include <stdio.h>

int main(){
    int sekundy, godziny, minuty, pozostale_sekundy, sekundy_koncowe;

    printf("Podaj nieujemną liczbę sekund: ");
    scanf("%d\n", &sekundy);
    

if(sekundy < 0){
printf("Liczba sekund nie może być mniejsza, niż zero.");
return 1;
}


godziny = sekundy / 3600;
pozostale_sekundy = sekundy % 3600; 
minuty = pozostale_sekundy / 60;
sekundy_koncowe = pozostale_sekundy % 60;

printf("%d h, %d min, %d s", godziny, minuty, sekundy_koncowe);



return 0;    
}
