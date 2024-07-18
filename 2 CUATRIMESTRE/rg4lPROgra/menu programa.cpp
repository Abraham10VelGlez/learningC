#include<stdio.h>
#include<conio.h>
main()
{
      int opc;
clrscr();
printf("**********MENU(PROYECTO FINAL)**********\n\n");
printf("1.PROGRAMAS 1ER AVASNCE");printf("\n2.PROGRAMAS 2DO AVASNCE");printf("\n3.PROGRAMAS 3ER AVASNCE");printf("\nELIGE UNA OPCION");scanf("%d",opc);
clrscr();
do
{
switch(opc)
{
           case 1: int opc1;
                printf("elige una opcion");
                printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                          printf("11.saber si un año es bisiesto o no");
                           printf("12.precio de venta de un articulo");
                            printf("ingresa el numero del programa que deses ejecutar");
                            scanf("%d",&opc1);
                            switch(opc1)
                            {
                      
case 1:
                   printf("cantidad de pesos");
      scanf("%f",&peso);
      printf("cantidad de dolares");
      scanf("%f",&dolar);
      
      valordolar=peso/dolar;
      printf("El valor en dolares es: %f",valordolar);
      break;
      
              case 2:
                   printf("Escribe presion");
      scanf("%i",pre);
      printf("Escribe volumen");
      scanf("%i",vol);
      printf("Escribe temperatura");
      scanf("%i",tem);
      
      ope1=pre*vol;
      
      ope2=ope1/0.37;
      
      ope3=ope2*tem+460;
      
      printf("Masa total es: %i",ope3);
      break;
              case 3:
                    for(num=1;num<=3;num++)
      {
                          printf("introduce numero %d que es: ",num);
                          scanf("%d",&a);
                          }
                          printf("\n");
                          suma=a+a+a;
                          
                          printf("la suma es:%d\n",suma);
                          
                          prom=suma/3;
                          
                          printf("el promedio es:%.2f",prom);
                          break;
              case 4:
                   printf("ingresa tu edad: ");
      
      scanf("%d",&edad);
      
      numpul=220-edad;
      ope1=numpul/10;
      
      printf("El numero de pulsaciones es:%.2f",ope1);
      break;
              case 5:
                    printf("Ingresa salario\n");
      scanf("%i",&salario);
      
      nuevosalario=salario*1.25;
      printf("SU NUEVO SALARIO CON AUMENTO DEL 25 PORCIENTO ES:\n");
      
      printf("nuevo salario es:%.2f",nuevosalario);
      break;
              case 6:
                   printf("ingresa monto mensual: ");
      scanf("%.2f",&monmen);
      
      opera1=monmen*0.40;
      printf("La cantidad para Ginecologia es:%f\n",opera1);
      opera2=monmen*0.30;
      printf("La cantidad para Ginecologia es:%f\n",opera2);
      opera3=monmen*0.30;
      printf("La cantidad para Ginecologia es:%f\n",opera3);
      
      monmen=opera1+opera2+opera3;
      
      printf("Monto mensual es:%.2f", monmen);
      break;
      
              case 7:
                      printf("Ingresa numero:  ");
                 scanf("%d",&l);
                 printf("Ingresa numero:  ");
                 scanf("%d",&b);
                 printf("Ingresa numero:  ");
                 scanf("%d",&c);

                 
                 if(l>b&&l>c)
                 {
                             printf("el numero de la suma es: %d",l);
                             }
                             else
                             if(b>l&&b>c)
                             {
                                         printf("el numero de la suma es: %d",b);
                             }
                             else
                             if(c>l&&c>b)
                             {
                                         printf("el numero de la suma es: %d",c);
                                         }
                                         break;
              case 8:
                     printf("Introduce horas trabajadas: ");
      scanf("%d",&h_tra);
      
      if(h_tra<40)
      {
                  sal=20*h_tra;
                  printf(" su pago es: %d",sal);
                  }
                  else
                  if(h_tra>40)
                  {
                              hex=h_tra-40;
                              tot_1=40*20;
                              tot_2=h_tra*30;
                              total=tot_1+tot_2;
                              
                              printf("Horas pasadas con tiempo extra es: %d",total);
                              }
                              break;
              case 9:
                   printf("Cuantos Numeros? ");
scanf(" %i",&numm);
int vec[numm];
for(int a=0;a<numm;a++){

printf("Teclea Numero %i de %i:",(a+1),numm);
scanf(" %i",&vec[a]);
}

int aux2;

for(int b2=0;b2<numm;b2++){
for(int b=0;b<numm;b++){

      if(vec[b]>vec[b+1]){
      int aux=vec[b];
	   vec[b]=vec[b+1];
	   vec[b+1]=aux;
        
	  }}
}

for(int b=0;b<numm;b++){

    
printf("\n%i",vec[b]);
}
break;
case 10:
      int t,activid;
      float calorias1,calorias2;
      
      printf("dormir_1 1.08 cal en 1 minuto\n");
      printf("sentado_2 1.66 cal en 1 minuto\n");
      
      printf(" Ingresa tu tiempo:");
      scanf("%d",&t);
      
      if(calorias1=1.08)
      {
                       calorias1=1.08*t;
                       printf("\n calorias que el cuerpo consume dormido es: %d",calorias1);     
                       }
                       else
                       if(calorias2=1.66)
                       {
                       printf("sentado_2\n");
                       calorias2=1.66*t;
                       printf("\n calorias que el cuerpo consume sentado es:  %d",calorias2);
                       }    
                       break:
                             case 11:
                                  
case 12:
      float gan, prec,vent,a; 
      printf("introduce el precio del articulo");
      printf("\n");
scanf("%f",&a);
gan=a*0.30;
vent=gan+a;
 printf("el precio de venta es:%.2f",vent);
   printf("\n");
                
                }
                }
                }
                






   case 2: int opc2;
                printf("elige una opcion");
                printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                            scanf("%d",&opc2);
                            switch(opc2)
                            {
                                        case 1:
                                             case 2:
                                                  case 3:
                                                       case 4:
                                                            case 5:
                                                                 case 6:
                                                                      case 7:
                                                                           case 8:
                                                                                case 9:
                                                                                     case 10:
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
                                                                                          
               case 3: int opc3;
                printf("elige una opcion");
                printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                         printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                         printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                         printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                         printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                         printf("1.cambio de pesos a dolares");
                 printf("2.mas de precion, volumen y temperatura");
                  printf("3.suma y promedio de 3  numeros");
                   printf("4.numero de pulsaciones de un cuerpo");
                    printf("5.salario de un obrero");
                     printf("6.monto mensual de un hospital");
                      printf("7.3 numeros y saber cual de ellos es la suma de los otros2");
                       printf("8.salario semanal de un obrero");
                        printf("9.3 numeros y las almacene en variables ");
                         printf("10.calorias que consume un cuerpo en reposo ");
                         
                            scanf("%d",&opc3);
                            switch(opc3)
                            {
                                        case 1:
                                             case 2:
                                                  case 3:
                                                       case 4:
                                                            case 5:
                                                                 case 6:
                                                                      case 7:
                                                                           case 8:
                                                                                case 9:
                                                                                     case 10:
                                                                                          
                                                                                          case 11:
                                             case 12:
                                                  case 13:
                                                       case 14:
                                                            case 15:
                                                                 case 16:
                                                                      case 17:
                                                                           case 18:
                                                                                case 19:
                                                                                     case 20:
                                                                                          
                                                                                          case 21:
                                             case 22:
                                                  case 23:
                                                       case 24:
                                                            case 25:
                                                                 case 26:
                                                                      case 27:
                                                                           case 28:
                                                                                case 29:
                                                                                     case 30:
                                                                                          case 31:
                                             case 32:
                                                  case 33:
                                                       case 34:
                                                            case 35:
                                                                 case 36:
                                                                      case 37:
                                                                           case 38:
                                                                                case 39:
                                                                                     case 40:
                                                                                          
                                                                                          case 41:
                                             case 42:
                                                  case 43:
                                                       case 44:
                                                            case 45:
                                                                 case 46:
                                                                      case 47:
                                                                           case 48:
                                                                                case 49:
                                                                                     case 50:
                                                                                          
                                                                                          case 1:
                                             case 2:
                                                  case 3:
                                                       case 4:
                                                            case 5:
                                                                 case 6:
                                                                      case 7:
                                                                           case 8:
                                                                                case 9:
                                                                                     case 10:
    
    
    
                                                                                          
