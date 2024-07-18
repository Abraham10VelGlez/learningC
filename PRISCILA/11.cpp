#include<stdio.h>
#include<conio.h>
#include<windows.h>

//1 PARTE
int convertidor(float cambio, float peso,float dolar);
int medidor(float presion,float volumen,float temperatura,float masa, float first, float second, float third);
int informe(int x,int y,int z,int suma,float promed);
int pulsera(int edad,int first,int pulsar);
int jefe(float sueldo,float aumento,float nuevo);
int manolarga(float presu,float gine,float pedia,float trauma);
int sumador(int a, int b, int c);
int trabajo(int horas,int dinero,int extra,int suextra);
int fitness(int opc,int tiempo,double cal);
int bisnieto(int anio);

//2 PARTE
float al(float y,float m,float div);
int tablas(int a,int res,int x);
int mat(int matriz[3][3],int f,int c);
float ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1);
float convertidor_temperatura(float cel,float fah,float primero,float despues);
float ayuntamiento();
float tiendita();
int calculos();
int mi_reloj(int h,int m,int s);
int ord();


//3 PARTE








int main()
{
    
    system("color 1e");
    
    //VARIABLES DE 1 PARTE
    
    
//VARIABLES DE 2 PARTE
 float y,m,div,Bas_ma,bas_me,altura,area_trapecio_2,area_trapecio_1,cel,fah,primero,despues,direc_finan,direc_des_soc,direc_infor,mon_men, primer_porce, segundo_porce, tercer_porce,ganan, prec,venta,artc;
 
 int a,res,x,matriz[3][3]={{0}},f,c,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,suma,cua,div,h,m,s,a,b,c,orden; 

        //VARIABLES DE 3 PARTE
        
        
        
        
    
     while(flag==1)
    {
        system("cls");
        printf("\t\t\tMENU DE ABRAHAM VELAZQUEZ MATRICULA:1314INI213");
        printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n1.-Convertidor de moneda peso-dolar\n2.-Determinar Masa\n3.-Suma y promedio\n4.-Calculadora de pulso\n5.-Tabulador de aumento de sueldo\n6.-Tabulador presupuestal\n7.-Suma de numeros\n8.-Horas trabajadas\n9.-Serie de numero ascendiente\n10.-Determinar Calorias\n11.-Años bisiestos\n......12.-Ayuda a una alvañil\n13.-Realice cualquiertabla de multiplicar\n14.-Mi llenado de una Matriz\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
        printf("15.-Resolver el Area de un trapecio\n16.-Convertidor de faharenheit a celsius\n17.-Reparticion de pesupuesto en una empresa\n18.-Ayuda a una tienda con sus ganancias y sus ventas\n19.-Lee 10 numeros sumalos,eleva cuadrado y divide\n20.-Reloj de la fabrica\n21.-Acomodo de 3 numeros de menor a mayor\n22.-");
        printf("ELEGIR OPCION: ");
        scanf("%d",& yums);
        system("cls");
        switch (yums)
        {
                 case 1:
                    convertidor(cambio,peso,dolar);
                    break;
               case 2:
                    medidor(presion,volumen,temperatura,masa,first,second,third);
                    break;
               case 3:
                    informe(x,y,z,suma,promed);
                    break;
               case 4:
                     pulsera(edad,primero,pulsar);
                     break;
               case 5:
                     jefe(sueldo,aumento,nuevo);
                     break;
               case 6:
                    manolarga(presu,gine,pedia,trauma); 
                    break;
               case 7:
                     sumador(a,b,c);
                     break;
               case 8:
                    trabajo(horas,dinero,extra,suextra);
                    break;
               case 9:
                    printf("\t\t\tORDENA-SERIES\n");
                    for(i=0;i<5;i++)
                    {
                                    printf("Ingrese el %der digito: ",i+1);
                                    scanf("%d",& array[i]);
                    }
                    for(i=0;i<5-1;i++)
                    {
                                      for(j=0;j<5-1;j++)
                                      {
                                                        if(array[j]>array[j+1])
                                                        {
                                                                       temp=array[j];
                                                                       array[j]=array[j+1];
                                                                       array[j+1]=temp;
                                                        }
                                      }
                    }           
                    
                    system("cls");
                    printf("\t\t\tORDENA-SERIES\n");
                    printf("Estos son los numeros en orden ascendente: ");
                    for(i=0;i<5;i++)
                    {
                                    printf("%d ",array[i]);
                    }
                    break;
               case 10:
                     fitness(opc,tiempo,cal);
                     break;
               case 11:
                    bisnieto(anio);
                    break;
                    case 12:
                         al(y,m,div);
                         break;
                         case 13:
                         tablas(a,res,x);
                         break;
                         case 14:
                              mat(matriz[3][3],f,c);
                              break;
                              case 15:
                         ayuda_alumno(Bas_ma,bas_me,altura,area_trapecio_2,area_trapecio_1);
                         break;
                         case 16:
                              convertidor_temperatura(cel,fah,primero,despues);
                              break;
                              case 17:
                                   ayuntamiento();
                                   break;
                                   case 18:
                                        tiendita();
                                        break;
                                        case 19:
                                        calculos();
                                        break;
                                        case 20:
                                             mi_reloj(h,m,s);
                                             break;
                                             case 21:
                                                  ord();
                                                  break;
                                                  
                                                  case 22:
                                                       
        default:
                       printf("Valor Invalido");
                       flag=2;
                       break;
    }
    getch();
    system("cls");
    printf("\n Quiere probar o hacer otro programa?\n\n1.-Si.\n2.-No, DESEAS SALIR.\nELEGIR OPCION: ");
    scanf("%d",& flag);
    }
    system("cls");
    printf("\tADIOS,BOMBON\t");
    Sleep(2000);
}
int convertidor(float cambio, float peso,float dolar)
{
    printf("Tipo de cambio actual: cuanto cuesta 1 dolar en pesos mexicanos?: ");
    scanf("%f",& cambio);
    system("cls");
    printf("Ingrese el monto en pesos: ");
    scanf("%f",& peso);
    dolar=peso/cambio;
    system("cls");
    printf("%f pesos equivale a: %.2f dolares",peso,dolar);
}
int medidor(float presion,float volumen,float temperatura,float masa, float first, float second, float third)
{
    printf("Ingrese la presion: ");
    scanf("%f",& presion);
    printf("Ingrese el volumen: ");
    scanf("%f",& volumen);
    printf("Ingrese la temperatura: ");
    scanf("%f",& temperatura);
    first=presion*volumen;
    second=temperatura+460;
    third=0.37*second;
    masa=first/third;
    printf("La masa es: %.2f", masa);
}
int informe(int x,int y,int z,int suma,float promed)
{
    printf("Ingrese el primer numero: ");
    scanf("%d",& x);
    system("cls");
    printf("Ingrese el segundo numero: ");
    scanf("%d",& y);
    system("cls");
    printf("Ingrese el tercer numero: ");
    scanf("%d",& z);
    suma=x+y+z;
    promed=suma/3;
    system("cls");
    printf("\t\tINFORME:\n__________________________________\nPrimer numero digitado:  %d.\n__________________________________\nSegundo numero digitado: %d.\n__________________________________\nTercer numero digitado:  %d.\n__________________________________\nSUMA:\t\t\t %d.\n__________________________________\nPROMEDIO:\t\t %.2f\n__________________________________",x,y,z,suma,promed);
}
int pulsera(int edad,int primero,int pulsar)
{
    printf("\t\t\tCALCULADORA DE PULSO:\nIngrese su edad: ");
    scanf("%d",& edad);
    primero=220-edad;
    pulsar=primero/10;
    system("cls");
    printf("Una persona de %d anios tiene %d pulsasiones por cada 10 segundos de ejercicio.",edad,pulsar);
}
int jefe(float sueldo,float aumento,float nuevo)
{
    printf("\t\t\tTABULADOR DE AUMENTO\n\t\t\t   (25%)");
    printf("\nIngrese su sueldo anterior: ");
    scanf("%f",& sueldo);
    aumento=sueldo*0.25;
    nuevo=sueldo+aumento;
    system("cls");
    printf("\t\t\tTABULADOR DE AUMENTO\n\t\t\t   (25%)");
    printf("\nSu sueldo anterior fue de: %.2f pesos.\nSu aumento corresponde a: %.2f pesos.\nResultando en un nuevo sueldo de: %.2f pesos.",sueldo,aumento,nuevo);
}
int manolarga(float presu,float gine,float pedia,float trauma)
{
     printf("\t\t\tTABULADOR PRESUPUESTAL\n");
    printf("Ingrese el presupuesto anual: ");
    scanf("%f",& presu);
    gine=presu*0.4;
    pedia=presu*0.3;
    trauma=presu*0.3;
    system("cls");
    printf("\t\t\tTABULADOR PRESUPUESTAL\n");
    printf("El presupuesto destinado a ginecologia asciende a: %.2f pesos.\nEl presupuesto destinado a pediatria asciende a: %.2f pesos.\nEl presupuesto destinado a traumatologia asciende a: %.2f pesos",gine,pedia,trauma);
}
int sumador(int a, int b, int c)
{
     printf("Introducir 3 numeros cualquier orden, uno debe ser la suma de los otros dos.");
    printf("\nDigite el primer numero: ");
    scanf("%d",& a);
    printf("\nDigite el segundo numero: ");
    scanf("%d",& b);
    printf("\nDigite el tercer numero: ");
    scanf("%d",& c);
    system("cls");
    if(a>b)
    {
           if(a>c)
           {
                  if(a==b+c)
                  {
                            printf("El numero %d es la suma de %d y %d",a,b,c);
                  }
                  else
                  {
                            printf("La suma de los menores no resulta en el mayor");
                  }
           }
           else
           {
                  if(c==a+b)
                  {
                            printf("El numero %d es la suma de %d y %d",c,a,b);
                  }
                  else
                  {
                            printf("La suma de los menores no resulta en el mayor");
                  }
           }
    }
    else
    {
           if(b>c)
           {
                  if(b==c+a)
                  {
                            printf("El numero %d es la suma de %d y %d",b,c,a);
                  }
                  else
                  {
                            printf("La suma de los menores no resulta en el mayor");
                  }
           }
           else
           {
                  if(c==a+b)
                  {
                            printf("El numero %d es la suma de %d y %d",c,a,b);
                  }
                  else
                  {
                            printf("La suma de los menores no resulta en el mayor");
                  }
           }
    }
}
int trabajo(int horas,int dinero,int extra,int suextra)
{
    printf("Digite el numero de horas trabajadas esta semana: ");
    scanf("%d",& horas);
    if(horas<=40)
    {
                 dinero=horas*20;
    }
    else
    {
                 extra=horas-40;
                 suextra=extra*30;
                 dinero=suextra+800;
    }
    system("cls");
    printf("Su sueldo es de: %d pesos",dinero);
}
int fitness(int opc,int tiempo,double cal)
{
    printf("1.-Dormir.\n2.-Sentarse en reposo.\nQue actividad realizara?: ");
    scanf("%d",& opc);
    printf("Durante cuanto tiempo (minutos)?: ");
    scanf("%d",& tiempo);
    switch (opc)
    {
           case 1:
                cal=1.08*tiempo;
                printf("Usted baja %lf calorias durmiendo durante %d minutos",cal,tiempo);
                break;
           case 2:
                cal=1.66*tiempo;
                printf("Usted baja %lf calorias sentado en reposo durante %d minutos",cal,tiempo);
                break;
           default:
                   printf("Valor invalido");
    }
}
int bisnieto(int anio)
{
    printf("Ingrese un año: ");
    scanf("%d",& anio);
    if(anio%4==0 && (anio%400==0||anio%100!=0))
    {
                 printf(" El año %d es bisiesto.",anio);
    }
    else
    {
                 printf("El año %d no es bisiesto.",anio);
    }
}
// 2 parte 10 ejercicios

float al(float y,float m,float div)
{   
     printf("SR. ALVAÑIL INGRESE MEDIDA uno DE LARGO:"); scanf("%f",&y);
     printf("SR. ALVAÑIL INGRESE MEDIDA dos DE ALTO:"); scanf("%f",&m);
     div=y/m;
     printf("EL TAMAÑO DE LA BARDA ES DE %.2f ",div);
     }
int tablas(int a,int res,int x)
 {    
    printf("INGRESA EL NUMERO DE LA TABLA");
    scanf("%d",&x);
    for(a=1;a<=10;a++)
{    
res=x*a;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",x,a,res);
                     }
                     }
                     int mat(int matriz[3][3],int f,int c)

{
      for(f=0;f<3;f++)
     {
                      for(c=0;c<3;c++)
                      {
    
    printf("\n INGRESA EL NUMERO DEL ACOMODO [%d][%d] DE LA MATRIZ \n",f+1,c+1);
    scanf("%d",&matriz[f][c]);
                           
             printf("\n");              
}
}

 
 printf("_________________valores de la matriz________________\n");
 
 printf("\t\tMATRIZ ACOMODADA DEACUERDO AL NUMERO ASIGNADO");
 
 for(f=0;f<3;f++)
 {
                 printf("\n");
                 
                 for(c=0;c<3;c++)
                 {
                 printf("%6d",matriz[f][c]);
                 }
                 }            
                 printf("\n"); 
                 printf("\n");  
                 }
float ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1)

{
            
            printf("INGRESA LA BASE MAYOR");
            scanf("%f",&Bas_ma);
            printf("INGRESA LA BASE MENOR");
            scanf("%f",&bas_me);
            printf("INGRESA ALTURA");
            scanf("%f",&altura);
            
            
            area_trapecio_1=Bas_ma+bas_me;
            area_trapecio_2=area_trapecio_1*altura / 2;
      printf(" El AREA DEL TRAPECIO ES:%.1f",area_trapecio_2);
      
      }
float convertidor_temperatura(float cel,float fah,float primero,float despues)
{
      printf("\nDIGITA LOS GRADOS FAHARENHEIT\n");
      scanf("%f",&fah);
      
      primero=fah-32;
despues=(primero*5)/9;
printf("\n%.2f Faharenheit es igual a %.2f grados celcius \n",fah,despues);

}
float ayuntamiento()
{
      printf("\t H.AYUNTAMIENTO DE TOLUCA \t");
       printf("\n");
        printf("\n");
      printf("INGRESE POR FAVOR MONTO MENSUAL");
       printf("\n");
      scanf("%f",&mon_men);
      primer_porce=mon_men*.40;
      printf(" EL PORCENTAJE DE DIRECCION DE FINANZAS:%.2f",primer_porce);
       printf("\n");
      segundo_porce=mon_men*.20;
      printf("EL PORCENTAJE DE DIRECCION DE DESARROLLO SOCIAL:%.2f",segundo_porce);
       printf("\n");
      tercer_porce=mon_men*.40;
            printf("EL PORCENTAJE DE DIRECCION DE INFORMATICA:%.2f",tercer_porce);
            mon_men=primer_porce+segundo_porce+tercer_porce;
             printf("\n");
            printf("Monto por mes es:%.2f",mon_men);
             printf("\n");
              
              }
float tiendita()
{
       printf("INGRESA PRECIO DE ARTICULO");
      printf("\n");
scanf("%f",&artc);

ganan=artc*0.30;

printf("\nLA GANCIA ES:%.1f\n",ganan);

venta=ganan+artc;

 printf("\nEL PRECIO DE LA VENTA ES:%.1f\n",venta);
   printf("\n");
   printf("\n");
              printf("¡¡¡¡GRACIAS X SU COMPRA!!!!");
              }
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
     div=suma/10;
     printf("la division de la suma es %i\n",div);
     }
int mi_reloj(int h,int m,int s)
{
   for( h=1; h<=12; h++)
  {
        for( m=1; m<=30; m++)
  {
        for( s=1; s<=59; s++)
  {
        
printf("\n son las %d horas: con %d min : con %d seg\n", h,m,s);                                  
}
}
}             
}   
int ord()
{

    printf("\t INGRESA TRES NUMEROS: \t");
    
printf("PRIMER NUMERO:\n"); 
scanf("%d",&a); 
printf("SEGUNDO NUMERO:\n"); 
scanf("%d",&b); 
printf("TERCER NUMERO:\n"); 
scanf("%d",&c); 
if(a>b) 
{
        orden=a; 
a=b; 
b=orden; 
} 
if(a>c) 
{
        orden=a; 
a=c; 
c=orden; 
} 
if(b>c) 
{
        orden=b; 
b=c; 
c=orden; 
} 
printf("\tLOS DATOS ORDENADOS SON\t:"); 
printf("\n1er:%d\n ",a); 
printf("\n2do:%d\n ",b); 
printf("\n3er:%d\n ",c);
}
// 3 parte

              
                         
               
