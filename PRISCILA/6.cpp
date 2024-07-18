// Se lee un número de máximo tres dígitos (verifique que efectivamente sea de máximo tres dígitos) y se debe determinar si es un número capicúa, es decir, que leído de izquierda a derecha es igual que leído de derecha a izquierda. Por ejemplo: 727, 343, etc.

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
