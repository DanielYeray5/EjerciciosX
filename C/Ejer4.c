/* Programa: Cuadrados de los números del 1 al 10 */
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 1 ; numero <= 10 ; numero++ )
    {
        printf( "%.f ", pow( numero, 2 ) );
    }

    return 0;
}