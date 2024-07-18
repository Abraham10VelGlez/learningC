/*33.	Dadas dos matrices A y B intercambiar 
los mínimos de A con los máximos de B*/

#include <stdio.h>
#include <conio.h>
void llenar (int M[20][20], int f, int c)
{
 for (int i = 1 ; i <= f ; i++)
 {
  for (int j = 1 ; j <= c ; j++)
  {
  printf ("Inserte pos[%d][%d]: ",i,j);
  scanf("%d",&M[i][j]); 
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
  printf ("[%d]",M[i][j]);
  }
 }
}

int menor (int M[20][20], int f, int c)
{
 int men = M [1] [1];
 for (int i = 1 ; i <= f ; i++)
 {
  for (int j = 1 ; j <= c ; j++)
  {
  if (M [i] [j] < men)
  men = M [i] [j];
  }
 }
 return (men);
}
  
int maximo (int M[20][20], int f, int c)
{
 int max = M [1] [1];
 for (int i = 1 ; i <= f ; i++)
 {
  for (int j = 1 ; j <= c ; j++)
  {
  if (M [i] [j] > max)
  max = M [i] [j];
  }
 }
 return (max);
}

void intercambiar (int A[20][20], int fa, int ca, int B[20][20], int fb, int cb)
{
 int min_a = menor (A, fa, ca);
 int max_b = maximo (B, fb, cb);
 //para cambiar los minimos de A con los maximos de B
 for (int i = 1 ; i <= fa ; i++)
 {
  for (int j = 1 ; j <= ca ; j++)
  {
  if (A[i][j] == min_a)
  A[i][j]=max_b;
  }
 }
 //para intercambiar los maximos de con los minimos de A
 for (int i = 1 ; i <= fb ; i++)
 {
  for (int j = 1 ; j <= cb ; j++)
  {
  if (B[i][j] == max_b)
  B[i][j]=min_a;
  }
 }
}

int main ()
{
   printf ("\n \t 33\n Dadas dos matrices A y B intercambiar los mínimos de A con los máximos de B\n \n "); 
 int A [20] [20];
 int B [20] [20];
 int fa, ca, fb, cb;
 printf ("\n Insert filas de A: "); scanf("%d",&fa);
 printf ("Insert columnas de A: "); scanf("%d",&ca);
 printf ("Insert filas de B: "); scanf("%d",&fb);
 printf ("Insert columnas de B: "); scanf("%d",&cb);
 
 //lectura de matrices
 printf ("\nINSERTANDO DATOS EN MATRIS A: \n");
 llenar (A, fa, ca);
 printf ("\nINSERTANDO DATOS EN MATRIS B: \n");
 llenar (B, fb, cb);
 printf ("\nMATRICES ORIGINALMENTE INSERTADAS: ");
 mostrar (A, fa, ca);
 printf ("\n");
 mostrar (B, fb, cb);
 printf ("\n");
 //intercambiando elementos
 intercambiar (A, fa, ca, B, fb, cb);
 printf ("\nMATRICES DESPUES DEL INTERCAMBIO:");
 mostrar (A, fa, ca);
 printf ("\n");
 mostrar (B, fb, cb);

getch();
return 0;

}
