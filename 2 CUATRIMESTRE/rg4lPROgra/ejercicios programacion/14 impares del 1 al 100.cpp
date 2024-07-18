#include <stdio.h>
#include <conio.h>

int main()
{
        int impares,impar=0;

        for(impares=0;impares<100;impares++)
        {
                if(impares%2!=0)
                {
                printf("\n%d",impares);
                impar = impar + 1;
                }
        }
        printf("\n%d Numeros impares que hay desde el 1 al 100",impar);
        getch();
}
