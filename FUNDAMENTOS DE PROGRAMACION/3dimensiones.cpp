#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       int vector_a[10], vector_b[10], vector_suma[10], vector_resta[10], vector_mult[10];
       int opc, i, n;
       
       printf("NUMEROS DE ELEMENTO DEL VECTOR: \n");
       scanf("%d", &n);
       printf("\n\n elementos del vector a: \n");
       for(i=0;i<n;i++)
       {
       printf("vector a[%d]=", i);
       scanf("%d", &vector_a[i]);
       }
       
       printf("\n\n elementos del vector b: \n");
       for(i=0;i<n;i++)
       {
       printf("vector a[%d]=", i);
       scanf("%d", &vector_b[i]);
       }
       getch();
       }
       
