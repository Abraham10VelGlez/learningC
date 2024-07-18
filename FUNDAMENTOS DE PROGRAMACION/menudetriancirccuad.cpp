#include<stdio.h>
main()
{
      int opc;
      float perim, lado;
      menu:
           printf("\n");
           printf("\n");
           printf(" MENU DE PERIMETROS \n");
           printf("1.- CUADRADO\n");
           printf("2.- TRIANGULO\n");
           printf("3.- CIRCULO\n");
           printf("\n CUAL ELIGES?: \n");
           scanf("%d", &opc);
           switch(opc)
           {
              case 1:
                   printf("\n DAME EL VALOR DE UN LADO DEL CUADRADO: \t"); 
                   scanf("%f", &lado);
                   perim=lado*4;
                   printf("EL PERIMETRO ES: %f", perim);
                   goto menu;
                   break;
              case 2:
                   printf("\n DAME EL VALOR DE UN LADO DEL TRIANGULO:\t"); 
                   scanf("%f", &lado);
                   perim=lado*3;
                   printf("EL PERIMETRO ES: %f", perim);
                   goto menu;
                   break;
              case 3: 
                   printf("\n DAME EL VALOR DEL DIAMETRO:\t"); 
                   scanf("%f", &lado);
                   perim=lado*3.1416;
                   printf("EL PERIMETRO ES: %f", perim);
                   goto menu;
                   break;       
                   default: printf("\n\n VALOR NO VALIDO");
              }
              getchar();
              getchar();
              return 0;
              }
                          
