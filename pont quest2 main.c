/*Declare um vetor inteiros int vet[5] = {1,2,3,4,5} e um ponteiro de inteiros p que aponte para
esse vetor.
Você deverá imprimir:
A) O endereço guardado em vet e o endereço guardado em p.
B) Imprimir todos os valores de vet utilizando p com [ ].
C) Imprimir todos os valores de vet utilizando p com *.
D) Faça a mesma coisa de b e c utilizando vet no lugar de p.*/

#include <stdio.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int i;

    // Letra A)
    printf("Letra A): %p %p\n", p, &vet);

    // Letra B)
    printf("Letra B): ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    // Letra C)
    printf("Letra C): ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Letra D)
    printf("Letra D.1 Usando vet[]: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    printf("Letra D.2 Usando *(vet): ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(vet + i));
    }
    printf("\n");
    return 0;
}