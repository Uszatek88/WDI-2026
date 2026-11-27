#include <stdio.h>

int main(){

    int i,j;
    int tablica[4][4];

    for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Podaj tablica[%d][%d]: ",i,j);
			scanf("%d", &tablica[i][j]);
		}
	}

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%4d", tablica [i][j] );
        }
        printf("\n");

    }
}
