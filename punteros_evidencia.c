#include <stdio.h>

// Función para intercambiar los valores de dos variables utilizando punteros
void intercambiar(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    printf("Antes del intercambio: a = %d, b = %d\n", a, b);

    // Llamada a la función intercambiar utilizando punteros
    intercambiar(&a, &b);

    printf("Después del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}
