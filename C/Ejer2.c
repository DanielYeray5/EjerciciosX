#include <stdio.h>

int main()
{
    int anio;

    printf( "\n   Introduzca un anio: " );
    scanf( "%d", &anio );

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
        printf( "\n   ES BISIESTO" );
    else
        printf( "\n   NO ES BISIESTO" );

    return 0;
}