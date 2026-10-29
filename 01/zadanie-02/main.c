#include <stdio.h>

int main() 
{
	float a;

	printf("Podaj liczbe zmiennoprzecinkowa: ");
	scanf_s("%f", &a);

	printf("1 miejsce po przecinku: %.1f\n", a);
	printf("3 miejsca po przecinku: %.3f\n", a);
	printf("5 miejsc po przecinku: %.5f\n", a);

	return 0;


}
