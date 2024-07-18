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
void promedio ();
void promedio ()
{
  int i,c;
    float p,sum=0;
    for(i=1;i<=3;i++)
    {
                    printf("\n ingresa la calif %d \t",i);
                    scanf("%d",&c);
                    sum=sum+c;
                    }
                    p=sum/3;
                    printf("\n\t el promedio es %.2f \n\t",p);
                    if(p>=7)
                    {
                    printf("\n\t Aprobaste:) \n\t");
                    }
                    else
                    {
                    printf("\n\t No aprobado :() \n\t ");
                    }
                    return;
                    }
void total ();
void total ()
{
int i,c,p,sum=0;
    for(i=1;i<=3;i++)
    {
                    printf("\n ingresa num %d \t",i);
                    scanf("%d",&c);
                    sum=sum+c;
                    }
                    p=sum/3;
                    printf("\n\t el promedio es %d \n\t",p);
                    printf("\n\t la suma de los numeros es %d \n\t",sum);
                    }
void program ();
void program ()
{  
int numero,mayor=0,menor,i; 
for (i=1;i<=4;i=i++)
{ 
printf("Ingrese el %i numero: ",i++); 
scanf("%i",&numero); 
if(numero>mayor) 
mayor=numero; 
if(numero<menor) 
menor=numero;
} 
printf("El mayor es: %i\n",mayor); 
printf("El menor es: %i\n",menor); 
return;
}
void numeros();
void numeros()
{  
int num1,num2,num3,suma=0;
printf("introduzca numero 1: ");
scanf("%d",&num1);
printf("introduzca numero 2: ");
scanf("%d",&num2);
printf("introduzca numero 3: ");
scanf("%d",&num3);
suma=(num1+num2+num3);
printf("La suma de los tres numeros es:%d,%d,%d\n",num1,num2,num3);
printf("El resultado es: %d",suma);
return;
}
void obrero(void);
void obrero (void)
{
int salario;
float porciento,total;
printf("ingresa el salario del obrero:\n\t");
scanf("%d",&salario);
porciento=salario*.25;
     total=salario+porciento;
     printf("El salario final del obrero:\n\t %.2f",total);
    return;
}
void hospital();
void hospital()
{
     int presupuestal;
     float porc1,porc2,porc3,totalgine,totalpedia,totaltraumo;
     printf("ingresa el monto presupuestal anual :\n\t");
     scanf("%d",& presupuestal);
     porc1=presupuestal*.40;
     printf("\n\t El monto presupuestal de ginecologia es :\n\t %2.f",porc1);
     porc2=presupuestal*.30;
     printf("\n\t El monto presupuestal de pediatria es :\n\t %2.f",porc2);
     porc3=presupuestal*.30;
     printf("\n\t El monto presupuestal de traumatologia es :\n\t %2.f",porc3);
     return;
     }
void tres();
void tres()
{  
int num1,num2,num3,suma=0;
printf("introduzca numero 1: ");
scanf("%d",&num1);
printf("introduzca numero 2: ");
scanf("%d",&num2);
printf("introduzca numero 3: ");
scanf("%d",&num3);
suma=(num1+num2+num3);
printf("La suma de los tres numeros es:%d,%d,%d\n",num1,num2,num3);
printf("El resultado es: %d",suma);
return;
}
void semanal ();
void semanal ()
{
          int salario,hora,horaextra,salariott;
     
      printf("ingresa el numero de horas trabajadas por el obrero:");
      scanf("%d",&hora);
      if(hora<=40)
       {
       salario=hora*20;
       printf("\n\t Total del salario semanal del obrero es: \n\t %.d",salario);
       }
       while(hora>40)
    salariott=hora*30;
    {
    printf("\n\t Total del salario semanal del obrero es: \n\t %.d",salariott);
      }
      return;
      }
      void interes ();
void interes ()
{
    
	float p_int,cap,interes,capf;
	printf("introdusca su capital inicial:");
	scanf("%g",&cap);
	printf("cual es el porcentaje de interes:");
	scanf("%g",&p_int);
	interes=cap*p_int;
	if(interes>7000);
	capf=cap+interes;
	printf("el capital final es:%.2f\n",capf);
	return;
}
void bisiesto ();
void bisiesto ()
{
int num1;
printf("Introduce el año: ");
scanf("%d",&num1);
if((num1%4==0) && !(num1%100==0))
{
    printf("El año es bisiesto");
}
else if (num1%400==0)
{
    printf("El año es bisiesto");
}
else
{
    printf("El año NO es bisiesto");
}
return;
}



 void factorial ();
 void factorial ()
 
{
    int num,fact=1;
    cout << "FACTORIAL" << endl;
    cout << "Introduce un numero: "; cin >> num;
    for(int i=2; i<=num; i++)
    {
        fact = fact * i;
    }
    cout << "Su factorial es: " << fact;
    cin.get();cin.get();
    return ;
    }
void primo();
void primo()
{
  int num,c,res,nc=0;
  cout<<"Introduce un numero: "; cin>>num;
  for(c=1;c<=num;c++)
  {
    res=num%c;
    if(res==0)
      nc++;
    if(nc>2)
      break;
  }
  if(nc==2)
    cout<<"Es primo";
  else
    cout<<"No es primo";
  cin.get();cin.get();
}
void chino();
void chino()
{
     
int op;
char nom [50];
puts(" \nTeclea tu nombre ");
gets(nom);
printf(" \nTeclea tu año de nacimiento para saber tu Horoscopo Chino ");
scanf("%i",& op);
switch (op%12)
{
case 0:printf("Tu Horoscopo chino corresponde al Mono");
break;
case 1:printf("Tu Horoscopo chino corresponde al Gallo");
break;
case 2:printf("Tu Horoscopo chino corresponde al Perro ");
break;
case 3:printf("Tu Horoscopo chino corresponde al Cerdo ");
break;
case 4:printf("Tu Horoscopo chino corresponde a la Rata ");
break;
case 5:printf("Tu Horoscopo chino corresponde al Buey ");
break;
case 6:printf("Tu Horoscopo chino corresponde al Tigre ");
break;
case 7:printf("Tu Horoscopo chino corresponde al Conejo ");
break;
case 8:printf("Tu Horoscopo chino corresponde al Dragon ");
break;
case 9:printf("Tu Horoscopo chino corresponde a la Serpiente ");
break;
case 10:printf("Tu Horoscopo chino corresponde al Caballo ");
break;
case 11:printf("Tu Horoscopo chino corresponde a La Cabra ");
break;
default: printf("Esa opcion es incorrecta");
}
return;
}
void triangulo ();
 void triangulo ()
 {
 int b,h,a;
 printf(":::::Este programa servira para sacar el area de un triangulo:::::\t\n ");
 printf("Ingresa base del triangulo:");
 scanf("%d",&b);
 printf("Ingresa altura del triangulo:");
 scanf("%d",&h);
 a=(b*h)/2;
 printf("El area del triangulo es:%d",a);
 return;
}

void mayor ();
 void mayor ()
 {
      int num1, num2;
      printf("Ingresa el primer numero:");
      scanf("%d",&num1);
      printf("Ingresa el segundo numero:");
      scanf("%d",&num2);
      if(num1>num2)
      printf("El numero mayor es:%d",num1);
      else if (num1<num2)
      printf("El numero mayor es:%d",num2);
      else
      printf("Los numeros son iguales");
      return;
      }
       void menor ();
 void menor ()
 {
      int num1, num2;
      printf("Ingresa el primer numero:");
      scanf("%d",&num1);
      printf("Ingresa el segundo numero:");
      scanf("%d",&num2);
      if(num1<num2)
      printf("El numero menor es:%d",num1);
      else if (num1>num2)
      printf("El numero menor es:%d",num2);
      else
      printf("Los numeros son iguales");
      return;
      }
void paga(void);
void paga (void)
{
     system ("color 5f"); 
     int salario;
     float porciento,total;
     printf("ingresa el salario del obrero:\n\t");
     scanf("%d",&salario);
     porciento=salario*.25;
     total=salario+porciento;
     printf("El salario final del obrero:\n\t %.2f",total);
    return;
}
void dolar ();
void dolar()
{
     float peso,equi,dolar;
     printf("Ingresa la cantidad a pesos que quieres convertir a dolares:\n\t");
     scanf("%f",&peso);
     printf ("Ingresa la equivalencia del dolar:\n\t");
     scanf("%f",&equi);
     dolar=(peso/equi);
     printf ("La unidad de pesos que ingresaste son: %f dolares",dolar);
    return;
     } 
void multiplicar ();
void multiplicar ()
{
    int numero, i, producto;
    printf("\n\t\ ingresa un numero \n\t");
    scanf("%d",&numero);
    for(i=1;i<=10;i++)
    {
                      producto=i*numero;
                      printf("%d * %d=%d\n",numero,i,producto);
                      }
                     return;
                      }
void caloria ();
void caloria ()
{

int minutos,minutos1,dormir,sentada;
printf("Cuantos minutos durmio la persona:\n\t");
scanf("%d",&minutos);
dormir=(minutos*1.08);
printf("Las calorias que consumio fueron: %d \n\t",dormir);
printf("Cuantos minutos permanecio sentada la persona:\n\t");
scanf("%d",&minutos1);
sentada=(minutos1*1.66);
printf("Las calorias que consumio fueron: %d calorias\n\t",sentada); 
return;
}

void fecha();
void fecha()
{
int dia, mes, anio;
char resp;

cout<<"Teclea el dia"<<endl;
cin>>dia;
cout<<"Teclea el mes"<<endl;
cin>>mes;
cout<<"Teclea el ano"<<endl;
cin>>anio;
cout<<dia<<" de ";
switch (mes)
{
case 1: cout<<"Enero"; break;
case 2: cout<<"Febrero"; break;
case 3: cout<<"Marzo"; break;
case 4: cout<<"Abril"; break;
case 5: cout<<"Mayo"; break;
case 6: cout<<"Junio"; break;
case 7: cout<<"Julio"; break;
case 8: cout<<"Agosto"; break;
case 9: cout<<"Septiembre"; break;
case 10: cout<<"Octubre"; break;
case 11: cout<<"Noviembre"; break;
case 12: cout<<"Diciembre"; break;
default: cout<<"ERROR";
};
cout<<" de "<<anio<<endl<<endl;

}
void mes();
void mes()
{
	int mes;
cout<<"Teclea el mes"<<endl;
cin>>mes;
switch (mes)
{
case 1:
case 3:
case 5:
case 7: 
case 8:
case 10:
case 12: cout<<"31 dias"<<endl; 
break; 

case 2: cout<<"28 o 29 dias"<<endl;
break;
case 4: 
case 6: 
case 9: 
case 11: cout<<"30 dias"<<endl; break;
default: cout<<"ERROR";
};
return;
}
void suma_pares();
void suma_pares()
{
    int suma = 0, numero;
   
    for (numero = 2; numero <= 10; numero +=2 )
       suma= numero;
   
    printf("Suma es: %d \n", suma);
    
    return;
    }

void veinte();
void veinte()
{
    int total, contador, calif;
double promedio;

total = 0;
contador = 1;
while (contador <= 20 )
{
cout<<" Dame la calificacion "<<endl;
cin >> calif;
total = total + calif;
contador ++;
}
promedio = total / 20.0;
cout<<"El promedio es "<< promedio<<endl;
return ;
}

void digito();
void digito(){
long num;
int cant = 0, x;
cout<<"Teclea un numero ";
cin>>num;
x = num; 
do
{
x = x / 10;
cant++;
} while (x > 0);
cout<<"El numero tiene "<<cant <<" digitos"<<endl;
return ;
}
void validar();
void validar()
{
int num;
do 
{
cout << "Dame el numero " << endl;
cin >> num;
}
while ( (num <10) || (num > 20) );
cout << "Numero dentro de rango" << endl;
return ;
}
void tipo_triangulo();
void tipo_triangulo()
{
int x,y,z;

printf (" Escribe el primer lado");
scanf("%i",&x);
printf ("\n Escribe el segundo lado");
scanf("%i",&y);
printf ("\n Escribe el tercer lado");
scanf("%i",&z);

printf("\n\n\n"); 
if ((x+y>z) && (x+z>y) && (y+z)>x){
if (x==y && x==z) printf ("Equilatero"); 
else if (x==y || x==z || y==z) printf ("Isosceles"); 
else printf("Escaleno");
}
else
printf("Esos numeros no forman un triángulo");
return;
}
void fact();
void fact()
{
int x;
double fact=1;
printf("Escriba el numero: ");
scanf("%i",&x);

while(x>1) fact*=x--;

printf("Factorial =%lf",fact);
return;
}

void myr();
void myr()
{
int i,mayor=0;

do{
printf("\nNumero: ");
scanf("%i",&i);
if (mayor<i) mayor=i;
}while (i!=0);

printf("\nEl mayor es %i",mayor);
return;
}
void cant ();
void cant()
{
int n;
double precio, total=0;

do{
do{
printf("\nIntroduzca la cantidad vendida: ");
scanf("%d",&n);
if(n<0) printf("Cantidad no valida");
}while(n<0); 
if (n>0){
printf("Introduzca el precio: ");
do{
scanf("%lf",&precio);
if(precio<0) printf("Precio no valido");
else total+=n*precio;
}while(precio<0);
}
}while(n!=0); 

printf("Total vendido = %.2f", total);
return;
}

void uno_cien();
void uno_cien()
{
int col1=1, col2=100;

while(col1<=100){
printf("%d\t\%d\n",col1,col2);
col1++;
col2--;
}
return;
}
void quince ();
void quince ()
{
const int TAMANIO=15;
int i,j;

for(i=1;i<=15;i++){
for(j=1;j<=15;j++){
printf("%4d",i*j);
}
printf("\n");
}
return;
}
void Fibonacci();
void Fibonacci()
{
int f1=1,f2=1;
int n,cont;
double res=1; 

do{
printf("Escriba el numero: ");
scanf("%d",&n);
if(n<=0) printf("Numero no valido\n");
}while(n<=0);

for(cont=3;cont<=n;cont++){
res=f1+f2;
f1=f2;
f2=res;
}

printf("Resultado: %.0f",res);
return;
}
void im_par();
void im_par()
{
        int impares,impar=0;

        for(impares=0;impares<100;impares++)
        {
                if(impares%2!=0)
                {
                printf("\n%d",impares);
                impar = impar + 1;
                }
        }
        printf("\n%d Numeros impares Hay desde el 1 al 100",impar);
        return;
}
void agenda();
void agenda()
{

struct agenda

{

char nombre[25];

char telefono[10];

int edad;

};

struct agenda

amigos[N]={{"EVELIN","913472314",19},{"DIANA","915547623",30},{"IVONNE","917456778",21}};

int i;

for (i=0; i<N; ++i)

{

printf("\nAmigo %s\t telefono %s\t edad %d",amigos[i].nombre,amigos[i].telefono,amigos[i].edad);

}

printf("\n");
return;
}
void hola();
void hola()
{

char nombre[20];

printf("Hola, me llamo Computadora, y tu?\n");

scanf("%s",&nombre[0]);

printf("hola¡ mucho gusto en conoserte %s\n",nombre);

}
void num_menor();
void num_menor()
{

int menor, numero1, numero2;

printf("\n Escriba el primer numero: ");

scanf("%d",&numero1);

printf("\n Escriba el segundo numero: ");

scanf("%d",&numero2);

if (numero1 < numero2) menor=numero1;

else menor=numero2;


printf("\nEl menor de %d y %d es %d\n",numero1, numero2, menor);
return;
}
void carac();
void carac()
{

char ch;

int num_rep;

printf("\nEscriba el caracter a repetir: ");

scanf("%c",&ch);

printf("\nEscriba el numero de repeticiones: ");

scanf("%d",&num_rep);

while (num_rep>0)

{

printf("%c",ch);

--num_rep;

}

printf("\n");
return;
}
void exp();
void exp()
{

int n;

puts(" numero\t exp2\t exp3\t exp4");

puts("------\t-----\t-----\t-----");

for (n=0; n<=10; ++n)

printf("%2d\t%5d\t%5d\t%5d\n",n,n*n,n*n*n,n*n*n*n);
return;
}
void asci();
void asci()
{

int k, kk, i;

for (k=1; k<FIL; k++)

{

if (k==1) printf ("\t\t\t\t TABLA ASCII\n\n");

else printf("\n");

for (i=1; i<=COL; i++)

{

kk=INI+(k-1)*COL+i;

if (kk>255) break;

printf(" %c",kk);

}
printf("\n");
for (i=1; i<=COL; i++)
{
kk=INI+(k-1)*COL+i;
if (kk>255) return;
if (kk<100) printf(" %d",kk);
}
}
return;
}
void mnd();
void mnd()
{

int monedas[LIM]= {500, 200, 100, 50, 25, 10, 5, 1};

int num, cantidad, numonedas;

printf ("Introduzca el importe exacto: ");

scanf ("%d", &cantidad);

printf ("El cambio optimo es el siguiente: \n");

for (num=0; num<LIM; num++)

{

numonedas=cantidad/monedas[num];

if (numonedas != 0) printf ("%d de %d.\n", numonedas, monedas[num]);

cantidad= cantidad % monedas[num];

}
return;
}
void esfera();
void esfera()
{
double AreaCirculo(double radio);
double AreaEsfera(double radio);
double radio;
puts("\n\t*** Tabla de Areas ***\n");
puts("\tRadio\tCirculo\tEsfera");
puts("\t-----\t-------\t------");
for (radio=0.0;
radio <= (double) MAX_RADIO; radio +=0.2)
printf("\t%6.2lf\t%6.3lf\t%6.3lf\n",radio,AreaCirculo(radio),AreaEsfera(radio));
}
double AreaCirculo(double radio)
{
double area;
area = PI * (radio * radio);
return(area);
}
double
AreaEsfera(double radio)
{
double area;
area = 4.00 * PI * (radio * radio);
return(area);
}
void media();
void media()
{
 
int valores[] = {10,1,3,4,15,6,7,8,9,10};
int i, tam, suma=0, minimo=valores[0], maximo=valores[0];
float media;tam=sizeof(valores)/sizeof(int);
      for (i=0; i<tam;++i)
      {
      printf(" %d ",valores[i]);
      minimo=MIN(minimo,valores[i]);
      maximo=MAX(maximo,valores[i]);
      suma+=valores[i];}media=(float) suma / tam;
      printf("\nSuma= %d; Media= %f\nMinimo= %d; Maximo=%d\n",suma,media,minimo,maximo);
      return;
      }
void nivel();
void nivel()
{
int option,x=1,opt1=0,opt2=0,opt3=0,opt4=0,opt5=0,opt6=0;
float por1,por2,por3,por4,por5,por6;

cout<<"\n\nNiveles educativos: \n\n1-. Primaria. \n2-. Secundaria."
<<"\n3-. Carrera Tecnica. \n4-. Estudios Profecionales."
<<"\n5-. Estudios de Posgrado. \n6-. Ninguno."
<<"\n\nDigite (de 1 a 6) la respuesta (negativo para finalizar censo)";

while (true)
{
 cout<<"ENCUESTA # " <  cin>>option;
if (option>=0)
if (option==1)
{
x++; opt1++;
}
else
if (option==2)
{
x++; opt2++;
}
else
if (option==3)
{
x++; opt3++;
}
else
if (option==4)
{
x++; opt4++;
}
else
if (option==5)
{
x++; opt5++;
}
else
if (option==6)
{
x++; opt6++;
}
else
{
cout<<"Opci¢n invalida (presione"
<<" una tecla para continuar)";
getch();
 cout<<" "<<" ";
}
else
break;
 cout<<" ";
}

por1=opt1*100./(x-1);
por2=opt2*100./(x-1);
por3=opt3*100./(x-1);
por4=opt4*100./(x-1);
por5=opt5*100./(x-1);
por6=opt6*100./(x-1);
cout<<"NIVEL EDUCATIVO PORCENTAJE DE LA POBLACIÒN"
<<"\n\nPrimaria " << por1
<<"\nSecundaria " << por2
<<"\nCarrera Tecnica " << por3
<<"\nEstudios de Profesional " << por4
<<"\nEstudios de posgrado " << por5
<<"\nNinguno " << por6;
return;
}
void dig ();
void dig ()
{
 int numero;
 printf("Inserte num. de dos digitos pares: ");
 scanf("%d",&numero);
 int aux=numero;
 if(numero<100 && numero>9)
 {
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  if(d1%2==0 & d2%2==0)
   printf("El promedio d los digitos de %d es: %d",aux,(d1+d2)/2);
 }
 else
  printf("\aERROR: el numero no tiene dos digitos");
 getch();
}
void ser ();
void ser()
{
    int serie=1;
    bool sw=true;
    do
    {
      printf("%d, ",serie);
      if (sw) serie+=4;
      else serie-=2;
      sw=!sw;
    } while (serie<=23);
    return;
}
void matr();
void matr()

{
int M[20][20]; int f;int c;

printf("inserte filas de M:");scanf("%d",&f);
printf("inserte columnas de M:");scanf("%d",&c);
int k=1;
for(int i=1;i<=f;i++)
{
	if(i%2!=0)
	{
	for(int j=1;j<=c;j++)
	{
	M[i][j]=k;k++;
	}
}
else
{
for (int j=c;j>=1;j--)
{
	M[i][j]=k;k++;
	
	}
}
}

return;
}
void ex();
void ex()
{
      int i,j,suma=0;
      int num[3][4]={{1,2,3,4},{8,7,6,5},{9,10,11,12}};
      for(j=0;j<=2;j++)
      {
                       for(i=0;i<=3;i++)
                       {
                                        printf("posicion %d,%d de la matriz es : \t%d\n",j,i,num[j][i]);
                                        suma=suma+num[j][i];
                                        }
                                        printf("\n");
                                        }
                                                                                                        
                                       
                                        return;
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
void inver ();
void inver ()
{
	int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("\t%d",mat[i][j]);			
		}
		printf("\n\n");
	}
	printf("\n\n\n\tDiagonal principal invertida: \n\n\n");
 printf("\t%d  %d  %d  %d",16,11,6,1);
	getch();
}
void bordes();
void bordes() 
{
int y;
int x;
printf("\n\n\n\n");
printf(" ");
for (x=0; x<=ANCHO; ++x) putchar('*');
putchar('\n');
for (y=0; y<=FILAS; ++y) printf(" *\t\t\t\t\t\t\t\t\t\t*\n");
printf(" *\t\t\t\t Bienvenido a C \t\t\t\t*\n");
for (y=0; y<=FILAS; ++y) printf(" *\t\t\t\t\t\t\t\t\t\t*\n");
for (x=0; x<=ANCHO; ++x) putchar('*');
putchar('\n');
printf("\n\n\n\n");
return;
}
void limpiar();
void limpiar()
{
int n;
int numlin=30;

numlin;
while (n-- >0) putchar('\n');
return;
}
int main() 
{
reiniciar: 
int op,p,r; 
printf("\t\t\t\t*****MENU DE AVANCES******\n");
printf("Escoje el numero de avance:"); 
printf("\n\t1)Primer avance\n\t2)Segundo avance\n\t3)Tercer avance\n\t\n");
printf("EL AVANCE QUE ESCOJISTE ES:");
fflush(stdin); 
scanf("%i",&op); 

switch(op) 
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
printf("Avance 1:\n\t 1-Promedio\n\t 2-Suma y promedio\n\t 3-4 Numeros\n\t 4-Suma\n\t 5-Salario\n  "); 
printf("\t 6-Hospital\n\t 7-Suma de 3 numeros\n\t 8-Salario\n\t 9-Interes\n\t 10-Bisiesto\n\t 11-Numeros primos\n\t 12-factorial\n\t 13-Ano chino\n\t");
printf("Selecciona el programa:");
scanf("%d",&p);
system ("cls");
fflush(stdin); 
switch(p)
{
case 1:
promedio();
getch();
break; 
case 2: 
total();
getch();
break;
case 3: 
program();
getch();
break;
case 4: 
numeros();
getch();
break;
case 5: 
obrero();
getch();
break;
case 6: 
hospital();
getch();
break;
case 7: 
tres();
getch();
break;
case 8: 
semanal();
getch();
break;
case 9: 
interes();
getch();
break;
case 10: 
bisiesto();
getch();
break;
case 11: 
primo();
getch();
break;
case 12: 
factorial();
getch();
break;
case 13: 
chino();
getch();
break;
}
printf("Selecciona una opcion\n\t 1-Reiniciar\n\t 2-Salir\n\t");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}


case 2:
 printf("Avance 2:\n\t 1-Area de un triangulo \n\t" ); 
printf(" 2-mayor de 2 numeros \n\t 3-menor de 2 numeros\n\t 4-salario\n\t 5-Convertidor a dolar\n\t 6-tablas de multiplicar\n\t 7-Calorias\n\t");
printf("Elige una de las opciones:");
scanf("%d",&p);
system ("cls");
fflush(stdin); 
switch(p)
{
case 1:
triangulo();
break; 
case 2: 
mayor();
getch();
break;
case 3: 
menor();
getch();
break;
case 4: 
paga();
getch();
break;
case 5: 
dolar();
getch();
break;
case 6: 
multiplicar();
getch();
break;
case 7: 
caloria();
getch();
break;
}
printf("Selecciona opcion\n\t 1-Reiniciar\n\t 2-salir\n\t");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}
case 3:
printf("Avance 3: \n\t 1-Fecha\n\t 2-Cuantos dias tiene un mes \n\t 3-Suma de numeros pares \n\t 4-Promedio de 20 alumnos\n\t 5-Numero de digitos\n\t 6-Validar del 10 a 20 \n\t 7-Tipos de triangulo \n\t 8-Factorial \n\t 9-Mayor \n\t 10-Factura \n\t 11-Serie del 1 al 100 \n\t 12-Tabla de Multiplicar del 1 al 15 \n\t 13-Fiboncci \n\t 14-Impares 1-100 \n\t 15-Agenda de amigos \n\t 16-Hola \n\t 17-Menor \n\t 18-Caracter\n\t 19- Exponente \n\t 20-Factorial \n\t 21-ASCII \n\t 22-Monedas \n\t 23-Bordes \n\t 24-Area del circulo y esfera \n\t 25-Limpiar pantalla \n\t 26-vector entero \n\t 27-Casilla \n\t 28-Rango de estudios \n\t 29-promedio de digitos \n\t 30-serie \n\t 31-matriz invertida \n\t 32- Matriz leida \n\t 33- Matriz A y B \n\t 34-Diagonal Principal \n\t 35-Matriz R y S \n\t 36- Matriz de M y N \n");
printf("Elige una de las opciones:");
scanf("%d",&p);
system ("cls");
fflush(stdin); 
switch(p)
{
case 1:
fecha();
getch();
break;
case 2:
mes();
getch();
break;
case 3:
suma_pares();
getch();
break;
case 4:
veinte();
getch();
break;
case 5:
digito();
getch();
break;
case 6:
validar();
getch();
break;
case 7:
tipo_triangulo();
getch();
break;
case 8:
fact();
getch();
break;
case 9:
myr();
getch();
break;
case 10:
cant ();
getch();
break;
case 11:
uno_cien();
getch();
break;
case 12:
quince ();
getch();
break;
case 13:
Fibonacci();
getch();
break;
case 14:
im_par();
getch();
break;
case 15:
agenda();
getch();
break;
case 16:
hola();
getch();
break;
case 17:
num_menor();
getch();
break;
case 18:
carac();
getch();
break;
case 19:
exp();
getch();
break;
case 20:
fact();
getch();
break;
case 21:
asci();
getch();
break;
case 22:
mnd();
getch();
break;
case 23:
bordes();
getch();
break;
case 24:
esfera();
getch();
break;
case 25:
limpiar();  
getch();
case 26:
media();  
getch();
break;
case 27:
nivel();
getch();
break;
case 28:
nivel();
getch();
break;
case 29:
dig ();
getch();
break;
case 30:
ser();
getch();
break;
case 31:
matr();
getch();
break;
case 32:
ex();
getch();
break;
case 33:
pro();
getch();
break;
case 34:
veinte();
getch();
break;
case 35:
inver();
getch();
break;
case 36:
veinte();
getch();
break;
}
printf("\nSelecciona opcion\n\t 1-Reiniciar\n\t 2-salir\n\t ");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}


}}

  
 
