// Se lee un n�mero de m�ximo tres d�gitos (verifique que efectivamente sea de m�ximo tres d�gitos) y se debe determinar si es un n�mero capic�a, es decir, que le�do de izquierda a derecha es igual que le�do de derecha a izquierda. Por ejemplo: 727, 343, etc.

#include "iostream.h"
#include "conio.h"
#include "math.h"

// Retorna la cantidad de digitos que tiene un numero
int numeroDigitos(int numero)
{
int i=1;

while(numero/10!=0)
{
numero=numero/10;
i++; 
}

return i;
}
