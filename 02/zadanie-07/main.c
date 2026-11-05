#include <stdio.h>

int main(){
    const unsigned int granica = 20U;
    unsigned suma=0U;
    unsigned i;

    for (i=1U; i<=granica; i++){
        if(i%3==0){
            suma = suma + i;
        }
    }
    printf("Suma liczb: %u\n", suma);
    return 0;
}
