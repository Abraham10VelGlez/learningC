#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <conio.h>
#define N 3
#define INI 33
#define FIL 15
#define COL 20
#define LIM 8
#define MAX_RADIO 2.0
#define PI 3.141592
#define MIN(a,b) ((a < b) ? a : b)
 #define MAX(a,b) ((a > b) ? a : b)
#define ANCHO 77
#define FILAS 4

using namespace std;

void pesodolar();
void pesodolar()
{
      float peso,dolar,valordolar;
      
      printf("cantidad de pesos");
      scanf("%f",&peso);
      printf("cantidad de dolares");
      scanf("%f",&dolar);
      
      valordolar=peso/dolar;
      printf("El valor en dolares es: %f",valordolar);
      
      }
         
      void masa();
      void masa()
      {
   int pre,vol,tem,ope2,ope1,ope3;
   {
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
      }
      void promsuma();
      void promsuma()
      {
      int num,suma,a;
      float prom;
      
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
                          }
                          }
      void numpuledad();
      void numpuledad()
      {
      int numpul,edad;
      float operacion1;
      
      printf("ingresa tu edad: ");
      
      scanf("%d",&edad);
      
      numpul=220-edad;
      operacion1=numpul/10;
      
      printf("El numero de pulsaciones es:%.2f",operacion1);
      }
    void SALARIOAUMENTO();  
    void SALARIOAUMENTO()
    {
      int salario;
      float nuevosalario;
      
      printf("Ingresa salario\n");
      scanf("%i",&salario);
      
      nuevosalario=salario*1.25;
      printf("SU NUEVO SALARIO CON AUMENTO DEL 25 PORCIENTO ES:\n");
      
      printf("nuevo salario es:%.2f",nuevosalario);
      
      }
      void montomensual();
      void montomensual()
      {
      
      float monmen,opera1,opera2,opera3;
      
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
      }
      void numerodesuma();
      void numerodesuma()
      {
      
int i,l,b,c;

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
                                         
                                                    }
void tiempoextra();
void tiempoextra()
{
      int h_tra,sal,hex,tot_1,tot_2,total;
      
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
                              }
      void TecleaNumero();
      void TecleaNumero()
      {

int numm=0;
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
}
void cuerpo();
void cuerpo()
{
      int t,act;
      float calorias;
      printf("actividades que realizaste:\n en caso de dormir oprime 1 en caso de sentado oprime 2:");
      printf("\n1_dormir 1.08 cal en 1 minuto\n");
      printf("\n2_sentado 1.66 cal en 1 minuto\n");
      scanf("%d",&act);
      printf(" Ingresa tu tiempo:");
      scanf("%d",&t);
      
      if(act==1)
      {
                       calorias=1.08*t;
                       printf("\n calorias que el cuerpo consume dormido es: %.2f",calorias);     
                       }
                       else
                       if(act==2)
                       {
                       calorias=1.66*t;
                       printf("\n calorias que el cuerpo consume sentado es:  %.2f",calorias);
                       }    
                       }
void bisiesto();
void bisiesto()
{
int num1;
printf("Introduce el anio: ");
scanf("%d",&num1);
if((num1%4==0) && !(num1%100==0))
{
    printf("El anio es bisiesto");
}
else if (num1%400==0)
{
    printf("El anio es bisiesto");
}
else
{
    printf("El anio NO es bisiesto");
}

}
void alumno();
void alumno()
{
      int a,b,c,p;
      
      printf("Introduce calificacion:\n");
      scanf("%d",&a);
      printf("Introduce calificacion:\n");
      scanf("%d",&b);
      printf("Introduce calificacion:\n");
      scanf("%d",&c);
      
      p=(a+b+c)/3;
      if(p>=8)
      {
              printf("alumno aprobo");
              }
              else
              if (p<7)
              {
                      printf("alumno ira a final global");
                      }
                      }
void al(float y,float m,float div);
void al(float y,float m,float div)
{   
     printf("SR. ALVAÑIL INGRESE MEDIDA UNO DE LARGO:"); scanf("%f",&y);
     printf("SR. ALVAÑIL INGRESE MEDIDA DOS DE ALTO:"); scanf("%f",&m);
     div=y/m;
     printf("EL TAMAÑO DE LA BARDA ES DE %.2f ",div);
     }
void tablas(int f,int res,int x);
void tablas(int f,int res,int x)
 {    
    printf("INGRESA EL NUMERO DE LA TABLA");
    scanf("%d",&x);
    for(f=1;f<=10;f++)
{    
res=x*f;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",x,f,res);
                     }
                     }

void mat(int matriz[3][3],int d,int k);
void mat(int matriz[3][3],int d,int k)

{
    int matriz[3][3],d,k;
      for(d=0;d<3;d++)
     
                      for(k=0;k<3;k++)
                      {
    
    printf("\n INGRESA EL NUMERO DEL ACOMODO [%d][%d] DE LA MATRIZ \n",d+1,k+1);
    scanf("%d",&matriz[d][k]);
                           
             printf("\n");              
}
}

 
 printf("_________________valores de la matriz________________\n");
 
 printf("\t\tMATRIZ ACOMODADA DEACUERDO AL NUMERO ASIGNADO");
 
 for(d=0;d<3;d++)
 {
                 printf("\n");
                 
                 for(k=0;k<3;k++)
                 {
                 printf("%6d",matriz[d][k]);
                 }
                 }            
                 printf("\n"); 
                 printf("\n");  
                 }      
void ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1);

void  ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1)

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
void convertidor_temperatura(float cel,float fah,float primero,float despues);
void  convertidor_temperatura(float cel,float fah,float primero,float despues)
{
      printf("\nDIGITA LOS GRADOS FAHARENHEIT\n");
      scanf("%f",&fah);
      
      primero=fah-32;
despues=(primero*5)/9;
printf("\n%.2f Faharenheit es igual a %.2f grados celcius \n",fah,despues);

}           
void  ayuntamiento();
void  ayuntamiento()
{
      float direc_finan,direc_des_soc,direc_infor,mon_men, primer_porce, segundo_porce, tercer_porce;

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

void  tiendita();
void  tiendita()
{
      float ganan, prec,venta,artc;
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

void calculos();
void calculos()
{
       int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma, cua, divide; 
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
     divide=suma/10;
     printf("la division de la suma es %i\n",divide);
     }
     
void mi_reloj(int h,int min,int s); 
void mi_reloj(int h,int min,int s)
{
   for( h=1; h<=12; h++)
  {
        for( min=1; min<=30; min++)
  {
        for( s=1; s<=59; s++)
  {
        
printf("\n son las %d horas: con %d min : con %d seg\n",h,min,s);                                  
}
}
}             
}   


void ord();
void ord()
{
int z,b,cc,orden; 
    printf("\t INGRESA TRES NUMEROS: \t");
    
printf("PRIMER NUMERO:\n"); 
scanf("%d",&z); 
printf("SEGUNDO NUMERO:\n"); 
scanf("%d",&b); 
printf("TERCER NUMERO:\n"); 
scanf("%d",&cc); 
if(z>b) 
{
        orden=z; 
z=b; 
b=orden; 
} 
if(z>cc) 
{
        orden=z; 
z=cc; 
cc=orden; 
} 
if(b>cc) 
{
        orden=b; 
b=cc; 
cc=orden; 
} 
printf("\tLOS DATOS ORDENADOS SON\t:"); 
printf("\n1er:%d\n ",z); 
printf("\n2do:%d\n ",b); 
printf("\n3er:%d\n ",cc);
}



void fecha();
void fecha()
{
    int d,mes,anio;

    printf("teclea el dia:\n");
    scanf("%d",&d);
printf("teclea el mes:\n");
scanf("%d",&mes);
printf("teclea el anio:\n");
scanf("%d",&anio);

printf("Dia %d de ",d);

switch(mes)
{
           case 1: 
                printf("    Enero"); 
              break;

              case 2: 
                   printf("  Febrero"); 
              break;

              case 3: 
                   printf("  Marzo");
               break;

              case 4:
                    printf("  Abril");
               break;

              case 5:
                    printf("  Mayo");
               break;

              case 6:
                   printf("  Junio");
               break;

              case 7: 
                   printf("  Julio");
               break;

              case 8:
                   printf("  Agosto"); 
              break;

              case 9:
                   printf("  Septiembre"); 
              break;

              case 10:
                   printf("  Octubre"); 
              break;

              case 11:
                   printf("  Noviembre"); 
              break;

              case 12: 
                   printf("  Diciembre");
               break;    
               
                default: 
                         printf("  NO VALIDO");
                         

       }
       printf("  del anio  %d",anio);

}  



void escribe();
void escribe()
{
    int mes;
    printf("Teclea el mes:");
    scanf("%d",&mes);
    
    switch(mes)
    {
               case 1:
                    printf("31 dias");
                    break;
                              case 2:
                    printf("28 0 29 dias");
                    break;
                               case 3:
                    printf("31 dias");
                    break;
                               case 4:
                    printf("30 dias");
                    break;
                               case 5:
                    printf("31 dias");
                    break;
                               case 6:
                    printf("30 dias");
                    break;
                               case 7:
                    printf("31 dias");
                    break;
                               case 8:
                    printf("31 dias");
                    break;
                              case 9:
                    printf("30 dias");
                    break;
                               case 10:
                    printf("31 dias");
                    break;
                                   case 11:
                    printf("30 dias");
                    break;
                               case 12:
                    printf("31 dias");
                    break;
                    
                    default: printf("error");
                    
                    }
}

int sum(int nu1,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7,int nu8,int nu9,int nu10);
int sum(int nu1,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7,int nu8,int nu9,int nu10)
{
    int nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9,nu10;	
	int sum;
    int su,numero;
	printf("introduce los 10 numeros\n");
	 
	
printf("introduce el primer numero:");
scanf("%d",&nu1);
printf("introduce el segundo numero:");
scanf("%d",&nu2);
printf("introduce el tercer numero:");
scanf("%d",&nu3);
printf("introduce el cuarto numero:");
scanf("%d",&nu4);
printf("introduce el quinto numero:");
scanf("%d",&nu5);
printf("introduce el sexto numero:");
scanf("%d",&nu6);
printf("introduce el septimo numero:");
scanf("%d",&nu7);
printf("introduce el octavo numero:");
scanf("%d",&nu8);
printf("introduce el noveno numero:");
scanf("%d",&nu9);
printf("introduce el decimo numero:");
scanf("%d",&nu10);

	if(numero=nu2,nu4,nu6,nu8,nu10)
	{
	su=nu2+nu4+nu6+nu8+nu10;
	
	printf("\n\nLA SUMA DE LOS NUMEROS PARES ES:%d\n\n",su);
	printf("\n\t\tGRACIAS POR SU ATENCION "); 	
	}
}

      
      int estudiantes();
     int  estudiantes()
      {
          int nume,q,s,suman=0;
      float prome;
              printf("digita numero de estudiantes:");
      scanf("%d",&nume);
      
      for(q=1;q<=nume;q++)
      {
                                    printf("calificacion del estudiante %d es: \n",q);
                                    scanf("%d",&s);
                                    
                                      suman=suman+s;
                                      prome=suman/nume;
                                    }
                                    printf("\n");
                                    
                                    }   

int digito();
int digito()
{
    char n[100]; 

     int numer,contador=1;
    printf("Introduce un numero: ");
	scanf("%i",&numer);
while(numer/10 !=0)
{
    numer=numer/10;
    contador++;
}
printf("Digitos: %i",contador);
}


int rango();
int rango()

{
    int nun;


printf("ingresa el numero: ");
scanf("%d",&nun);


if(nun>=10&&nun<=20)
{
	printf ("el numero es: %d",nun);
	printf("\n");
	printf("el numero esta en el rango de 10 y 20");
	
}
else


printf("el numero no esta en el rango de 10 y 20 ");
}


int triangulos();
int triangulos()
{
    int v,g,o;
    printf ("Escribe el 1er lado:  ");
scanf("%i",&v);
printf ("\nEscribe el 2do lado:  ");
scanf("%i",&g);
printf ("\nEscribe el 3er lado:  ");
scanf("%i",&o);

printf("\n\n\n"); 

if ((v+g>o) && (v+o>g) && (g+o)>v)
{
if (v==g && v==o) 
printf ("\tEs un triangulo Equilatero"); 
else 
if (v==g || v==o || g==o) 
printf ("\tEs un triangulo Isosceles"); 
else 
printf("\tEs un triangulo Escaleno");
}
else
printf("Esos numeros no forman un triangulo");

}

int factorial();
int factorial()
{
    int w;
double fact=1;
    printf("Escriba el numero:  ");
scanf("%i",&w);

while(w>1) fact*=w--;

printf("Factorial =%lf",fact);

}

int num_may();
int num_may()
{
int e,mayor=0;
do
{
printf("\nDar Numero: ");
scanf("%i",&e);
if (mayor<e) mayor=e;
}
while (e!=0);

printf("\nEl mayor es: %i",mayor);
}



int factura();
int factura()

{
    int r;
double precio, total=0;
    do{
do{
printf("\nIntroduzca la cantidad vendida en piesas: ");
scanf("%d",&r);
if(r<0) printf("Cantidad no valida");
}
while(r<0); 
if (r>0){
printf("Introduzca el precio: ");
do{
scanf("%lf",&precio);
if(precio<0) printf("Precio no valido");
else total+=r*precio;
}while(precio<0);
}
}while(r!=0); 

printf("Total de la factura vendida = %.2f", total);

}

int invertidos();
int invertidos()
{
    int colum1=1, colum2=100;
    
while(colum1<=100)
{
printf("%d\t %d\n",colum1,colum2);
colum1++;
colum2--;
}
}

int tabla();
int tabla()
{
    int i, j, mult;


printf("LAS TABLAS DE 1 A 15 SON:\n");

for(i=1;i<=15;i++)
{
for(j=1;j<=15;j++)
{
mult=i*j;
printf(" \t%d*%d=%d\n",i,j,mult);
}
printf("\n\n");
}
}

int fibonaci();
int fibonaci()
{
    int f1=1,f2=1;
int n,cont;
double res=1; 
printf("\n\nCREAR UN PROGRAMA QUE LEA E INDIQUE SU VALOR EN LA SUCECION FIBONACI");
printf("\n\n\t\t**FIBONACI**\n\n\t\t");

do{
printf("Escriba el numero: ");
scanf("%d",&n);

if(n<=0) 

printf("Numero no valido\n");
}while(n<=0);

for(cont=3;cont<=n;cont++)
{
res=f1+f2;
f1=f2;
f2=res;
}

printf("\n\t\tResultado: %.0f",res);

}

int impares();
int impares()
{
    int bb; 

    
for(bb=1;bb<100;bb++)
{ 
if((bb%2)!=0) 
{
             printf("LOS IMPARES SON:");
             for(bb=1;bb<100;bb++)
{ 
printf("%d\t\n",bb);
}
}
}
}
int agend();
int agend()
{
  struct agenda
{
char nombre[25];
char telefono[10];
int edad;
};
struct agenda
amigos[N]={{"Daniel","235476980",18},{"Felipe","214312650",18},{"Laura","458765909",18}};
int ii;
for (ii=0; ii<N; ++ii)
{
printf("\n  AMIGO: %s\t TELEFONO CEL: %s\t EDAD %d",amigos[ii].nombre,
amigos[ii].telefono,amigos[ii].edad);
}
}


int progra();
int progra()
{
    int hola,nomb;
printf("\nESCRIBA UN PROGRAMA QUE TE IMPRIMA UN MENSAJE DE PRESENTACION\n TE PREGUNTE COMO TE LLAMAS Y TE SALUDE");
printf("\n\n\nHola usuario te ves bien hoy\n\n");
  
  printf("\n\n\ncual es tu nobre\n\n\n" );
  scanf("%d",&nomb);
  
  printf("\n\n\tGRACIAS SALUDOS \n\n");	
}

int dos();
int dos()
{
    int menor, numero1, numero2;
printf("\nESCRIBA UN PRORAMA QUE HALLE EL MENOR DE DOS NUM,EROS PEDIDOS AL USUARIO");
 
printf("\n\nDigita numero: ");
scanf("%d",&numero1);
printf("\n\nDigita segundo numero: ");
scanf("%d",&numero2);
if (numero1 < numero2) 
menor=numero1;
else 
menor=numero2;

printf("\nEl menor de entre el %d y el  %d es\t *** %d ***\n",numero1, numero2, menor);
}
   int repita();
    int repita()
    
    {
         int veces = 0, li = 0; 
    char caracter; 
        printf("Escribe un caracter: "); 
scanf("%c", &caracter);
 
printf("Escribe el numero de veces que se repetira: "); 
scanf("%d", &veces);
 
do{ 

printf("\n%c",caracter); 

li++; 

}
while(li<veces);
}



int potencias();
int potencias()
{
int nn;
puts(" numero\t     exp2\t     exp3\t     exp4");

puts("------\t    -----\t    -----\t    -----");

for (nn=0; nn<=10; ++nn)

printf("%2d\t    %5d\t    %5d\t    %5d\n",nn,nn*nn,nn*nn*nn,nn*nn*nn*nn);

}


int factor(int nro);
int factor(int nro) 
{ 
    int nr,fac,nro;
    
    printf("Introduce un numero:"); 
scanf("%d",&nr); 
 
if(nro<2) 
  return 1; 
else 
  return nro*factor(nro-1); 
printf("El factorial de %d es %d\n", nr, fac); 
}

int aski();
int aski()
{
  int ascii=0,col=1,ren=1;
  for(ascii=1;ascii<=256;ascii++) 
  {
  
  printf("%i:%c\t",ascii,ascii);
  if(ren==24) {
  ren=0; col+=12;
  }
  if(col>=80) {
  getch();
 
   ren=0; col=1;
  }
  ren++;
  }
}


int pro();
int pro()
{ 
    int cantidad, mone; 
float conmoneda, pagacon,precio; 
printf("\n\nPROGRAMA QUE DANDOLE EL IMPORTE EXACTO DE \nUNA CANTIDAD TE INDICA NUMERO DE MONEDAS QUE PODRIAS TENER");
printf("\n\nPrecio del Articulo: "); 
scanf("%f",&precio); 
printf("\n\nPaga con: "); 
scanf("%f",&pagacon); 
conmoneda=pagacon-precio; 
printf("VUELTO A ENTREGAR %4.2f",conmoneda); 
cantidad=conmoneda; 
mone=100*(conmoneda-cantidad); 


printf("\n\nMONEDAS "); 
printf("\nLa cantidad de monedas de %5d es %5d",1,cantidad/1); 


cantidad=mone; 

printf("\nLa cantidad de monedas de %5d es %5d",10,cantidad/10); 

cantidad=cantidad%10; 
printf("\nLa cantidad de monedas de %5d es %5d",5,cantidad/5); 
 
cantidad=cantidad%5; 
printf("\nSALDO EN CENTAVOS %5d",cantidad); 
getchar(); 
printf("\n\n"); 
 
 }
 
int marco();
int marco()
{
     int i;
    
printf("***************************************\n");

for(i=0;i<4;i++)
{
                printf("*                                     *\n");
                }
                 printf("*            BIENVENIDOS  CAMARADAS            *\n");
                
                for(i=0;i<4;i++)
{
                printf("*                                     *\n");
                }
                
                printf("***************************************\n");
}
 
 int circu();
int circu()
{
	int r=0;
	float esf,circ,pi=3.141592654;
	while(r<=20)
	{
	circ=pi*pow(r,2);
	esf=(4*pi)*pow(r,2);
	printf("\n\nRadio= %d \tArea del Circulo= %f \tArea de la Esfera= %f",r,circ,esf);
	r+=2;
	}
}

void LimpiaPantalla(int n);
void LimpiaPantalla(int n)
{
while (n-- >0) putchar('\n');
}

void LimpiaPantalla(int n);

int copo();
int copo()

{
int numlin=30;
LimpiaPantalla(numlin);
getch();

}

void LimpiaPantalla(int n)

{

while (n-- >0) putchar('\n');

}



int ve();
int ve()
	
{
    int c,max=0,min,suma=0;
float prr;
int vector[15];
	printf ("\n\n MUESTRA UN PROGRAMA QUE INCIALIZA UN VECTOR\n DE ENTEROS (15)CALCULE E IMPRIMA SU SUMA, MEDIA, MAXIMO,MINIMO");
	

	for(c=0;c<15;c++)
	{
		printf("\n\n\n Escriba el dato %d para el vector:\n\n ",c);
		scanf("%d",&vector[c]);
		suma+=vector[c];
	}
	
	for(c=0; c<15; c++) 
	{
		if(vector[c]>max)
		{
			max=vector[c];
		}
	}
	
	for(c=0; c<15; c++)
	{
		if(vector[c]<min)
		{
			min=vector[c];
		}
	}
	
	for(c=0;c<15;c++)

	{
		printf(" %d",vector[c]);
	
    }
	prr=suma/15;
	printf("\n\nLa suma es= %d \n\nLa media es= %.2f\n\nEl maximo es= %d \n\nEl mimimo es= %d",suma,prr,max,min);
}


int cen();
int cen()
{
int opcs,tp;
int c,sn=0,ss=0,sc=0;	
	printf("\t 27 \n  Un jefe de casilla desea determinar cuántas personas de cada una de las\n secciones que componen su zona asisten el día de las votaciones. Las\n secciones son: norte, sur y centro.\n También desea determinar cuál es la sección con mayor número de\nvotantes.\n\n "); 
	printf("\n Cantidad de personas en  su zona? ");
	scanf("%d",&tp);
	

	for(c=0;c<tp;c++)
	{
	printf("\n De que seccion eres?\n\n1)Norte.\n\n2)Sur.\n\n3)Centro.\n\nSu seccion es: ");
	scanf("%d",&opcs);
	if(opcs==1)
	sn++;
	if(opcs==2)
	ss++;
	if(opcs==3)
	sc++;
	}
	
	if(sn>ss && sn>sc)
	{
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Norte.");
	}
	if(ss>sn && ss>sc)
	{
	
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Sur.");
	}
	if(sc>ss && sc>sn)
	{
	
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Centro.");
	}
}

int censa();
int censa()
{
  
  int ttp;
	printf("total de personas encuestadas: ");
	scanf("%d",&ttp);
	int s, pri, sec, cte, pro, pos;

	printf("total de personas con estudios de primaria: ");
	scanf("%d",&pri);
	
	system("cls");
	printf("total de personas con estudios de secundaria: ");
	scanf("%d",&sec);
	

	printf("total de personas con estudios de carrera tecnica: ");
	scanf("%d",&cte);
	
	system("cls");
	printf("total de personas con estudios profesionales: ");
	scanf("%d",&pro);
	
	system("cls");
	printf("total de personas con estudios de posgrado: ");
	scanf("%d",&pos);
	
	s=pri+sec+cte+pro+pos;
	
	if(s==ttp)
	{
		int ppri, psec, pcte, ppro, ppos;
	ppri=(pri*100)/ttp; 
	psec=(sec*100)/ttp;
	pcte=(cte*100)/ttp;
	ppro=(pro*100)/ttp;
	ppos=(pos*100)/ttp;
	
	system("cls");
	printf("Los porcentajes son:\n");
	printf("\n\nEstudios de primaria= %d",ppri);
	printf("\n\nEstudios de secundaria= %d",psec);
	printf("\n\nEstudios de carrera tecnica= %d",pcte);
	printf("\n\nEstudios profesionales= %d",ppro);
	printf("\n\nEstudios de posgrado= %d",ppos);
	}
}


 int un();
 int un()
{
     int numero;
printf("EL PROGRAMA VERIFICA QUE DADO UN\n NUMERO TENGA DOS DIGITOS, SI SON PARES Y PROMEDIA");     
 printf("\n\nInserte num. de dos digitos pares: ");
 scanf("%d",&numero);
 int aux=numero;
 if(numero<10 && numero>9)
 {
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  if(d1%2==0 && d2%2==0)
   printf("\n\nEl promedio de los digitos de %d es: %d",aux,(d1+d2)/2);
 }
 else
  printf("\aERROR: el numero no tiene dos digitos");
 
}

    int ser();
    int ser()
    {
        int serie=1;
    bool sw=true;
	printf("\n\n GENERAR LA SERIE: 1, 5, 3, 7, 5, 9, 7, ..., 23 \n \n");
   
    do
    {
      printf("%d, ",serie);
      if (sw) serie+=4;
      else serie-=2;
      sw=!sw;
    } while (serie<=23);
}
int inver();
int inver()
{
	
	int c,n,a,d,f,mn;
	 printf ("DADO EL TAMAÑO DEL VECTOR T DE TAMAÑO N. SI EL VECTOR ES PAR\n INVERTIR LO ELEMENTOS DE LA MITAD DE LOS ELEMENTOS   \nEjemplo: v=[1][2][3][4][5][6] \n v(invertido)=[3][2][1][6][5][4]\n"); 
	printf("\n\n\n Dimencion de tu vector: \n");
	scanf("%d",&n);
	int aux[n];
	int vector[n];
	a=n;
	for(c=0;c<n;c++)
	{
		printf("Ingresa el dato %d del vector: ",c);
		scanf("%d",&vector[c]);
	}
	
	if(n%2==0)
	{
		mn=n/2;
		for(a=0,d=mn-1;a<mn,d>=0;d--,a++)
		{
			aux[a]=vector[d];
		}
		
		for(a=mn,d=n-1;a<n,d>=mn;d--,a++)
		{
			aux[a]=vector[d];
		}
		
		printf("\n\nVector Nomal.\n\n");
		
		for(c=0;c<n;c++)
		{
			printf(" %d",vector[c]);
		}
		
		printf("\n\nVector Invertido\n\n");
		
		for(c=0;c<n;c++)
		{		
			printf(" %d",aux[c]);
		}
	}
	else
	{
		printf("\n\nVector Nomal.\n\n");
		for(c=0;c<n;c++)
		{
			printf(" %d",vector[c]);
		}
	}
}


int genera();
int genera()

{
	
	int i,j;
	int mat[3][4]={{01,02,03,04},{8,07,06,05},{9,10,11,12}};
	
	for(i=0;i<=2;i++)
    {
    	for(j=0;j<=3;j++)
    {
    
   printf("\t%d",mat[i][j]);
    
	}	
	printf("\n\n");
	printf("\n\n");
    }  
}
void  pro();
void  pro()
{
		int i,j,sum=0,prom=0,k,cont,dp;
		int num [4][4];
		int vec[4];
	
			for(j=0;j<=3;j++){
				for(i=0;i<=3;i++){
					printf("INGRESA LA %d,%d POSICION DE LA MATRIZ \t\n",j,i);
						scanf("%d",&num[j][i]);
						
				}
				printf("\n");
				
			}
			printf("\n\t***********Matriz********\n\t");
			for(j=0;j<=3;j++){	
				for(i=0;i<=3;i++){	
					printf("\t%d",num[j][i]);	
				}
				printf("\n");
			}
			
			printf("\n\t*******Diagonal Principal********\n");
            for(j=0;j<4;j++){ 
				for(i=0;i<4;i++){ 
					 
						if(j==i){ 
                			vec[k]=num[j][i];
							printf("\n\t\t\t%d",vec[k]);	 
						}	
				}
            }
}

int diag();
int diag()
{ 
printf("\n\nDADA UNA MATRIZ CUADRADA INVETIR SU DIAGONAL PRINCIPAL");
int m[4][4];

int i=0, j=0; 


for(i=0;i<j;i++)
{
	for(j=0;j<i;j++)
	{
		printf("\n\nIngresa tu matriz");
	}
	printf("\n\n");
} 


for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("\n\ntus posiciones de tu matriz son [%d][%d]\n",i,j);
		scanf("%d",&m[i][j]);
	}
	printf("\n");
} 
printf("\n");
printf("\ntu matriz es: \n");
printf("\n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("\t%d",m[i][j]);
	}
	printf("\n\n");
} 

printf("\n\n");
printf("\ntu diagonal inversa es: \n");
printf("\n");
for (i=4;i>=0;i--) 
{ 
for (j=4;j>=0;j--) 
{ 
if (j+i==4-1) 

{ 
 printf ("\t%d",m[i][j]);
 printf("\n");
} 
} 
} 
}
int comu();
int comu()
{
	
	
	int FILA,COLA,FILB,COLB,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz A  ");
	scanf("%d",&FILA);
		printf("Cuantas columnas para la matriz A  ");
	scanf("%d",&COLA);
	printf("Cuantas filas para la matriz B  ");
	scanf("%d",&FILB);

	printf("Cuantas columnas para la matriz B  ");
	scanf("%d",&COLB);
	int matrizA[FILA][COLA];
	int matrizB[FILB][COLB];
	int vector[FILA*COLA];
	
	for(f=0;f<FILA;f++)
	{
		for(c=0;c<COLA;c++)
		{
		
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ A: ",f,c);
			scanf("%d",&matrizA[f][c]);
		}
	}
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
		
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ B: ",f,c);
			scanf("%d",&matrizB[f][c]);
		}
	}
	int n=0;
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
			if(matrizA[f][c]==matrizB[f][c])
			{
				vector[n]=matrizA[f][c];
				n++;
			}
		}
	}
	
	printf("\n\n\tMATRIZ A.\n\n");
	for(f=0;f<FILA;f++)
	{
		for(c=0;c<COLA;c++)
		{
			printf(" \t%d ",matrizA[f][c]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\tMATRIZ B.\n\n");
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
			printf("\t%d ",matrizB[f][c]);
		}
		printf("\n\n");
	}
	printf("\n\nLos elementos comunes entre ambas matrices son: \n\n");
	for(f=0;f<n;f++)
	{
		printf(" %d",vector[f]);
	}
}
int igua();
int igua()
{
	
	int FIL,COL,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz= ");
	scanf("%d",&FIL);
	printf("Cuantas columnas para la matriz= ");
	scanf("%d",&COL);
	int matriz[FIL][COL];
	int vector[COL];
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
		
			printf("INGRESE NUMERO %d , %d PARA MATRIZ: ",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	
	for(c=0;c<COL;c++)
	{
		printf("Ingrese los datos para su vector: ");
		scanf("%d",&vector[c]);
	}
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			if(matriz[f][c]==vector[c])
			{
				pc=c;
				cc++;
			}
		}
	}
	system("cls");
	printf("\n\nMatriz\n\n");
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf(" %d",matriz[f][c]);
			
		}
		printf("\n\n");
	}
	printf("\n\nVector\n\n");
	for(c=0;c<COL;c++)
	{
		printf("\n\t %d",vector[c]);
	}
	
	if(cc==COL)
	{
		printf("\n\nLa columna %d de matriz es igual al vector.",pc);
	}
	else
	{
		printf("\n\nNinguna columna es igual al vector.");
	}
}
int main() 
{
reiniciar: 
int opci,px,sr; 
printf("\t\t\t\t*****MENU PROYECTO FINAL******\n");
printf("Escoje el avance:"); 
printf("\n\t1)Primer avance\n\t2)Segundo avance\n\t3)Tercer avance\n\t\n");
printf("EL AVANCE QUE ESCOJISTE ES:");
fflush(stdin); 
scanf("%i",&opci); 

switch(opci) 
{
//int main() 
//{reiniciar: 
//int op,p,r; 

//printf("seleccione el avance:"); 
//fflush(stdin); 
//scanf("%i",&op); 

//switch(op) 
//{ //
case 1: 
printf("Avance 1");
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
                          printf("12.calcula calificaciones de un alumno si va a final global o es aprobado");
printf("Selecciona el programa deseado:");
scanf("%d",&px);
system ("cls");
fflush(stdin); 
switch(px)
{
case 1:
pesodolar();
getch();
break; 
case 2: 
masa();
getch();
break;
case 3: 
promsuma();
getch();
break;
case 4: 
numpuledad();
getch();
break;
case 5: 
SALARIOAUMENTO();
getch();
break;
case 6: 
montomensual();
getch();
break;
case 7: 
numerodesuma();
getch();
break;
case 8: 
tiempoextra();
getch();
break;
case 9: 
TecleaNumero();
getch();
break;
case 10: 
cuerpo();
getch();
break;
case 11: 
bisiesto();
getch();
break;
case 12: 
alumno();
getch();
break;
}
printf("Selecciona una opcion\n\t 1-Reiniciar\n\t 2-Salir\n\t");
scanf("%d",&sr);
system("cls");
if(sr==1)
{goto reiniciar;}


case 2:
 printf("Avance 2:");
 printf("1.Ayuda a un alvañil");
                 printf("2.Tablas de multiplicar");
                  printf("3.Llenado e impresion de una matrizde 3x3");
                   printf("4.AYUDA A UN ALUMNO A RESOLVER EL AREA DE UN TRAPECIO");
                    printf("5.Conversiones de Faharenheit a celsius");
                     printf("6.Finanza en el H.Ayuntamiento de Toluca");
                      printf("7.Compra en la tienda");
                       printf("8.La profesora de matematicas pide suma,elevacion al cuadrado y la division de 10 numeros");
                        printf("9.Reloj de una fabrica y su hora de salida del 3 turno");
                         printf("10.LOS DATOS ORDENADOS UE SEAN 3 NUMEROS");
printf("Elige una de las opciones:");
scanf("%d",&px);
system ("cls");
fflush(stdin); 
switch(px)
{
case 1:
al(float y,float m,float div);
break; 
case 2: 
tablas(int f,int res,int x);
getch();
break;
case 3: 
mat(int matriz[3][3],int d,int k);
getch();
break;
case 4: 
ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1);
getch();
break;
case 5: 
convertidor_temperatura(float cel,float fah,float primero,float despues);
getch();
break;
case 6: 
ayuntamiento();
getch();
break;
case 7: 
tiendita();
getch();
break;
case 8: 
calculos();
getch();
break;
case 9: 
mi_reloj(int h,int min,int s);
getch();
break;
case 10: 
ord();
getch();
break;
}
printf("Selecciona opcion\n\t 1-Reiniciar\n\t 2-salir\n\t");
scanf("%d",&sr);
system("cls");
if(sr==1)
{goto reiniciar;}
case 3:
printf("Avance 3: \n\t 1-Fecha\n\t 2-Cuantos dias tiene un mes \n\t 3-Suma de numeros pares \n\t 4-Promedio de 20 alumnos\n\t 5-Numero de digitos\n\t 6-Validar del 10 a 20 \n\t 7-Tipos de triangulo \n\t 8-Factorial \n\t 9-Mayor \n\t 10-Factura \n\t 11-Serie del 1 al 100 \n\t 12-Tabla de Multiplicar del 1 al 15 \n\t 13-Fiboncci \n\t 14-Impares 1-100 \n\t 15-Agenda de amigos \n\t 16-Hola \n\t 17-Menor \n\t 18-Caracter\n\t 19- Exponente \n\t 20-Factorial \n\t 21-ASCII \n\t 22-Monedas \n\t 23-Bordes \n\t 24-Area del circulo y esfera \n\t 25-Limpiar pantalla \n\t 26-vector entero \n\t 27-Casilla \n\t 28-Rango de estudios \n\t 29-promedio de digitos \n\t 30-serie \n\t 31-matriz invertida \n\t 32- Matriz leida \n\t 33- Matriz A y B \n\t 34-Diagonal Principal \n\t 35-Matriz R y S \n\t 36- Matriz de M y N \n");
printf("Elige una de las opciones:");
scanf("%d",&px);
system ("cls");
fflush(stdin); 
switch(px)
{
case 1:
fecha();
getch();
break;
case 2:
escribe();
getch();
break;
case 3:
sum(int nu1,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7,int nu8,int nu9,int nu10);
getch();
break;
case 4:
estudiantes();
getch();
break;
case 5:
digito();
getch();
break;
case 6:
rango();
getch();
break;
case 7:
triangulos();
getch();
break;
case 8:
factorial();
getch();
break;
case 9:
num_may();
getch();
break;
case 10:
factura();
getch();
break;
case 11:
invertidos();
getch();
break;
case 12:
tabla();
getch();
break;
case 13:
fibonaci();
getch();
break;
case 14:
impares();
getch();
break;
case 15:
agend();
getch();
break;
case 16:
progra();
getch();
break;
case 17:
dos();
getch();
break;
case 18:
repita();
getch();
break;
case 19:
potencias();
getch();
break;
case 20:
factor(nro);
getch();
break;
case 21:
aski();
getch();
break;
case 22:
pro();
getch();
break;
case 23:
marco();
getch();
break;
case 24:
circu();
getch();
break;
case 25:
copo();
getch();
case 26:
ve();
getch();
break;
case 27:
cen();
getch();
break;
case 28:
censa();
getch();
break;
case 29:
un();
getch();
break;
case 30:
ser();
getch();
break;
case 31:
inver();
getch();
break;
case 32:
genera();
getch();
break;
case 33:
pro();
getch();
break;
case 34:
diag();
getch();
break;
case 35:
comu();
getch();
break;
case 36:
igua();
getch();
break;
}
printf("\nSelecciona opcion\n\t 1-Reiniciar\n\t 2-salir\n\t ");
scanf("%d",&sr);
system("cls");
if(sr==1)
{goto reiniciar;}


}}
