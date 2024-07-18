#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

      int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, correctas, incorrectas;
      int main()
     {

printf("\n JUEGO DE PREGUNTAS: \n");
incorrectas=0;
while (incorrectas<=2)
{
 printf("1.-CUANDO SE CELEBRA EL DIA DE MUERTOS:\n");
 scanf("%d",&p1);
 if (p1==2)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
}
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }


   printf("2.- CUANDO ES EL DIA DEL PADRE?:\n");
   scanf("%d",&p2);
   if (p2==15)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
if(incorrectas<=2)
{
   printf("3.- CUANDO ES DIA DE LA BANDERA?:\n");
   scanf("%d",&p3);
   if (p3==24)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("4.- CUANDO ES EL DIA DE LAS MADRES?: \n");
   scanf("%d",&p4);
   if (p4==10)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("5.-CUANTAS CLASES DE FUNDAMENTOS DE PROGRAMACION TIENES A LA SEMANA\n");
   scanf("%d",&p5);
   if (p5==3)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
          
   }
}
if(incorrectas<=2)
{
   printf("6.- CUANDO ES DIA DE LA INDEPENDENCIA?:\n");
   scanf("%d",&p6);
   if (p6==1810)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("7.- CUANTO ES 20*30?:\n");
   scanf("%d",&p7);
   if (p7==600)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("8.- A LOS CUANTOS ANIOS PUEDES VOTAR?:\n");
   scanf("%d",&p8);
   if (p8==18)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("9.- CUAL ES EL RESULTADO DE 2+2?:\n");
   scanf("%d",&p9);
   if (p9==4)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }
   
   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
if(incorrectas<=2)
{
   printf("10.- CUANTO ES 5*5?:\n");
   scanf("%d",&p10);
   if (p10==25)
   {
          printf("RESPUESTA CORRECTA, SIGAMOS...\n");
          correctas=correctas+1;
   }

   else 
   {
          printf("RESPUESTA INCORRECTA, CUIDADO...\n");
          incorrectas=incorrectas+1;
   }
}
     printf("el numero de respuestas correctas es%d:\n",correctas);
     printf("el numero de respuestas incorrectas es%d:\n",incorrectas);
}
   getch();
   system ("pause");

}
