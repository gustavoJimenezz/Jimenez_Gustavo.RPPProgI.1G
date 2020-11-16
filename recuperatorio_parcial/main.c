#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contarCaracteres(char palabra[],char letra);
float aplicarDescuento(int precio);
int main()
{
    int precio = 50;
    char palabra[20]= "como estas?";
    char letra = 'o';

    printf("cantidad de veces %d\n",contarCaracteres(palabra,letra));

    printf("%0.2f\n",aplicarDescuento(precio));
    return 0;
}
float aplicarDescuento(int precio)
{   float total ;
    total = precio-(precio*0.05);
    return total;
}
int contarCaracteres(char palabra[],char letra)
{   int contador=0;
    int tam = strlen(palabra);
    for( int i = 0; i <tam ; i++)
    {

        if(palabra[i] == letra)
        {
            contador++;
        }
    }
    return contador;
}
