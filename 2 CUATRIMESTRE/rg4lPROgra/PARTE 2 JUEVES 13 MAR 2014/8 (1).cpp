#include<conio.h>
#include<stdio.h>

int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma, cua, divide;

int calculos();
int calculos()
{
     
     printf("introduce 10 numeros:");
     printf("\n");
   printf("\n");
     printf("primer numero:");
     scanf("%i",&num1);
    printf("segundo numero:");
    scanf("%i",&num2);
    printf("tercer numero:");
    scanf("%i",&num3);
    printf("cuarto numero:");
    scanf("%i",&num4);
    printf("quinto numero:");
    scanf("%i",&num5);
    printf("sexto numero:");
    scanf("%i",&num6);
    printf("septimo numero:");
    scanf("%i",&num7);
    printf("octavo numero:");
    scanf("%i",&num8);
    printf("noveno numero:");
    scanf("%i",&num9);
    printf("decimo numero:");
    scanf("%i",&num10);
    suma=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
     printf("el resultado de la suma es %i\n",suma);
     cua=suma*suma;
     printf("el cuadrado de la suma es %i\n",cua);
     divide=suma/10;
     printf("la division de la suma es %i\n",divide);
     }
main()
{
calculos();           
getch();
}      
