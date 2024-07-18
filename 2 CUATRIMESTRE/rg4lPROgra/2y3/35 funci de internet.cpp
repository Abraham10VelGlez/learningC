#include <stdio.h>
#include <conio.h>

void llenar (int M[20][20], int f, int c)
{
 for (int i = 1 ; i <= f ; i++)
 { 
  for (int j = 1 ; j <= c ; j++)
  {
   printf ("Inserte pos[%d][%d]: ",i,j);
   scanf("%d",&M [i] [j]);
  }
 }
}

void mostrar (int M[20][20], int f, int c)
{
 for (int i = 1 ; i <= f ; i++)
 {
  printf("\n");
  for (int j = 1 ; j <= c ; j++)
  {
   printf ("[%d]",M [i] [j]);
  }
 }
}

void comunes (int R[20][20], int fr, int cr, int S[20][20], int fs, int cs)
{
 printf("\n\nLos elementos comunes de R en S son: ");
 for (int i = 1 ; i <= fr ; i++)
 {
  for (int j = 1 ; j <= cr ; j++)
  {
   for (int k = 1 ; k <= fs ; k++)
   {
    for (int l = 1 ; l <= cs ; l++)
    {
     if (R [i] [j] == S [k] [l])
       printf ("[%d]",R [i] [j]);
    }
   }
  }
 }
}

int main()
{
 int R [20] [20];
 int S [20] [20];
 int fr, cr, fs, cs;
 printf("Inserte filas de R: ");
 scanf("%d",&fr);
 printf("Inserte columnas de R: ");
 scanf("%d",&cr);
 printf("Inserte filas de S: ");
 scanf("%d",&fs);
 printf("Inserte columnas de S: ");
 scanf("%d",&cs);
 
 printf("\nLLENANDO MATRIS R: \n");
 llenar (R, fr, cr);
 printf("\nLLENANDO MATRIS S: \n");
 llenar (S, fs, cs);
 printf("\nLA MATRIS R : ");
 mostrar (R, fr, cr);
 printf("\n\nLA MATRIS S : ");
 mostrar (S, fs, cs);
 comunes (R, fr, cr, S, fs, cs);
 getch();
}
