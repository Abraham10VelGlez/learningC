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
       printf("\n\n QUE OPERACION DESEA REALIZAR?...\n\n\t 1.-A+B\n\t 2.-A-B\n\t 3.-A*B\n\t");
       scanf("%d",&opc);
       
       if(opc==1){
       for(i=0;i<n;i++){
       vector_suma[i]=vector_a[i]+vector_b[i];
       printf("\n VECTOR A+B = [%d]", vector_suma[i]);
       }}
       else 
       if(opc==2){
       for(i=0;i<n;i++){
       vector_resta[i]=vector_a[i]-vector_b[i];
       printf("\n VECTOR A-B = [%d]", vector_resta[i]);
       }}
       else 
       if(opc==3){
       for(i=0;i<n;i++){
       vector_mult[i]=vector_a[i]*vector_b[i];
       printf("\n VECTOR A*B = [%d]", vector_mult[i]);
       }}
       getch();
       }
