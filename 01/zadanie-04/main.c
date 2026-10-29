#include <stdio.h>


int main() {
    int a, b, c;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Suma trzech wyrazów: %d\n", a + b + c);
    printf("Roznica pierwszych dwoch: %d\n", a - b);
    printf("Iloczyn pierwszej i trzeciej: %d\n", a * c);
    printf("Iloraz trzeciej i drugiej: %d\n", c/b);
    
    
    return 0;
}
