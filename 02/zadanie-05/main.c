#include <stdio.h>

int main() {
    char wybor;

    printf("Wybierz role (P - poddany, G - giermek, R - rycerz, M - mag, K - krolowa): \n");
    scanf(" %c", &wybor);

    switch(wybor) {
        case 'K':
        case 'k':
            printf("Krolowa moze: czcic Krola, wchodzic na dziedziniec zamkowy codziennie,wchodzic do zamku codziennie oraz rekrutowac giermkow, rozmawiac z Krolem, rozkazywac Krolowi. ");
            break;
        case 'M':
        case 'm':
            printf("Mag moze: czcic Krola, wchodzic na dziedziniec zamkowy codziennie,wchodzic do zamku codziennie oraz rekrutowac giermkow, rozmawiac z Krolem. ");
            break;
        case 'R':
        case 'r':
            printf("Rycerz moze: czcic Krola, wchodzic na dziedziniec zamkowy codziennie,wchodzic do zamku codziennie oraz rekrutowac giermkow. ");
            break;
        case 'G':
        case 'g':
            printf("Giermek moze: czcic Krola, wchodzic na dziedziniec zamkowy codziennie. ");
            break;
        case 'P':
        case 'p':
            printf("Poddany moze: czcic Krola.\n");
            break;

        default:
            printf("Niepoprawna rola, podaj jedna z podanych: P, G, R, M, K\n");
            break;
    }

    return 0;
}
