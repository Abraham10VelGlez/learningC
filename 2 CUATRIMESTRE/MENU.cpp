#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
int programa11();
int programa11()
{
	/* 1) Un maestro desea saber qué porcentaje de hombres y qué porcentaje de mujeres  hay en un grupo de estudiantes.*/
	
	int hombres, mujeres, total, suma, phombres, pmujeres;
	
	printf("\tIngrese el total de alumnos en su clase: \n\n\t\t");
	scanf("%d",&total);
	
	system("cls");
	printf("\n\tIngrese el total de hombres en su clase: \n\n\t\t");
	scanf("%d",&hombres);
	
	system("cls");
	printf("\n\tIngrese el total de mujeres en su clase: \n\n\t\t");
	scanf("%d",&mujeres);
	
	suma=hombres+mujeres;
	
	if(suma==total)
	{
	phombres=hombres*100/suma;
	pmujeres=mujeres*100/suma;
	system("cls");
	printf("\nEl porcentaje de hombres en su clase es del: \t %d",phombres);
	printf("\nEl porcentaje de mujeres en su calse es del: \t %d",pmujeres);
	}
	
	else
	{
	printf("La suma de hombres y mujeres no coincide con el total ingresado, favor de intentarlo nuevamente.");
	}
	return 0;
}

int programa12();
int programa12()
{
	/* 2) Dada una cantidad en pesos, obtener la equivalencia en dólares, asumiendo
      que la unidad cambiaría, es un dato desconocido.*/
      
	float pesos, dolares, pesosc;
	printf("\t\t Cantidad en pesos que decea convertir: \t$");
	scanf("%f",&pesos);
	system("cls");
	printf("\n\n\t\t Ingresa el valor actual del Dolar: \tUS$");
	scanf("%f",&dolares);
	pesosc=pesos/dolares;
	system("cls");
	printf("\n\n\t\t $%.2f pesos es igual a" " US$%f ",pesos,pesosc);
	
	return 0;
}

int programa13();
int programa13()
{
	/* 3) Un alumno desea saber cuál será su calificación final de la materia de programación.
		Dicha calificación se compone de los siguientes porcentajes:
	
	55% de sus tres calificaciones parciales. 
	30% de la calificación del examen final. 
	15% de la calificación de un trabajo final.*/

	float calp, calef, caltf, pcalp, pcalef, pcaltf,cfg;

	printf("\n\n\tIngresa la calificacion de tus tres parciales:\t");
	scanf("%f",&calp);
	system("cls");
	printf("\n\n\tIngresa la calificacion de tu examen final:\t");
	scanf("%f",&calef);
	system("cls");
	printf("\n\n\tIngresa la calificacion de tu trabajo final:\t");
	scanf("%f",&caltf);
	
	
	pcalp=calp*.55;
	pcalef=calef*.30;
	pcaltf=caltf*.15;
	
	cfg=pcalp+pcalef+pcaltf;
	
	if(cfg>=0 && cfg<=10)
	{
	system("cls");
	printf("\n\n Conforme al porcentaje asignado a cada calificacion, tus calificaciones quedan de la sigueinte manera:");
	printf("\n\n\tLa calificacion final de tus tres parciales es de:\t%.2f",pcalp);
	printf("\n\n\tLa calificacion de tu examen final es de:\t%.2f",pcalef);
	printf("\n\n\tLa calificacion de tu trabajo final es de:\t%.2f",pcaltf);
	printf("\n\n\tTu calificacion final global es de :\t%.1f",cfg);
	}
	
	else
	{
	system("cls");
	printf("\n\n Alguna calificacion no fue ingresada correctamente, porfavor intentelo nuevamente.");
	}
	return 0;
}

int programa14();
int programa14()
{
	/* 4) El dueño de una tienda compra un artículo a un precio determinado.
      Obtener el precio en que lo debe vender para obtener una ganancia del 30%.*/

	float precioca,ganancia, preciova;
	printf("\n\tIngrese el precio de compra del articulo: \t$");
	scanf("%f",&precioca);
	system("cls");
	printf("\n\tIngrese el porcentaje de ganancia que quiere obtener:\t");
	scanf("%f",&ganancia);
	system("cls");
	preciova=precioca+(precioca*(ganancia/100));
	printf("\n\tUstede debe vender el articulo comprado a: \t$%.2f",preciova);
	return 0;
}


int programa15()
{
	/* 5) Todos los lunes, miércoles y viernes, una persona corre la misma ruta y cronometra los tiempos obtenidos. 
	  Determinar el tiempo promedio  que la persona tarda en recorrer  la ruta en una semana cualquiera. */

	int tiempol, tiempom, tiempov, prom;
	
	printf("Ingresa los tiempos(en segundos) cronometrados  de los siguientes dias:\n\n");
	system("cls");
	printf("\n\tLunes:\t");
	scanf("%d",&tiempol);
	system("cls");
	printf("\n\tMiercoles:\t");
	scanf("%d",&tiempom);
	system("cls");
	printf("\n\tViernes:\t");
	scanf("%d",&tiempov);
	
	prom=(tiempol+tiempom+tiempov)/3;
	
	system("cls");
	printf("\nEl tiempo promedio para recorrer la ruta es de %d segundos",prom);
	return 0;
}

int programa16();
int programa16()
{
	/* 6)	Un alumno desea saber cuál será su promedio general en las tres materias más difíciles 
        que cursa y cuál será el promedio que obtendrá en cada una de ellas. Estás materias se
		evalúan como se muestra a continuación:

La calificación de matemáticas se obtiene de la siguiente manera:
	Examen 90%
	Promedio de tareas 10%
	En esta materia se pidió un total de tres tareas.

La calificación de física se obtiene de la siguiente manera:
	Examen 80%
	Promedio de tareas 20%
	En esta materia se pidió un total de 2 tareas.

La calificación de química se obtiene de la siguiente manera:
	Examen 85%
	Promedio de tareas 15%
	En esta materia se pidió un total de tres tareas.*/
	
	int tareasm, tareasf, tareasq; 
	float calm,calem, calf, calef, calq, caleq, calprom;

	printf("\n\n\tIngresa la calificacion de tu examen de Matematicas:\t");
	scanf("%f",&calem);
	printf("\n\n\tDe 3 tareas pedidas ingresa las que entregaste en Matematicas:\t");
	scanf("%d",&tareasm);
	calm=(calem*.90)+(tareasm/3);
	
	system("cls");
	printf("\n\n\tIngresa la calificacion de tu examen de Fisica:\t");
	scanf("%f",&calef);
	printf("\n\n\tDe 2 tareas peidas ingresa las que entregaste en Fisica:\t");
	scanf("%d",&tareasf);
	calf=(calef*.8)+tareasf;
	
	system("cls");
	printf("\n\n\tIngresa la calificacion de tu examen de Quimica:\t");
	scanf("%f",&caleq);
	printf("\n\n\tDe 3 tareas pedidas ingresa las que entregaste en quimica:\t");
	scanf("%d",&tareasq);
	calq=(caleq*.85)+(tareasq/3)*1.5;
	
	
	calprom=(calm+calf+calq)/3;
	
	if(calprom>=0 && calprom<=10)
	{
	system("cls");
	printf("\n\n\tTu calificacion de Matematicas es de:\t%.1f",calm);
	printf("\n\n\tTa calificacion de Fisica es de:\t%.1f",calf);
	printf("\n\n\tTa calificacion de Quimica es de:\t%.1f",calq);
	printf("\n\n\tTu calificacion promedio es de :\t%.1f",calprom);
	}
	else
	{
	system("cls");
	printf("\n\n Alguna calificacion no fue ingresada correctamente, porfavor intentelo nuevamente.");
	}
	return 0;
}

int programa17();
int programa17()
{
	/* 7) En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $1000.
      ¿Cuál será la cantidad que pagará una persona por su compra? */

	float totalc,totalp;
	
	printf("\n\tIngrese el total de su compra:\t$");
	scanf("%f",&totalc);
	
	if(totalc>1000)
	{
	totalp=totalc-(totalc*.2);
	system("cls");
	printf("\n\n\tCon el descuento solamente pagara:\t$%.2f",totalp);
	}
	else 
	{
	system("cls");
	printf("\n\n\tSu pago es normal:\t$%.2f",totalc);
	}
	return 0;
}

int programa18();
int programa18()
{
	/* 8) Realiza un programa que imprima el nombre de un artículo, clave, precio original y su precio 
      con descuento. El descuento lo hacen en base a la clave, si la clave es 01 el descuento es del
	  10% y si la clave es 02 el descuento es del 20% (sólo existen dos claves).*/

	float clave, precio, preciocd;
	char producto[50];
	
	printf("\tIngresa el nombre del articulo:\t");
	scanf("%s",&producto);
	system("cls");
	printf("\n\n\tIngresa el precio del articulo:\t");
	scanf("%f",&precio);
	system("cls");
	printf("\n\n\tIngresa la clave del articulo:\t");
	scanf("%f",&clave);
	
	if (clave==01)
	{
	preciocd=precio-precio*.1;
	}
	else
	{
	preciocd=precio-precio*.2;
	}
	system("cls");
	printf("\n\n\n\tArticulo: %s \n\n\tPrecio normal: %.2f \n\n\tPrecio con descuento: %.2f \n\n\tClave: %.0f",producto,precio,preciocd,clave);
	
	return 0;
}

int programa19();
int programa19()
{
	/* 9) Una empresa requiere hacer una compra de varias piezas. De la misa clase a una fábrica de refacciones. 
      La empresa, dependiendo del monto total de la compra, decidirá qué hacer para pagar al fabricante.
	  * Si el monto total de la compra excede de $500,000 la empresa tendrá la capacidad de invertir de su 
	  propio dinero un 55% del monto de la compra, pedir prestado al banco un 30% y el resto lo pagará 
	  solicitando un crédito al fabricante.
	  * Si el monto total de la compra no excede de  $ 500,000, la empresa tendrá la capacidad de invertir
	  de su propio dinero un 70% y el restante 30% lo pagará solicitando crédito al fabricante.
	  * El fabricante cobra por concepto de intereses un 20% sobre la cantidad que se le pague a crédito. */
	  
	float mt, pd, pb, c, csi;
	printf("Ingrese el monto total de la compra: $ ");
	scanf("%f",&mt);
	
	if(mt>500000)
	{
	pd= mt*.55;
	pb=mt*.30;
	c=mt*.15;
	csi=c*.20;
	system("cls");
	printf("\n\n\t El monto total a pagar: $ %.2f",mt);
	printf("\n\n\t El dinero que pagara la empresa: $ %.2f",pd);
	printf("\n\n\t El prestamo a solicitar del banco: $ %.2f",pb);
	printf("\n\n\t Lo que pagara a credito: $ %.2f",c);
	printf("\n\n\t El interes que pagara por el credito: $ %.2f",csi);
	}
	
	if(mt>=0 && mt<=500000)
	
	{
	pd= mt*.70;
	c=mt*.30;
	csi=c*.20;
	system("cls");
	printf("\n\n\t El monto total a pagar: $ %.2f",mt);
	printf("\n\n\t El dinero que pagara la empresa: $ %.2f",pd);
	printf("\n\n\t Lo que pagara a credito: $ %.2f",c);
	printf("\n\n\t El interes que pagara por el credito: $ %.2f",csi);
	}
	if(mt<0)
	{
	system("cls");
	printf("\n\n\t Monto total a pagar no valido.");
	}
	return 0;
}

int programa110();
int programa110()
{
	/*10) Calcular el total que una persona debe pagar en una llantera, si el precio
      de cada llanta es de $800 si se compran menos de 5 llantas y de $700 si se
	  compran 5 o más.*/

	int tp, tll;
	
	printf("\t Ingrese el total de llantas compradas: \t");
	scanf("%d",&tll);
	
	if(tll>=5)
	{
		tp=700*tll;
		system("cls");
		printf("\n\t Por comprar %d llantas, el total a pagar es de: $ %d",tll,tp);
	}
	else if(tll>=0 && tll<5)
	{
		tp=800*tll;
		system("cls");
		printf("\n\t Por comprar %d llantas, el total a pagar es de: $ %d",tll,tp);
	}
	else
	{
		system("cls");
		printf("Cantidad de llantas no valida.");
	}
	return 0;
}

int programa111();
int programa111()
{
	/* 11) Leer 20 números e imprimir cuántos son positivos, cuántos negativos y cuantos neutro.*/

	int c=0, numero=0, numerosp=0, numerosn=0, numerosne=0;
	
	while(c<=19)
	{
	printf("\n\t Digite un numero: \t");
	scanf("%d",&numero);
	
	if(numero>0)
	{
		numerosp++;
	}
	
	else if(numero<0)
	{
		numerosn++;
	}
	else if(numero==0)
	{
		numerosne++;
	}
	c++;
	}
	system("cls");
	printf("\n\t De un total de %d numeros: \n\t a) %d son positivos. \n\t b) %d son negativos. \n\t c) %d son neutros.",c,numerosp,numerosn,numerosne);
	return 0;
}

int programa112();
int programa112()
{
	/* 12) Leer 15 números negativos, convertirlos a positivos e imprimir su valor original y su valor en positivo.*/

	int c=0,numero,numeroc;
	while(c<=14)
	{
	printf("\n\n\t Digite un numero entero negativo: \t");
	scanf("%d",&numero);
	if (numero<0)
	{
	numeroc=numero*-1;
	system("cls");
	printf("\t El numero era %d convertido ahora es %d",numero, numeroc);
	}
	else
	{
	system("cls");
	printf("\n\t El numero no es negativo.");
	c--;
	}
	c++;
	}
	return 0;
}

int programa113();
int programa113()
{
	/* 13) Calcular e imprimir la tabla de multiplicar de un número cualquiera, imprimir
       el multiplicando, el multiplicador y el producto.*/

	int c,limite, multiplicando, multiplicador=1, producto;
	
	printf("De que numero decea la tabla de multiplicar:\t");
	scanf("%d",&multiplicando);
	system("cls");
	printf("Hasta que numero decea la tabla de multiplicar:\t");
	scanf("%d",&limite);
	system("cls");
	for(c=1;c<=limite;c++)
	{
	producto=multiplicando*multiplicador;
	printf("\n\t %d * %d = %d",multiplicando,multiplicador,producto);
	multiplicador++;
	}
	return 0;
}

int programa114();
int programa114()
{
	/* 14) Simular el comportamiento de un reloj digital, imprimiendo la hora minutos
    y segundos de un día desde las 0:00:00 horas hasta las 23: 59:59*/

int hora,min,seg,mseg;
for(hora=0;hora<=23;hora++)
{

    for(min=0;min<=59;min++)
	{
	
		for(seg=0;seg<=59;seg++)
		{
		
			for(mseg=0;mseg<=59;mseg++)
			{
				system("cls");
				printf("%02d:%02d:%02d:%02d",hora,min,seg,mseg);
			}
		}
	}
}
return 0;
}

int programa115();
int programa115()
{
	/* 15) Un año es bisiesto si es múltiplo de 4, pero no de 100, pero sí de 400
        (Ejemplos: 1984 es bisiesto, 2000 es bisiesto, 1800 no es bisiesto). 
	    Determine un programa  que permita determinar si un año introducido 
	    desde el teclado es bisiesto o no.*/
		
	int year;
	printf("Digite el a%co: ",165);
	scanf("%d",&year);
	
	if((year%4==0) && (year%100!=0) || (year%400==0))
	{
		system("cls");
		printf("El a%co es biciesto.",165);
	}
	else
	{
		system("cls");
		printf("El a%co no es biciesto.",165);
	}
	return 0;
}

int programa116();
int programa116()
{
	long int bnum,dec=0,j=1,rem,bnum1,flag=0; 
	printf("Ingresa cualquier numero binario : "); 
	scanf("%ld",&bnum); 
	bnum1=bnum; 
	while(bnum!=0) 
	{
		rem=bnum%10; 
		if((rem==0) || (rem==1)) 
		{
			 flag=1; 
			 dec=dec+rem*j; 
			 j=j*2; 
			 bnum=bnum/10; 
		} 
		else 
		{ 
			flag=0; 
			break; 
		} 
	} 
	
	if(flag==1) 
	{
		system("cls");
		 printf("\nEl decimal equivalente al numero binario %ld es: %ld",bnum1,dec); 
	}
	else 
	{ 
		system("cls");
		printf("\n\n Ingresa un numero binario!!!"); 
	} 
	return 0;
}

int programa21();
int programa21()
{
	/*Diseñe un programa que me permita ingresar n numeros, los guarde en un vector e imprima
	los que son numeros pares.*/

	int n,cont;
	printf("Cuantos numeros decea ingresar:");
	scanf("%d",&n);
	int numeros[n];

	for(cont=0;cont<n;cont++)
	{
		system("cls");
		printf("Ingresa un numero:");
		scanf("%d",&numeros[cont]);	
	}
	system("cls");
	printf("Los numeros pares son:");
	
	for(cont=0;cont<n;cont++)
	{
		if (numeros[cont]%2==0)
		printf("\n\n%d",numeros[cont]);
	}
}

int programa22();
int programa22()
{
	/*Diseña un programa que por medio de una serie de 15 numeros enteros pedidos al usuario identifique
 los numeros positivos ingresados, los sume y los imprima en pantalla.*/
 
	int cont, datos[15], suma=0;
	
	for(cont=0;cont<15;cont++)
	{
		system("cls");
		printf("Digite su siguiente numero:");
		scanf("%d",&datos[cont]);
		
		if(datos[cont]>0)
		suma=suma+datos[cont];		
	}

	system("cls");
	printf("La suma de los positivos es: %d",suma);
	printf("\n\nLos numeros positivos son:");
	
	for(cont=0;cont<15;cont++)
	{
		if (datos[cont]>0)
		printf("\n\n%d",datos[cont]);
	}
}

int programa23();
int programa23()
{
	/*Diseña un programa que por medio de una serie de 10 numeros enteros pedidos al usuario identifique
 los numeros negativos ingresados, imprima los numeros negativos y la cantidad de numeros
 negativos ingresados.*/

	int cont,datos[10], suman=0;
	
	for(cont=0;cont<10;cont++)
	{
		system("cls");
		printf("Digite su siguiente numero:");
		scanf("%d",&datos[cont]);
		
		if(datos[cont]<0)
		suman++;
	}
	
	system("cls");
	printf("El total de numeros negativos son: %d",suman);
	printf("\n\nLos numeros negativos son:");

	for(cont=0;cont<10;cont++)
	{
		if (datos[cont]<0)
		printf("\n\n%d",datos[cont]);
	}
}

int programa24();
int programa24()
{
	/* Realizar un programa que pida al usuario llenar dos vectores, multiplique los
   datos de ambos vectores e imprima en pantalla los datos y los resultados de las
   multiplicaciones.*/

	int vector1[5], vector2[5],c,vector3[5];
	for(c=0;c<5;c++)
	{
		printf("Ingrese sus datos para su vector 1: ");
		scanf("%d",&vector1[c]);
		
		system("cls");
		printf("Ingrese sus datos para su vector 2: ");
		scanf("%d",&vector2[c]);
	}
	for(c=0;c<5;c++)
	{
		vector3[c]=vector1[c]*vector2[c];
		printf("\n\n%d * %d = %d",vector1[c],vector2[c], vector3[c]);
	}
}

int programa25();
int programa25()
{
	/*Realizar un programa que calcule el IMC*/

	float peso, estatura,r;
	printf("Ingresa tu peso actual(kg): ");
	scanf("%f",&peso);
	
	system("cls");
	printf("Ingresa tu estatura actual(mts): ");
	scanf("%f",&estatura);
	
	r=peso/(estatura*estatura);
	system("cls");
	printf("IMC= %f \n\n",r);

}

int programa26();
int programa26()
{
	/*Realizar un programa que calcule el numero de pulsaciones que una persona debe
  de tener por cada 10 segundos de ejercicio*/

	int edad,np;
	printf("Ingresa tu edad:");
	scanf("%d",&edad);
	np=(220*edad)/10;
	system("cls");
	printf("El numero de pulsaciones  debe ser: %d",np);

}

int programa27();
int programa27()
{
	/*Calcular el salario de un obrero si tuvo un incremento del 25% sobre el anterior*/

	float s,sf;
	printf("Ingresa tu salario anterior: ");
	scanf("%f",&s);
	sf=s+(s*.25);
	system("cls");
	printf("Tu nuevo salario es de: %f",sf);
}

int programa28();
int programa28()
{
	/*Realizar un programa que calcule el area de un circulo.*/

	float pi=3.1416, r, ac;
	printf("Digita el radio del circulo: ");
	scanf("%f",&r);

	ac=pi*(r*r);

	printf("El area es: %f",ac);
}

int programa29();
int programa29()
{
	/*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
  decea saber cuanto debera pagar finalmente por su compra. Imprimir el nombre del
  cliente y su total a pagar.*/
  
	float tc, tp;
	char nc[20];
	printf("Ingrese su nombre: ");
	scanf("%s",&nc);
	
	printf("Ingrese el total de la compra: ");
	scanf("%f",&tc);
	
	tp=tc-(tc*.15);
	
	system("cls");
	printf("%s El total a pagar es de: %.2f",nc,tp);
}

int programa210();
int programa210()
{
	/*Realizar un programa que identifique si una letra ingresada es vocal o consonante*/
char l;

printf("Ingrese una letra: "); 
scanf("%s",&l); 

if(l=='a'|| l=='e'|| l=='i'||l=='o'||l=='u') 
printf("Es una vocal"); 
else 
printf("Es una consonante"); 
}

int programa31();
int programa31()
{
	/*1.	Dada una fecha con números, muestra la fecha poniendo el mes con letras.*/
	int d,m,a;
	printf("Ingrese los siguientes datos con numeros...");
	printf("\n\nDia: ");
	scanf("%d",&d);
	printf("\n\nMes: ");
	scanf("%d",&m);
	printf("\n\nA%co: ",164);
	scanf("%d",&a);
	
	system("cls");
	
	if(m==1)
	{
	printf("%d de Enero del %d",d,a);
	}
	if(m==2)
	{
	printf("%d de Febrero del %d",d,a);
	}
	if(m==3)
	{
	printf("%d de Marzo del %d",d,a);
	}
	if(m==4)
	{
	printf("%d de Abril del %d",d,a);
	}
	if(m==5)
	{
	printf("%d de Mayo del %d",d,a);
	}
	if(m==6)
	{
	printf("%d de Junio del %d",d,a);
	}
	if(m==7)
	{
	printf("%d de Julio del %d",d,a);
	}
	if(m==8)
	{
	printf("%d de Agosto del %d",d,a);
	}
	if(m==9)
	{
	printf("%d de Septiembre del %d",d,a);
	}
	if(m==10)
	{
	printf("%d de Octubre del %d",d,a);
	}
	if(m==11)
	{
	printf("%d de Noviembre del %d",d,a);
	}
	if(m==12)
	{
	printf("%d de Diciembre del %d",d,a);
	}
	if(m>12 || m<0)
	{
	printf("Mes no valido!!");
	}
}

int programa32();
int programa32()
{
	/*2.	Programa que pide un número de mes y escribe la cantidad de días que tiene.*/

	int m;
	printf("Ingrese los siguientes datos con numeros...");
	printf("\n\nMes: ");
	scanf("%d",&m);
	system("cls");
	
	if(m==1)
	{
	printf("El mes es Enero y tiene 31 dias.");
	}
	if(m==2)
	{
	printf("El mes es Febrero y tiene 28 dias.");
	}
	if(m==3)
	{
	printf("El mes es Marzo y tiene 31 dias.");
	}
	if(m==4)
	{
	printf("El mes es Abril y tiene 30 dias.");
	}
	if(m==5)
	{
	printf("El mes es Mayo y tiene 31 dias.");
	}
	if(m==6)
	{
	printf("El mes es Junio y tiene 30 dias");
	}
	if(m==7)
	{
	printf("El mes es Julio y tiene 31 dias.");
	}
	if(m==8)
	{
	printf("El mes es Agosto y tiene 31 dias.");
	}
	if(m==9)
	{
	printf("El mes es Septiembre y tiene 30 dias.");
	}
	if(m==10)
	{
	printf("El mes es Octubre y tiene 31 dias.");
	}
	if(m==11)
	{
	printf("El mes es Noviembre y tiene 30 dias.");
	}
	if(m==12)
	{
	printf("El mes es Diciembre y tiene 31 dias.");
	}
	if(m>12 || m<0)
	{
	printf("Mes no valido!!");
	}
}

int programa33();
int programa33()
{
	/*3.	Programa que pide 10 números y calcula y  muestra la suma de todos los que fueron pares.*/

	int c,n,suma=0;
	
	for(c=0;c<10;c++)
	{
		system("cls");
		printf("Ingresa tu dato %d: ",c);
		scanf("%d",&n);
		
		if(n%2==0)
		suma+=n;
	}
	system("cls");
	printf("La sumatoria de los numeros pares es: %d",suma);
}

int programa34();
int programa34()
{
	/*4.	Obtener el promedio de calificaciones de un grupo de 20 estudiantes*/

	int c,n,suma=0,prom;
	
	for(c=0;c<20;c++)
	{
		system("cls");
		printf("Ingresa tu calificacion %d: ",c);
		scanf("%d",&n);
		
		if(n%2==0)
		suma+=n;
	}
	prom=suma/20;
	system("cls");
	printf("El promedio de las 20 calificaciones es: %d",prom);
}

int programa35();
int programa35()
{
	/*5.	Dado un número de tipo entero decir cuántos  dígitos tiene.*/
	
	int num, v, cont=0, n=1; 
	printf("Inserte el numero a evaluar: "); 
	scanf("%d", &num); 
	while (v!=1)
	{ 
		if ((num)/(n)==0)
		{
			v=1; 
		}
		else
		{
			v=0; 
		} 
		n=n*10; 
		cont=cont+1; 
	}
	printf("El numero de digitos de %d es %d...", num, cont-1);
}

int programa36();
int programa36()
{
	/*6.	Validar que un número dado esté en el rango de 10 a 20.*/
	
	int n;
	
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	system("cls");
	if(n>=10 && n<=20)
	{
		printf("Numero Valido.");
	}
	else
	{
		printf("Numero no Valido.");
	}
}

int programa37();
int programa37()
{
	/*7. Escribir un programa en C que lea tres números e indique el tipo de triángulo que
     forman (isósceles, equilátero, escaleno). Comprobar que los números realmente formen
	 un triángulo, sino emitir el error.*/

	int L1,L2,L3;
	printf("Ingrese los siguientes datos...");
	printf("\n\nPrimer lado del triangulo: ");
	scanf("%d",&L1);
	printf("\n\nSegundo lado del triangulo: ");
	scanf("%d",&L2);
	printf("\n\nTercer lado del triangulo: ");
	scanf("%d",&L3);
	
	system("cls");
	if(L1==L2 && L2==L3 && L3==L1)
	{
		printf("Es un triangulo equilatero por que sus 3 lados son iguales.");
	}
	
	if((L1==L2 && L2!=L3) || (L2==L3 && L3!=L1) || (L3==L1 && L1!=L2))
	{
		printf("Es un triangulo isoceles por que solo 2 de sus 3 lados son iguales.");
	}
	
	if(L1!=L2 && L2!=L3 && L3!=L1)
	{
		printf("Es un triangulo escaleno por que sus 3 lados son diferentes.");
	}
}

int programa38();
int programa38()
{
	/*8. Programa que lea un número entero por teclado y que calcule su factorial*/

	int f,c,n;
	
	printf("Ingrese un numero.");
	scanf("%d",&n);
	f=1;
	int aux=n;
	for(c=1;c<=n;c++)
	{
		f=f*c;
		printf(" %d ",aux);
		aux--;
	}
	printf("\nSu factorial es: %d ",f);
}

int programa39();
int programa39()
{
	/*9. Programa que lea una serie de números por teclado e indique cuál es el mayor*/
	
	int c,tn,n,m;
	
	printf("Cuantos datos decea comparar: ");
	scanf("%d",&tn);

	for(c=0;c<tn;c++)
	{
		system("cls");
		printf("Ingrese su dato %d: ",c);
		scanf("%d",&n);
		
		if(n>m);
		{
			m=n;
		}		
	}
	printf("El mayor es: %d",m);
}

int programa310();
int programa310()
{
	/*10. Crear un programa C que lea cantidades y precios y al final indique el total de la factura.*/

	int c,tp,cant;
	float pre,suma=0;
	
	printf("Cuantos precios decea registrar? ");
	scanf("%d",&tp);
	
	for(c=0;c<tp;c++)
	{
		system("cls");
		printf("Que precio tiene el articulo? ");
		scanf("%f",&pre);
		printf("Cuantas cantidades son? ");
		scanf("%d",&cant);
		suma+=pre*cant;
	}
	printf("El total de su factura es: $ %.2f ",suma);
}

int programa311();
int programa311()
{
	/*11. Crear un programa que escriba dos columnas de números, en la primera se
      colocan los números del 1 al 100, en la segunda los números del 100 al 1*/

	int a,d;
	
	for(a=1,d=100;a<=100,d>=1;a++,d--)
	{
		printf("\n\t %d \t %d",a,d);
	}
}

int programa312();
int programa312()
{
	/*12. Crear el programa tablaMultiplicar que escriba la tabla de multiplicar del número 1 al número 15*/

	int a=1,d=1,r;
	
	for(d=1;d<=15;d++)
	{
		printf("\n");
		for(a=1;a<=10;a++)
		{
		r=d*a;
		printf("\n\t %d * %d = %d",d,a,r);
		}
	}
}
unsigned long int fibonacci(int n) 
{ 
if(n==0||n==1) 
return n; 
else 
return fibonacci(n-1) + fibonacci(n-2); 
}

int programa313();
int programa313()
{
	/*13. Crear un programa que lea un número e indique su valor en la sucesión de 
      Fibonacci (llamarle Fibonacci). Esta sucesión calcula su valor de la siguiente
	  manera. Sólo es válido para números positivos, si el número es un uno, la sucesión
	  vale 1 si es dos, la sucesión vale 2. Para el resto la sucesión es la suma de la 
	  sucesión de los dos números anteriores. Es decir, para 7 el valor sería lo que valga
	  la sucesión de 6 más la sucesión de cinco. */
	  
using namespace std; 
 
int i,numero;
cout<<"Introduzca la cantidad de elementos que desea observar en la serie\nde fibonacci : "; 
cin>>numero; 
cout<<"\n\nEsta es la serie de fibonacci con "<<numero<<" elemento"; 
if(numero!=1) 
{ 
cout<<"s"; 
} 
cout<<"\n\n"; 
for(i=0;i<numero;i++) 
{ 
if(fibonacci(i)!=0) 
cout<<" , "; 
cout<<fibonacci(i); 
} 
}

int programa314();
int programa314()
{
	/*11. Crear un programa Que muestre los números impares que haya del 1 al 100. */
	
	int a;
	
	for(a=1;a<=100;a++)
	{
		if(a%2!=0)
		{
		printf("\n\t %d",a);
		}
	}
}

int programa315();
int programa315()
{
	/*15.	Escriba un programa que imprima una lista de amigos guardados en una agenda.*/

     int cant, i; 
     char** amigos; 

     printf("Cantida de nombres de amigos que decea guardar: "); 
     scanf("%d", &cant); 
     getchar(); 
     amigos = (char**)malloc(cant * sizeof(char)); 

    for(i = 0; i < cant; i++) 
    { 
		system("cls");
        amigos[i] = (char*)malloc(100 * sizeof(char)); 
        printf("Nombre: %d: ", i + 1); 
        fgets(amigos[i], 100, stdin); 
    } 

    for(i = 0; i < cant; i++)
    {
		printf("\n%d. %s\n", i + 1, amigos[i]);
	}
}

int programa316();
int programa316()
{
	/*16. Escriba un programa que te imprima un mensaje de presentación, te pregunte como te llamas y te salude.*/

	char nombre[10];
	printf("Ingresa tu nombre: ");
	scanf("%s",&nombre);
	system("cls");
	printf("\n\n\t\tHOLA %s",nombre);
}

int programa317();
int programa317()
{
	/*17. Escriba un programa que halle el menor de dos números pedidos al usuario.*/

	int n1,n2,m;
	system("cls");
	printf("Digita el primer numero: ");
	scanf("%d",&n1);
	system("cls");
	printf("Digita el segundo numero: ");
	scanf("%d",&n2);
	system("cls");
	if(n1<n2)
	printf("%d es menor que %d",n1,n2);
	else
	printf("%d es menor que %d",n2,n1);
}

int programa318();
int programa318()
{
	/*18. Escriba un programa que pida al usuario un carácter y un número de repeticiones.
      Luego imprima el carácter el número de veces especificado*/
      
	int c,n;
	char caracter[10];
	printf("Digite su caracter: ");
	scanf("%s",&caracter);
	printf("Digite cuantas veces decea imprimir el caracter: ");
	scanf("%d",&n);
	
	for(c=1;c<=n;c++)
	{
		printf("\n\n %d ) %s",c,caracter);
	}
}

int programa319();
int programa319()
{
	/*19. Escriba un programa que imprima una tabla con las cuatro primeras potencias de los números 1 a 10 */

	int n,p,r;
	
	for(p=0;p<=4;p++)
	{
		printf("\n");
		for(n=1;n<=10;n++)
		{
			r=pow(n, p);
			printf("\n%d ^ %d = %d",n,p,r);
			
		}
	}
}

int programa320();
int programa320()
{
	/*20. Escriba un programa que calcule  el factorial de un número*/

	long int f,c,n;
	
	printf("Ingrese un numero.");
	scanf("%d",&n);
	f=1;
	int aux=n;
	for(c=1;c<=n;c++)
	{
		f=f*c;
		printf(" %d ",aux);
		aux--;
	}
	printf("\nSu factorial es: %ld ",f);
}

int programa321();
int programa321()
{
	/*21. Escriba un programa que muestre la tabla ASCII.*/

	int c;
	for(c=1;c<=255;c++)
	{
		printf("\n\t%d = %c",c,c);
	}
}

int programa322();
int programa322()
{
	/*22.	Escriba un programa que dándole el importe exacto de una cantidad te indica 
    el mínimo número de monedas que podrías tener. Las monedas son de 1, 5, 10.*/
    
	int impi,imp,diez=0,peso=0,cinco=0;
	
	printf("Ingrese una cantidad: ");
	scanf("%d",&impi);
	system("cls");
	imp=impi;
	while(imp>0)
	{
		if(imp%10==0)
		{
		imp=imp-10;
		diez++;
		}
		else if(imp%5==0)
		{
		imp=imp-5;
		cinco++;
		}
		else
		{
		imp=imp-1;
		peso++;
		}
	}
	printf("Importe ingresado: %d \n\n Monedas: \n\n $1 = %d \n\n $5 = %d  \n\n $10 = %d",impi,peso,cinco,diez);
}

int programa323();
int programa323()
{
	/*23. Escriba un programa que imprima un mensaje rodeado por un borde, utilizando
      funciones para dibujar los elementos del borde.*/

	int f,c;
	char msg[]="HOLA";
	
	printf("\n|===============|");
	printf("\n|     %s      |",msg);
	printf("\n|===============|");
}

int programa324();
int programa324()
{
	/*24. Escriba un programa que imprima una tabla con las áreas del círculo y de
      la esfera para un radio en el rango de 0 hasta 20 en incrementos de 2.*/

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

int programa325();
int programa325()
{
	/*25. Escriba un programa con una función que borre la pantalla emitiendo una serie de caracteres de salto de línea.*/

int numlin=30;
LimpiaPantalla(numlin);

}

int programa326();
int programa326()
{
	/*26.	Escriba un programa que  inicialice un  vector de enteros (15). 
	Calcule e imprima su suma, media, mínimo y máximo.*/
	
	int c,max=0,min,suma=0;
	int vector[15];
	for(c=0;c<15;c++)
	{
		printf("Escriba el dato %d para el vector: ",c);
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
	printf("\n\nLa suma es= %d \n\nEl maximo es= %d \n\nEl mimimo es= %d",suma,max,min);
}

int programa327();
int programa327()
{
	/*27) Un jefe de casilla desea determinar cuántas personas de cada una de las secciones
 que componen su zona asisten el día de las votaciones. Las secciones son: norte, sur y
 centro.
 También desea determinar cuál es la sección con mayor número de votantes.*/

	int opcs,tp;
	
	printf("Cuantas personas son las que componen su zona? ");
	scanf("%d",&tp);
	
	int c,sn=0,ss=0,sc=0;
	for(c=0;c<tp;c++)
	{
	system("cls");
	printf("De que seccion eres?\n\n1)Norte.\n\n2)Sur.\n\n3)Centro.\n\nSu seccion es: ");
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
	system("cls");
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Norte.");
	}
	if(ss>sn && ss>sc)
	{
	system("cls");
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Sur.");
	}
	if(sc>ss && sc>sn)
	{
	system("cls");
	printf("De un total de %d personas que componen su zona, las personas que asistieron de cada seccion son:",tp);
	printf("\n\nNorte= %d\n\nSur= %d\n\nCentro= %d",sn,ss,sc);
	printf("\n\nLa seccion con mas personas es Centro.");
	}
}

int programa328();
int programa328()
{
	/*28) Un censador recopila ciertos datos aplicando encuestas para el último censo
  nacional de población y vivienda. Desea obtener de todas las personas que alcance
  a encuestar en un día, que porcentaje tiene de estudios de primaria, secundaria, 
  carrera técnica, estudios profesionales y estudios de posgrado.*/
  
  int tpe;
	printf("Ingresa el total de personas encuestadas: ");
	scanf("%d",&tpe);
	int s, epri, esec, ecart, epro, epos;
	system("cls");
	printf("Ingresa el total de personas con estudios de primaria: ");
	scanf("%d",&epri);
	
	system("cls");
	printf("Ingresa el total de personas con estudios de secundaria: ");
	scanf("%d",&esec);
	
	system("cls");
	printf("Ingresa el total de personas con estudios de carrera tecnica: ");
	scanf("%d",&ecart);
	
	system("cls");
	printf("Ingresa el total de personas con estudios profesionales: ");
	scanf("%d",&epro);
	
	system("cls");
	printf("Ingresa el total de personas con estudios de posgrado: ");
	scanf("%d",&epos);
	
	s=epri+esec+ecart+epro+epos;
	
	if(s==tpe)
	{
		int pepri, pesec, pcart, pepro, pepos;
	pepri=(epri*100)/tpe; 
	pesec=(esec*100)/tpe;
	pcart=(ecart*100)/tpe;
	pepro=(epro*100)/tpe;
	pepos=(epos*100)/tpe;
	
	system("cls");
	printf("Los porcentajes son los siguientes.");
	printf("\n\nEstudios de primaria= %d",pepri);
	printf("\n\nEstudios de secundaria= %d",pesec);
	printf("\n\nEstudios de carrera tecnica= %d",pcart);
	printf("\n\nEstudios profesionales= %d",pepro);
	printf("\n\nEstudios de posgrado= %d",pepos);
	}
}

int programa329();
int programa329()
{
/*29.	Dado un numero verificar:
    - Que tenga dos dígitos
    - Verificar si sus dígitos son pares
    - Promediar sus dígitos
*/
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
}

int programa330();
int programa330()
{
	/*30. Generar la serie: 1, 5, 3, 7, 5, 9, 7, ..., 23.*/
	
	int n=1,c;
	printf(" %d",n);
	while(n<23)
	{
		n=n+4;
		printf(" %d",n);
		n=n-2;
		printf(" %d",n);
	}
}

int programa331();
int programa331()
{
	/*31.	Dado el vector T de tamaño n. Si el tamaño es par,  invertir los elementos
	de la mitad de los elementos Ejemplo:   v=[1][2][3][4][5][6]      v(invertido)=[3][2][1][6][5][4] */
	
	int c,n,a,d,f,mn;
	printf("Ingresa la dimencion de tu vector: ");
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

int programa332();
int programa332()
{
	/*Generar la matriz:
    [01][02][03][04]
    [08][07][06][05]
    [09][10][11][12]*/
    
	int f,c,FIL=3,COL=4,n=01;
	int matriz[FIL][COL];
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			matriz[f][c]=n;
			n++;
		}
	}
	system("cls");
	printf("\n\t\t  MATRIZ\n\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",matriz[f][c]);
		}
	printf("\n\n");
	}
}

int programa333();
int programa333()
{
	/*33. Dadas dos matrices A y B intercambiar los mínimos de A con los máximos de B.*/
	
	int max=-999999,min=999999, FIL=2, COL=2,f,c;
	int matrizA[FIL][COL];
	int matrizB[FIL][COL];
	int auxA[FIL][COL];
	int auxB[FIL][COL];
	int pcmax=0,pfmax=0,pfmin=0,pcmin=0;
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			system("cls");
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ A: ",f,c);
			scanf("%d",&matrizA[f][c]);
			auxA[f][c]=matrizA[f][c];
			
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ B: ",f,c);
			scanf("%d",&matrizB[f][c]);
			auxB[f][c]=matrizB[f][c];
		}
	}
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{	
			if(matrizA[f][c]<min)
			{
				min=matrizA[f][c];
				pfmin=f;
				pcmin=c;
			}
			
			if(matrizB[f][c]>max)
			{
				max=matrizB[f][c];
				pfmax=f;
				pcmax=c;
			}
		}
	}
	auxA[pfmin][pcmin]=max;
	auxB[pfmax][pcmax]=min;
	
	printf("\tMATRIZ A INGRESADA.\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",matrizA[f][c]);
		}
		printf("\n\n");
	}
	printf("\tMATRIZ B INGRESADA.\n");
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",matrizB[f][c]);
		}
		printf("\n\n");
	}
	
	printf("\tMATRIZ A CAMBIADA.\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",auxA[f][c]);
		}
		printf("\n\n");
	}
	printf("\tMATRIZ B CAMBIADA.\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",auxB[f][c]);
		}
		printf("\n\n");
	}
	
	printf("\n\nMAXIMO= %d y su fila es = %d y su columna es= %d  \n\nMINIMO= %d y su fila es = %d y su columna es= %d",max,pfmax,pcmax,min,pfmin,pcmin);
	
}

int programa334();
int programa334()
{
	/*34. Dada una matriz cuadrada invertir su diagonal principal.*/
	
	int FIL=3,COL=3,f,c;
	int matriz[FIL][COL];
	int vector[FIL];
	int auxm[FIL][COL];
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			system("cls");
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ... ",f,c);
			scanf("%d",&matriz[f][c]);
			auxm[f][c]=matriz[f][c];
			if(f==c)
			{
				vector[f]=matriz[f][c];
			}
		}
	}
	
	int d;
	for(c=0,d=FIL-1;c<COL,d>=0;c++,d--)
	{
		auxm[c][c]=vector[d];
	}
	system("cls");
	printf("\n\t\t  MATRIZ CON DIAGONAL NORMAL\n\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",matriz[f][c]);
		}
	printf("\n\n");
	}
	
	printf("\n\t\t  MATRIZ CON DIAGONAL INVERTIDA\n\n");
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("\t%d",auxm[f][c]);
		}
	printf("\n\n");
	}
}

int programa335();
int programa335()
{
	/*35.	Dada dos matrices de diferentes tamaños R y S mostrar los elementos comunes de R en S.*/
	
	int FILA,COLA,FILB,COLB,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz A ? ");
	scanf("%d",&FILA);
	printf("Cuantas filas para la matriz B ? ");
	scanf("%d",&FILB);
	printf("Cuantas columnas para la matriz A ? ");
	scanf("%d",&COLA);
	printf("Cuantas columnas para la matriz B ? ");
	scanf("%d",&COLB);
	int matrizA[FILA][COLA];
	int matrizB[FILB][COLB];
	int vector[FILA*COLA];
	
	for(f=0;f<FILA;f++)
	{
		for(c=0;c<COLA;c++)
		{
			system("cls");
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ A: ",f,c);
			scanf("%d",&matrizA[f][c]);
		}
	}
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
			system("cls");
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

int programa336();
int programa336()
{
	/*36.	Dada la matriz de m*n y el vector de tamaño n, determinar que columna de la matriz es igual al vector.*/
	
	int FIL,COL,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz? ");
	scanf("%d",&FIL);
	printf("Cuantas columnas para la matriz? ");
	scanf("%d",&COL);
	int matriz[FIL][COL];
	int vector[COL];
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			system("cls");
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ: ",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	
	for(c=0;c<COL;c++)
	{
		system("cls");
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
		printf("\n\nLa columna %d de la matriz es igual al vector.",pc);
	}
	else
	{
		printf("\n\nNinguna columna es igual al vector.");
	}
}

main()
{
	int opcm=4,opcp=50;
	while(opcm<0 || opcm>3)
	{
		system("cls");
		system("color 2");
		printf("\n\t\t\t\t**********************************************");
		printf("\n\t\t\t\t*                                            *");
		printf("\n\t\t\t\t*         Aguilar Villarreal Edgar           *");
		printf("\n\t\t\t\t*                                            *");
		printf("\n\t\t\t\t*  Fundamentos de Programacion Estructurada  *");
		printf("\n\t\t\t\t*                                            *");
		printf("\n\t\t\t\t**********************************************");
		printf("\n\n\n\t\tAVANCES DE POGRAMACION.");
		printf("\n\nSeleccione el avance de programas que decea analaizar.");
		printf("\n\n\t1) Avance 1. \n\n\t2) Avance 2. \n\n\t3) Avance 3. \n\n PRESIONE 0 PARA SALIR.");
		
		printf("\n\nSu opcion es: ");
		scanf("%d",&opcm);
	
	
		if(opcm==1)
		{
			while(opcp<0 || opcp>16)
			{
			system("cls");
			system("color 3");
			printf("\t\tAVANCE 1 DE PROGRAMACION.");
			printf("\n\nSeleccione el programa que decea analaizar.");
			printf("\n\n1) Programa 1. \n\n2) Programa 2. \n\n3) Programa 3.\n\n4) Programa 4.\n\n5) Programa 5.\n\n6) Programa 6.\n\n7) Programa 7.\n\n8) Programa 8.\n\n9) Programa 9.\n\n10) Programa 10.\n\n11) Programa 11. \n\n12) Programa 12. \n\n13) Programa 13.\n\n14) Programa 14.\n\n15) Programa 15.\n\n16) Programa 16. \n\n PRESIONE 0 PARA SALIR.");
			printf("\n\nSu opcion es: ");
			scanf("%d",&opcp);
			
				if(opcp==1)
				{
					system("cls");
					printf("\t\tPROGRAMA 1 DEL PRIMER AVANCE.\n\n");
					programa11();
					getch();
				}
				if(opcp==2)
				{
						system("cls");
					printf("\t\tPROGRAMA 2 DEL PRIMER AVANCE.\n\n");
					programa12();
					getch();
				}
				
				if(opcp==3)
				{
					system("cls");
					printf("\t\tPROGRAMA 3 DEL PRIMER AVANCE.\n\n");
					programa13();
					getch();
				}
				
				if(opcp==4)
				{
					system("cls");
					printf("\t\tPROGRAMA 4 DEL PRIMER AVANCE.\n\n");
					programa14();
					getch();
				}
				
				if(opcp==5)
				{
					system("cls");
					printf("\t\tPROGRAMA 5 DEL PRIMER AVANCE.\n\n");
					programa15();
					getch();
				}
				
				if(opcp==6)
				{
					system("cls");
					printf("\t\tPROGRAMA 6 DEL PRIMER AVANCE.\n\n");
					programa16();
					getch();
				}
				
				if(opcp==7)
				{
					system("cls");
					printf("\t\tPROGRAMA 7 DEL PRIMER AVANCE.\n\n");
					programa17();
					getch();
				}
				
				if(opcp==8)
				{
					system("cls");
					printf("\t\tPROGRAMA 8 DEL PRIMER AVANCE.\n\n");
					programa18();
					getch();
				}
				
				if(opcp==9)
				{
					system("cls");
					printf("\t\tPROGRAMA 9 DEL PRIMER AVANCE.\n\n");
					programa19();
					getch();
				}
				
				if(opcp==10)
				{
					system("cls");
					printf("\t\tPROGRAMA 10 DEL PRIMER AVANCE.\n\n");
					programa110();
					getch();
				}
				
				if(opcp==11)
				{
					system("cls");
					printf("\t\tPROGRAMA 11 DEL PRIMER AVANCE.\n\n");
					programa111();
					getch();
				}
				
				if(opcp==12)
				{
					system("cls");
					printf("\t\tPROGRAMA 12 DEL PRIMER AVANCE.\n\n");
					programa112();
					getch();
				}
				
				if(opcp==13)
				{
					system("cls");
					printf("\t\tPROGRAMA 13 DEL PRIMER AVANCE.\n\n");
					programa113();
					getch();
				}
				
				if(opcp==14)
				{
					system("cls");
					printf("\t\tPROGRAMA 14 DEL PRIMER AVANCE.\n\n");
					programa114();
					getch();
				}
				
				if(opcp==15)
				{
					system("cls");
					printf("\t\tPROGRAMA 15 DEL PRIMER AVANCE.\n\n");
					programa115();
					getch();
				}
				
				if(opcp==16)
				{
					system("cls");
					printf("\t\tPROGRAMA 16 DEL PRIMER AVANCE.\n\n");
					programa116();
					getch();
				}
				
				if(opcp==0)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tSISTEMA FINALIZADO.");
					getch();
				}
				if(opcp<0 || opcp>16)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tOpcion no valida... INTENTELO NUEVAMENTE!!");
					getch();
				}
			}
		}
	
		if (opcm==2)
		{
			while(opcp<0 || opcp>10)
			{
			system("cls");
			system("color 5");
			printf("\t\tAVANCE 2 DE PROGRAMACION.");
			printf("\n\nSeleccione el programa que decea analaizar.");
			printf("\n\n1) Programa 1. \n\n2) Programa 2. \n\n3) Programa 3.\n\n4) Programa 4.\n\n5) Programa 5.\n\n6) Programa 6.\n\n7) Programa 7.\n\n8) Programa 8.\n\n9) Programa 9.\n\n10) Programa 10. \n\n PRESIONE 0 PARA SALIR.");
			printf("\n\nSu opcion es: ");
			scanf("%d",&opcp);
				
				if(opcp==1)
				{
					system("cls");
					printf("\t\tPROGRAMA 1 DEL SEGUNDO AVANCE.\n\n");
					programa21();
					getch();
				}
				
				if(opcp==2)
				{
					system("cls");
					printf("\t\tPROGRAMA 2 DEL SEGUNDO AVANCE.\n\n");
					programa22();
					getch();
				}
				
				if(opcp==3)
				{
					system("cls");
					printf("\t\tPROGRAMA 3 DEL SEGUNDO AVANCE.\n\n");
					programa23();
					getch();
				}
				
				if(opcp==4)
				{
					system("cls");
					printf("\t\tPROGRAMA 4 DEL SEGUNDO AVANCE.\n\n");
					programa24();
					getch();
				}
				
				if(opcp==5)
				{
					system("cls");
					printf("\t\tPROGRAMA 5 DEL SEGUNDO AVANCE.\n\n");
					programa25();
					getch();
				}
				
				if(opcp==6)
				{
					system("cls");
					printf("\t\tPROGRAMA 6 DEL SEGUNDO AVANCE.\n\n");
					programa26();
					getch();
				}
				
				if(opcp==7)
				{
					system("cls");
					printf("\t\tPROGRAMA 7 DEL SEGUNDO AVANCE.\n\n");
					programa27();
					getch();
				}
				
				if(opcp==8)
				{
					system("cls");
					printf("\t\tPROGRAMA 8 DEL SEGUNDO AVANCE.\n\n");
					programa28();
					getch();
				}
				
				if(opcp==9)
				{
					system("cls");
					printf("\t\tPROGRAMA 9 DEL SEGUNDO AVANCE.\n\n");
					programa29();
					getch();
				}
				
				if(opcp==10)
				{
					system("cls");
					printf("\t\tPROGRAMA 10 DEL SEGUNDO AVANCE.\n\n");
					programa210();
					getch();
				}	
				
				if(opcp==0)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tSISTEMA FINALIZADO.");
					getch();
				}
				if(opcp<0 || opcp>10)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tOpcion no valida... INTENTELO NUEVAMENTE!!");
					getch();
				}	
			}
		}
		if(opcm==3)
		{
			while(opcp<0 || opcp>36)
			{
				system("cls");
				system("color 4");
				printf("\t\tAVANCE 3 DE PROGRAMACION.");
				printf("\n\nSeleccione el programa que decea analaizar.");
				printf("\n\n1) Programa 1. \n\n2) Programa 2. \n\n3) Programa 3.\n\n4) Programa 4.\n\n5) Programa 5.\n\n6) Programa 6.\n\n7) Programa 7.\n\n8) Programa 8.\n\n9) Programa 9.\n\n10) Programa 10.\n\n11) Programa 11. \n\n12) Programa 12. \n\n13) Programa 13.\n\n14) Programa 14.\n\n15) Programa 15.\n\n16) Programa 16.\n\n17) Programa 17.\n\n18) Programa 18.\n\n19) Programa 19.\n\n20) Programa 20.\n\n21) Programa 21. \n\n22) Programa 22. \n\n23) Programa 23.\n\n24) Programa 24.\n\n25) Programa 25.\n\n26) Programa 26.\n\n27) Programa 27.\n\n28) Programa 28.\n\n29) Programa 29.\n\n30) Programa 30.\n\n31) Programa 31. \n\n32) Programa 32. \n\n33) Programa 33.\n\n34) Programa 34.\n\n35) Programa 35.\n\n36) Programa 36. \n\n PRESIONE 0 PARA SALIR.");
				printf("\n\nSu opcion es: ");
				scanf("%d",&opcp);
			
			    if(opcp==1)
				{
					system("cls");
					printf("\t\tPROGRAMA 1 DEL TERCER AVANCE.\n\n");
					programa31();
					getch();
				}
				
				if(opcp==2)
				{
					system("cls");
					printf("\t\tPROGRAMA 2 DEL TERCER AVANCE.\n\n");
					programa32();
					getch();
				}
				
				if(opcp==3)
				{
					system("cls");
					printf("\t\tPROGRAMA 3 DEL TERCER AVANCE.\n\n");
					programa33();
					getch();
				}
				
				if(opcp==4)
				{
					system("cls");
					printf("\t\tPROGRAMA 4 DEL TERCER AVANCE.\n\n");
					programa34();
					getch();
				}
				
				if(opcp==5)
				{
					system("cls");
					printf("\t\tPROGRAMA 5 DEL TERCER AVANCE.\n\n");
					programa35();
					getch();
				}
				
				if(opcp==6)
				{
					system("cls");
					printf("\t\tPROGRAMA 6 DEL TERCER AVANCE.\n\n");
					programa36();
					getch();
				}
				
				if(opcp==7)
				{
					system("cls");
					printf("\t\tPROGRAMA 7 DEL TERCER AVANCE.\n\n");
					programa37();
					getch();
				}
				
				if(opcp==8)
				{
					system("cls");
					printf("\t\tPROGRAMA 8 DEL TERCER AVANCE.\n\n");
					programa38();
					getch();
				}
				
				if(opcp==9)
				{
					system("cls");
					printf("\t\tPROGRAMA 9 DEL TERCER AVANCE.\n\n");
					programa39();
					getch();
				}
				
				if(opcp==10)
				{
					system("cls");
					printf("\t\tPROGRAMA 10 DEL TERCER AVANCE.\n\n");
					programa310();
					getch();
				}
				
				if(opcp==11)
				{
					system("cls");
					printf("\t\tPROGRAMA 11 DEL TERCER AVANCE.\n\n");
					programa311();
					getch();
				}
				
				if(opcp==12)
				{
					system("cls");
					printf("\t\tPROGRAMA 12 DEL TERCER AVANCE.\n\n");
					programa312();
					getch();
				}
				
				if(opcp==13)
				{
					system("cls");
					printf("\t\tPROGRAMA 13 DEL TERCER AVANCE.\n\n");
					programa313();
					getch();
				}
				
				if(opcp==14)
				{
					system("cls");
					printf("\t\tPROGRAMA 14 DEL TERCER AVANCE.\n\n");
					programa314();
					getch();
				}
				
				if(opcp==15)
				{
					system("cls");
					printf("\t\tPROGRAMA 15 DEL TERCER AVANCE.\n\n");
					programa315();
					getch();
				}
				
				if(opcp==16)
				{
					system("cls");
					printf("\t\tPROGRAMA 16 DEL TERCER AVANCE.\n\n");
					programa316();
					getch();
				}
				
				if(opcp==17)
				{
					system("cls");
					printf("\t\tPROGRAMA 17 DEL TERCER AVANCE.\n\n");
					programa317();
					getch();
				}
				
				if(opcp==18)
				{
					system("cls");
					printf("\t\tPROGRAMA 18 DEL TERCER AVANCE.\n\n");
					programa318();
					getch();
				}
				
				if(opcp==19)
				{
					system("cls");
					printf("\t\tPROGRAMA 19 DEL TERCER AVANCE.\n\n");
					programa319();
					getch();
				}
				
				if(opcp==20)
				{
					system("cls");
					printf("\t\tPROGRAMA 20 DEL TERCER AVANCE.\n\n");
					programa320();
					getch();
				}
				
				if(opcp==21)
				{
					system("cls");
					printf("\t\tPROGRAMA 21 DEL TERCER AVANCE.\n\n");
					programa321();
					getch();
				}
				
				if(opcp==22)
				{
					system("cls");
					printf("\t\tPROGRAMA 22 DEL TERCER AVANCE.\n\n");
					programa322();
					getch();
				}
				
				if(opcp==23)
				{
					system("cls");
					printf("\t\tPROGRAMA 23 DEL TERCER AVANCE.\n\n");
					programa323();
					getch();
				}
				
				if(opcp==24)
				{
					system("cls");
					printf("\t\tPROGRAMA 24 DEL TERCER AVANCE.\n\n");
					programa324();
					getch();
				}
				
				if(opcp==25)
				{
					system("cls");
					printf("\t\tPROGRAMA 25 DEL TERCER AVANCE.\n\n");
					programa325();
					getch();
				}
				
				if(opcp==26)
				{
					system("cls");
					printf("\t\tPROGRAMA 26 DEL TERCER AVANCE.\n\n");
					programa326();
					getch();
				}
				
				if(opcp==27)
				{
					system("cls");
					printf("\t\tPROGRAMA 27 DEL TERCER AVANCE.\n\n");
					programa327();
					getch();
				}
				
				if(opcp==28)
				{
					system("cls");
					printf("\t\tPROGRAMA 28 DEL TERCER AVANCE.\n\n");
					programa328();
					getch();
				}
				
				if(opcp==29)
				{
					system("cls");
					printf("\t\tPROGRAMA 29 DEL TERCER AVANCE.\n\n");
					programa329();
					getch();
				}
				
				if(opcp==30)
				{
					system("cls");
					printf("\t\tPROGRAMA 30 DEL TERCER AVANCE.\n\n");
					programa330();
					getch();
				}
				
				if(opcp==31)
				{
					system("cls");
					printf("\t\tPROGRAMA 31 DEL TERCER AVANCE.\n\n");
					programa331();
					getch();
				}
				
				if(opcp==32)
				{
					system("cls");
					printf("\t\tPROGRAMA 32 DEL TERCER AVANCE.\n\n");
					programa332();
					getch();
				}
				
				if(opcp==33)
				{
					system("cls");
					printf("\t\tPROGRAMA 33 DEL TERCER AVANCE.\n\n");
					programa333();
					getch();
				}
				
				if(opcp==34)
				{
					system("cls");
					printf("\t\tPROGRAMA 34 DEL TERCER AVANCE.\n\n");
					programa334();
					getch();
				}
				
				if(opcp==35)
				{
					system("cls");
					printf("\t\tPROGRAMA 35 DEL TERCER AVANCE.\n\n");
					programa335();
					getch();
				}
				
				if(opcp==36)
				{
					system("cls");
					printf("\t\tPROGRAMA 36 DEL TERCER AVANCE.\n\n");
					programa336();
					getch();
				}
					if(opcp==0)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tSISTEMA FINALIZADO.");
					getch();
				}
				if(opcp<0 || opcp>36)
				{
					system("cls");
					system("color 9");
					printf("\n\n\n\n\n\t\t\tOpcion no valida... INTENTELO NUEVAMENTE!!");
					getch();
				}
			}	
		}
		
		if(opcm==0)
		{
			system("cls");
			system("color 9");
			printf("\n\n\n\n\n\t\t\tSISTEMA FINALIZADO.");
			getch();
		}
		if(opcm<0 || opcm>3)
		{
			system("cls");
			system("color 9");
			printf("\n\n\n\n\n\t\t\tOpcion no valida... INTENTELO NUEVAMENTE!!");
			getch();
		}
	}
}
