#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       int vector_a[10][10], vector_b[10][10], vector_suma[10][10], vector_resta[10][10], vector_mult[10][10];
       int opc, i, j, n;
       
       printf("NUMEROS DE ELEMENTO DEL VECTOR: \n");
       scanf("%d", &n);
       printf("\n\n elementos del vector a: \n");
       for(i=0;i<n;i++)
       {
        for(i=0;i<n;i++)
       {                
       printf("vector a[%d]=", i);
       scanf("%d", &vector_a[i][j]);
       printf("vector a[%d]=", j);
       scanf("%d", &vector_a[i][j]);
       }
       }
       
       printf("\n\n elementos del vector b: \n");
       for(i=0;i<n;i++)
       {
       for(i=0;i<n;i++)
       {                
       printf("vector a[%d]=", i);
       scanf("%d", &vector_b[i][j]);
       printf("vector a[%d]=", j);
       scanf("%d", &vector_b[i][j]);
       }
       }
       printf("\n\n QUE OPERACION DESEA REALIZAR?...\n\n\t 1.-A+B\n\t 2.-A-B\n\t 3.-A*B\n\t");
       scanf("%d",&opc);
       
       if(opc==1){
       for(i=0;i<n;i++){
       vector_suma[i][j]=vector_a[i][j]+vector_b[i][j];
       printf("\n VECTOR A+B = [%d]", vector_suma[i][j]);
       }}
       else 
       if(opc==2){
       for(i=0;i<n;i++){
       vector_resta[i][j]=vector_a[i][j]-vector_b[i][j];
       printf("\n VECTOR A-B = [%d]", vector_resta[i][j]);
       }}
       else 
       if(opc==3){
       for(i=0;i<n;i++){
       vector_mult[i][j]=vector_a[i][j]*vector_b[i][j];
       printf("\n VECTOR A*B = [%d]", vector_mult[i][j]);
       }}
       getch();
       }
