#include<conio.h>
#include<stdio.h>
int num[100000],n;
void insercion()
{
 int tem;
 for (int q=1;q<n;q++)
 {
  tem=num[q];
  for (int j=q;j>0 && tem<num[j-1];j--)
  {
   num[j]=num[j-1];
   num[j-1]=tem;
  }
 }
} 
void imprimir()
{
 for (int h=0;h<n;h++)
 {
  printf("\t%d",num[h]);
 }
}
main()
{
 printf("cantidad de numeros: ");
 scanf("%d",&n);
 for (int y=0;y<n;y++)
 {
  printf("valor %d: ",y+1);
  scanf("%d",&num[y]);
 }
 printf("\norden ingresados:\n\n");
 imprimir();
 insercion();
 printf("\n\norden original:\n\n");
 imprimir();
 getch();
}
