#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#define N 3

int programa1();
int programa1()

{
	/*DADA UNA CANTIDAD EN PESOS OBTENER LA EQUIVALENCIA EN DOLARES 
	ASUMIENDO QUE LA UNIDAD CAMBIRA ES UN DATO DESCONOIDO*/
	
	float p,d,valor_dolar;

printf("\n\n\tDADA UNA CANTIDAD EN PESOS OBTENER LA EQUIVALENCIA EN DOLARES\n ASUMIENDO QUE LA UNIDAD CAMBIRA ES UN DATO DESCONOIDO");
printf("\n\ningresa la cantidad en pesos");
scanf("%f",&p);
printf("\n\ningresa la cantidad en dolares");
scanf("%f",&d);
valor_dolar=p/d;
printf("\n\n\tel valor en dolares es:%f",valor_dolar);
getch();
return 0;
}


int programa2();
int programa2()	
	
{
	
	/*LA PERECION EL VILUMEN Y LA TEMPERATURA DE UNA MASA DE 
	ARIE SE RELACIONAN POR LA FORMULA MAS=(PRECION* VOLUMEN )/(0.37*(TEMPERRATURA+460))
	CALCULAR LA MASA SEGUN SU PRECION VOLUMEN Y TEMPERATURA*/
	
int p,v,t;
float operacion_1,operacion_2,operacion_3,masa;

printf("\n\tLA PERECION EL VILUMEN Y LA TEMPERATURA DE UNA MASA DE ARIE SE RELACIONAN POR\n LA FORMULA MAS=(PRECION* VOLUMEN )/(0.37*(TEMPERRATURA+460))\nCALCULAR LA MASA SEGUN SU PRECION VOLUMEN Y TEMPERATURA");
printf("\n\ningresa presion");
scanf("%d",&p);
printf("\n\ningresa volmen");
scanf("%d",&v);
printf("\n\ningresa temperatura");
scanf("%d",&t);
operacion_1=p*v;
operacion_2=t+460;
operacion_3=0.37*operacion_2;
masa=operacion_1/operacion_3;
printf("\n\n\tla masa es:%f",masa);
getch();
return 0;
}
      	  
	
int programa3();
int programa3()		
{

    /*ESCRIBE UN PROGRAMA QUE OBTENGA TRES NUMEROS LOS 
    ALMACENE EN VARIABLES Y LUEGO CALCULE Y MUESTRE UN REPORTE
    SOBRE SU SUMA Y SU PROMEDIO*/
	
int a,b,c,suma;
      float promedio;
      
printf("\nESCRIBE UN PROGRAMA QUE OBTENGA TRES NUMEROS LOS ALMACENE EN VARIABLES\n Y LUEGO CALCULE Y MUESTRE UN REPORTESOBRE SU SUMA Y SU PROMEDIO");	  
	  printf("\n\ntroduce 1er numero");
      scanf("%d",&a);
      printf("\nintroduce 2do numero");
      scanf("%d",&b);
      printf("\nintroduce 3er numero");
      scanf("%d",&c);
      suma=a+b+c;
      printf("\nla suma es:%d",suma);
      promedio=suma/3;
      printf("\nel promedio es:%f",promedio);
      getch ();
      
	  return 0;
      }	
	
	
int programa4();
int programa4()
{

	   /*CALCULAR EL NUMERO DE OULSACINES QUE UNA PERSONA 
	DEBE TENER POR CADA 10 SEGUNDOS DE EJERCICIO SI LA FORMULA 
	ES : NUM_PULSACIONES=(20-EDAD)/10.*/
		
	int num_pul,edad;
      
  printf("\n\nCALCULAR EL NUMERO DE OULSACINES QUE UNA PERSONA DEBE\n TENER POR CADA 10 SEGUNDOS DE EJERCICIO SI LA FORMULA ES\n : NUM_PULSACIONES=(20-EDAD)/10.");    
	  printf("\n\ningresa edad");
      scanf("%d",&edad);
      num_pul=(220-edad)/10;
      printf("\nel numero de pulsaciones:%d",num_pul);
      getch ();
      return 0;
      }
      
	
int programa5();
int programa5()
{
	
	/*CALCULAR EL NUEVO SALARIO DE UN OBRERO SI OBTUVO UN 
	INCREMENTO DEL 25% ANTERIOR*/
	
	float salario,nuevo_salario;
      
printf("\nCALCULAR EL NUEVO SALARIO DE UN OBRERO SI OBTUVO\n UN INCREMENTO DEL 25% ANTERIOR");	  
	  printf("\n\nintroduce salario");
      scanf("%f",&salario);
      nuevo_salario=salario*1.25;
      printf("\n\nel nuevo salario es:%f",nuevo_salario);
      getch ();
      return 0;
      }
	
	
int programa6();
int programa6()	
{

    /*EN UN HOSPITAL EXISTENTRE SAREAS GINECOLOGIA PEDIATRIA
    Y TRAUMATOLOGIA. EL PRESUPUESTO ANUAL DEL HOSPITAL SE REPARTE
    DE LA SIGUIENTE MANERA: GINECOLOGIA= 40%, PEDIATRIA=30%
	TRAUMATOLOGIA=30%*/   
	
	
	float g,p,t,mon_men,operacion_1,operacion_2,operacion_3;
      
printf("\nEN UN HOSPITAL EXISTENTRE SAREAS GINECOLOGIA PEDIATRIAY TRAUMATOLOGIA.\n EL PRESUPUESTO ANUAL DEL HOSPITAL SE REPARTEDE LA SIGUIENTE MANERA:\n GINECOLOGIA= 40%, PEDIATRIA=30%TRAUMATOLOGIA=30%");	  
	  
	  printf("\n\nintroduce monto mensual");
      scanf("%f",&mon_men);
      operacion_1=mon_men*.40;
      printf("\nla cantidad de ginecologia es:%f",operacion_1);
      operacion_2=mon_men*.30;
      printf("\nla cantidad de pediatria es:%f",operacion_2);
      operacion_3=mon_men*.30;
            printf("\nla cantidad de traumatologia es:%f",operacion_3);
            mon_men= operacion_1+ operacion_2+ operacion_3;
            printf("\nMonto mensual es:%f",mon_men);
            getch ();
            return 0;
            }
	
	
int programa7();
int programa7()
{
     /*DESDE IN DISPOSITIVO DE E/S SE LEEEN TRES NUMEROS INDIQUE 
	 CUAL DE ELLOS ES LA SUMA DE LOS OTROS DOS*/ 
	

int a,b,c;
      
printf("\nDESDE IN DISPOSITIVO DE E/S SE LEEEN TRES NUMEROS INDIQUE\n CUAL DE ELLOS ES LA SUMA DE LOS OTROS DOS");	  
	  printf("\n\nnumero:");
      scanf("%d",&a);
      printf("\nnumero:");
      scanf("%d",&b);
      printf("\nnumero:");
      scanf("%d",&c);
      if(a>b&&a>c)
      {
      printf("\n\nel numero de la suma es:%d",a);
      }
    else
	if(b>a&&b>c)
    {
    printf("\n\nel numero de la suma es:%d",b);
    }
    else
    if(c>a&&c>b)
    {
    printf("\n\nel numero de la suma es:%d",c);
    }
    getch ();
    return 0;
    }
                             
             
int programa8();
int programa8()

{

   /*UN OBRERO NECESITA CALCULAR SU SALARIO SEMANAL EL
   SE OBTIENE DE LA SIGUIENTE MANERA:
   SI TRABAJA 40 HORAS O MENOS SE LE PAGA $20 POR HORA
   SI TRABAJA MAS DE 40 HORAS SE LE PAGA $20 POR CADA UNA DE 
   LAS PRIMERAS 40 HORAS Y 30 POR CADA UNA HORA EXTRA*/
   
   int h_tra,salario,hex;
	float total_1,total_2,total;

printf("\nUN OBRERO NECESITA CALCULAR SU SALARIO SEMANAL EL\nSE OBTIENE DE LA SIGUIENTE MANERA:\nSI TRABAJA 40 HORAS O MENOS SE LE PAGA $20 POR HORA\nSI TRABAJA MAS DE 40 HORAS SE LE PAGA $20 POR CADA UNA DE \nLAS PRIMERAS 40 HORAS Y 30 POR CADA UNA HORA EXTRA");	
	
	
	printf("\n\n\nintroduce las horas trabajadas\n\t");
	scanf("%d",&h_tra);
	if(h_tra<40)
	{
		salario=20*h_tra;

	printf("\n\nsegun las horas su pago es:%d",salario);
}
else
if(h_tra>40)
hex=h_tra-40;
total_1=40*20;
total_2=h_tra*30;
total=total_1+total_2;
printf("\n\nlas hora pagadas con tiempo extra es\n\t:%f",total);
getch();
return 0;
}
	 
   
   
int programa9();
int programa9()  
{

   /*DISEÑA UN PROGRAMA QUE LEA 5 NUMEROS ENTEROS ALEATORIOS 
   IMPRIMA LOS INGRESADOS Y ADEMAS LOS MUESTRES EN FORMA ASCENDENTE*/
   
   
int num=0;

printf("\nDISEÑA UN PROGRAMA QUE LEA 5 NUMEROS ENTEROS ALEATORIOS \nIMPRIMA LOS INGRESADOS Y ADEMAS LOS MUESTRES EN FORMA ASCENDENTE");

printf("\n\nCuantos Numeros? ");
scanf(" %i",&num);
int vec[num];
for(int a=0;a<num;a++){

printf("\n\nTeclea Numero %i de %i:",(a+1),num);
scanf(" %i",&vec[a]);
}

int aux2;

for(int b2=0;b2<num;b2++){
for(int b=0;b<num;b++){

      if(vec[b]>vec[b+1]){
      int aux=vec[b];
	   vec[b]=vec[b+1];
	   vec[b+1]=aux;
        
	  }}


}

for(int b=0;b<num;b++){

    
printf("\n%i",vec[b]);
}



getch();
}
 
   
int programa10();
int programa10() 
{
	
  /*UNA PERSONA ENFERMA QUE PESA 70 KG SE ENCUENTRA EN REPOSO Y DESEA
  SABER CUANTAS CALORIAS QUEMA SU CUERPO DURANTE TODO EL TIEMPO QUE 
  RALICE ESA ACTIVIDADLAS ACTIVIDADES QUE REALIZA SON DORMIR Y SENTADO
  LOS DATOS SON QUE ESTANDO DURMIENDO CONSUME 1.08CALORIAS POR MINUTO 
  Y SENTADO 1.66 CALORIAS POR MINUTO*/
  
  
  int t,actividad;
      float calorias; 
      
printf("\nUNA PERSONA ENFERMA QUE PESA 70 KG SE ENCUENTRA EN REPOSO Y DESEA\nSABER CUANTAS CALORIAS QUEMA SU CUERPO DURANTE TODO EL TIEMPO QUE \nRALICE ESA ACTIVIDADLAS ACTIVIDADES QUE REALIZA SON DORMIR Y SENTADO\nLOS DATOS SON QUE ESTANDO\n DURMIENDO CONSUME 1.08CALORIAS POR MINUTO \nSENTADO 1.66 CALORIAS POR MINUTO");	  
	  
	    printf("\n\ndame tu tiempo");
      scanf("%d",&t);
     
			if(calorias=1.08)
            {
            
            calorias=1.08*t;
             printf("\ncalorias que consume tu cuerpo dormido es:%f",calorias);
        }
			else
			
            
            printf("\nsentado_2");
             calorias=1.66*t;
             printf("\n\ncalorias que consume tu cuerpo sentado es:%f",calorias);
            
getch();
return 0;
}             
      

   
int programa11();
int programa11()
{
   /*UN AÑO BISIESTO SI ES MULTIPLO DE 4 PERO NO DE 100PERO SI DE 400
   EJEMPLO (1984 ES BISIETSO, 2000ES BISIESTO, 1800 NO ES BISIESTO)
   DETIRMINE UN PROGRAMA QUE PERMITA SABER SI UN AÑO INTRODUCIDO 
   ES BISIESTO O NO.*/
   
   
   int num1;

printf("UN AÑO BISIESTO SI ES MULTIPLO DE 4 PERO NO DE 100PERO SI DE 400\nEJEMPLO (1984 ES BISIETSO, 2000ES BISIESTO, 1800 NO ES BISIESTO)\nDETIRMINE UN PROGRAMA QUE PERMITA SABER SI UN AÑO INTRODUCIDO \nES BISIESTO O NO.");

printf("\n\nIntroduce el año: ");
scanf("%d",&num1);




if((num1%4==0) && !(num1%100==0))
{
    printf("\n\nEl año es bisiesto");
}





else if (num1%400==0)
{
    printf("\n\nEl año es bisiesto");
}


else 
{
    printf("\n\nEl año NO es bisiesto");
}
getch();
return 0;

}
   
   
int programa12();
int programa12()

{


  /*CALCULAR EL PROMEDIO DE UN ALUMNO SI DECIR SI ESTA EXCENTO DE LA 
  MATEIA SI SU PROMEDIO ES MAYOR  DE 8.5 SI NO DECIR QUE PRESENTA
  EXAMEN FINAL*/
  
  int p1,p2,p3,p;
  
printf("\nCALCULAR EL PROMEDIO DE UN ALUMNO SI DECIR SI ESTA EXCENTO DE LA \nMATEIA SI SU PROMEDIO ES MAYOR  DE 8.5 SI NO DECIR QUE PRESENTA\nEXAMEN FINAL");  
  printf("\n\nintroduce la calificacion del primer parcial\n\t");
	scanf("%d",&p1);
	printf("\n\ncaptura la calificacion del segundo parcial\n\t");
	scanf("%d",&p2);
	printf("\n\nintroduce la calificacion del tercer parcial\n\t");
	scanf("%d",&p3);
	int (p>0);
	p=(p1+p2+p3)/3;
	if(p>=8.5)
	{
		printf("\nexento de la materia");
	}
	else
	
		printf("presenta examen");
	
	getch();
	
	}
   
   
//SEGUNDA SERIE DE EJERCICIOS

int SER2programa1();
int SER2programa1()    

{

int i;
double a[3], num;
for (i=0; i<3; i++)
{

printf("\nCALCULA LOS CUBOS Y CUADRADOS DE LOS NUMEROS INGRESADOS");
printf("\n\n\n Ingresa un numero:");
scanf("%lf", &num);
a[i]=num;
}
printf("\n\nLos cubos de los numeros ingresados son:\n");
for (i=0; i<3; i++){
a[i]=pow(a[i],3);
printf("\n\t%.0lf\n",a[i]);

}

printf("\n\nLos cuadrados de los numeros ingresados son:\n");
for (i=0; i<3; i++){
a[i]=num* num;
printf("\n\t%.0lf\n",a[i]);

}
printf("\n");
getch();
return 0;
}



int SER2programa2();
int SER2programa2()    

{
float V[90], suma=0; 
int c, n; 
printf("\nSACAR PROMEDIO DE CIERTAS CANTIDAD DE NUMEROS INTRODUCIDOSPOR EL USUARIO");
printf(" \n\n Cuantos numeros \n " ); 
scanf("%d", &n); 
for(c=0; c<n; c++) 
{ 
printf("\n\nNUMERO %d: ", c+1); 
scanf("%f",&V[c]); 
suma+=V[c]; 
} 
printf("\n\nPROMEDIO IGUAL A %.2f ", suma/n ); 

getch();
return 0; 
} 



int SER2programa3();
int SER2programa3() 
{

char c, palabra[21]; 
int i; 

printf("\n\nPROGRMA EN EL CUAL SE INTRODUCE UNA PALABRA DE MENOS DE 20 LETRAS\nHE IMPRIMA POR PANTALLA EL NUMERO DE LETRAS DE ESA PALABRA\nY TAMBIEN LA ESCRIBA AL REVES");
printf("\n\n\nTeclea una palabra de menos de 20 letras:\n\n"); 
scanf("%s", palabra); 
i=0; 
while (palabra[i++]!=0); 
printf("\n\n%s tiene %d letras.\n", palabra, i-1); 
printf("\n\n%s escrita al reves es: ", palabra); 
while (i>0) printf("%c", palabra[--i]); 
printf("\n\n"); 
getch();
getch();
} 


int SER2programa4();
int SER2programa4() 

{

char c;

printf("\nPROGRMAM QUE SOLO PERMITE INTRODUCIR LOS CARACTERES S, N");            
printf("\n\nIntroduzca un carácter:");
scanf("%c",&c);
    
if (c=='s' || c=='n' )
{
printf("\n\nEs correcto\n");
}
else
{
printf("\n\nEs incorrecto\n");
}
    
getch();       
getch();
}


int SER2programa5();
int SER2programa5() 

{

int op,c=5,alab,retir,hrd,suel;
c=5;

printf("\nPROGRAMA QUE TIENE COMO OPCIONES CONSULTAS RETIROS PARA UNTRABAJADOR\nLABORANDO EN UNA EMPRESA PARA SABER SU SALARIO SI ES DE\n$150POR CADA HORA QUE TRABAJA");
printf("\n\n[1] consultas");
printf("\n\n[2] retiros\n\n");
printf("\n\n[3] salir\n\n");
printf("\n\neligue la opcion\n\n");
scanf("%d",&op);

switch(op)
{
	case 1:
		printf("\n\tteclea las horas trabajadas del dia\n\t");
		scanf("%d",&hrd);
			suel=150*hrd;
			printf("\n\n\nel sueldo del dia es: %d\n\n\n",suel);
		getch();
		break;
		
	case 2:
	printf("\n\nopcion de retiro\n\n");
	printf("\nsu retiro es los años que laboro enb la empresa por el suleldo del dia que son $150\n\n\t\t");
	printf("\n\nintrodusca los años laborados\n\n");
	scanf("%d",&alab);
	retir=150*6*alab;
	printf("\n\nsu retiro es de: %d\t\t",retir);
	
	getch();
	break;
	
	case 3:
	printf("\n\nabandona el sistema");
	c=1;
	getch();
	break;
	default: printf("\n\nop. invalida");
}
getch();
}
  
  
int SER2programa6();
int SER2programa6()  
{

int c,op,ca,sm,c2,com;
float pr,sb,creal;

printf("\nPROGRAMA EL CUAL PERMITE SABER LAS VENTAS Y LAS COMPRAS DE UN\nESTABLECIMIENTO DE ROPA SI UN SUETER TIENE VALOR\n$320Y LAS CHAMARRAS $500"); 
  printf("\n\n[1] ventas\n\n");
		printf("\n\n[2] compras\n\n");
		printf("\n\n[3] salir\n\n");

		printf("\n\nseleccione la opcion\n\n");
		scanf("%d",&op);
	
	switch (op)
	{
	case 1:
		c2=1; sm=0;
		
	while (c2<=1)
	{
		printf("\n\nprecio del producto\n\n");
		scanf("%f",&pr);
		printf("\n\ncnatidad a comprar del producto\n\n");
		scanf("%d",&ca);
		
		c2=c2+1;
		sb=pr*ca;
		sm=sm+sb;
	}	
	 printf("\n\nl pago total de la vneta es: %d\n\n", sm);
	 getch();
	 break;
	 }
	 

	
	printf("\n\ncompras\n\n");
	
	printf("eliege el producto");
	printf("\n\n[1]sueter\n\n");
	printf("\n\n[2]pantalon\n\n");
	printf("\n\n[3]chamarra\n\n");

printf("\n\nseleccione la opcion\n\n");
		scanf("%d",&op);
	switch (op)	
	{
	case 1:
	printf("\n\nintroduce las compras del sueter");	
	scanf("%d",&com);
	creal=com*250;
	printf("\n\nlas compras por el producto del sueter fueron: %f",creal);
	getch();
	break;

	case 2:
	printf("\n\nintroduce las compras del pantalon");	
	scanf("%d",&com);
	creal=com*320;
		printf("\n\nlas compras por el producto del pantalon fueron: %f",creal);
    	getch();
	break;	
	
	case 3:	
		printf("\n\nintroduce las compras de las chamarras");	
	scanf("%d",&com);
		creal=com*500;
		printf("\n\nlas compras por el producto de las chamarras fueron: %f",creal);	
		getch();
	break;	
	
		
}

getch();
return 0;
}


//ERORR PROGRAMA
int SER2programa7();
int SER2programa7()  
{

	

int r;

void circulo(int m);

printf("\n\nPROGRAMA EL CUAL CALCULA EL RADIO DE UN CIRCULO Y LA LONGITUD");
printf("\n\ningrese el valor del radio\t");
scanf("%d",&r);
circulo(r);    
}
void circulo(int m)      

{float pi;

pi=3.1416;

printf("\n\nel area del radio ingresado:  %f \n",pi*m*m);

printf("\n\nla longitud del radio ingresado: %f\t",2*pi*m);
getch ();

}


int SER2programa8();
int SER2programa8()  
{
	
 int num1,num2,num3;
    
	printf("PROGRAMA EL CUAL PIDE TRES NUMEROS Y DETECTE\n SI SE HAN INTRODUCIDO EN ORDEN CRECIENTE");        
    printf("\n\nIntroduzca número 1:");
    scanf("%d",&num1);

    printf("\n\nIntroduzca número 2:");
    scanf("%d",&num2);

 printf("\n\nIntroduzca número 3:");
scanf("%d",&num3);

if (num1<num2)
 {
  if (num2<num3)
 {
  printf("\n\nOrden creciente");
}
else

  printf("\n\nNo están introducidos en orden creciente ");         

  getch();      
    return 0;  
}
}

	
	

int SER2programa9();
int SER2programa9()  
{
	
int num=0;

printf("\nPROGRAMA QUE LOS NUMROS INGRESADOS Y MUESTRE ALA FORMA ACENDENTE");
printf("\n\nCuantos Numeros? ");
scanf(" %i",&num);
int vec[num];
for(int a=0;a<num;a++){

printf("\n\nTeclea Numero %i de %i:",(a+1),num);
scanf(" %i",&vec[a]);
}

int aux2;

for(int b2=0;b2<num;b2++){
for(int b=0;b<num;b++){

      if(vec[b]>vec[b+1]){
      int aux=vec[b];
	   vec[b]=vec[b+1];
	   vec[b+1]=aux;
        
	  }}


}

for(int b=0;b<num;b++){

    
printf("\n%i",vec[b]);
}



getch();
}
 
 
 
 
 
int SER2programa10();
int SER2programa10()   
{
int num1,num2,num3;
            
     printf("PROGRMAM EL CUAL TOMA DOS NUMEROS DEL 1 AL 5\n Y  DIGA SI AMBOS SON PARES");    
		 
		    printf("\n\nIntroduzca número 1:");
    scanf("%d",&num1);
    
    printf("\n\nIntroduzca número 2:");
    scanf("%d",&num2);

    printf("\n\nIntroduzca número 3:");
    scanf("%d",&num3);

    if (num1+num2==num3)
    {
         printf("\n\nEl tercer número es la suma de los dos primeros.\n");
    }
    else
    {
         printf("\n\nEl tercer número NO es la suma de los dos primeros.\n");        
    }

   getch();     
    return 0;
}



//TERCERA SERIE DE PROGRAMAS 

int SER3programa1();
int SER3programa1()  

{
	
int d,mes,a;
{
   
printf("\n\tDADA UNA FECHA CON NUMEROS MUESTRA LA FECHA PONIENDO EL MES CON LETRAS\n\t");
   
    printf("\n\nteclea el dia:\n");
    scanf("%d",&d);
printf("\nteclea el mes:\n");
scanf("%d",&mes);
printf("\n\nteclea el anio:\n");
scanf("%d",&a);

printf("\nDia %d de ",d);

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
       printf("  del anio  %d",a);

}  

getch();

}


int SER3programa2();
int SER3programa2()  
{
 int mes;
printf ("\nPROGRAMA QUE PIDE UN NUMERO DE MES Y ESCRIBE LA CANTIDAD DE DIAS QUE TIENE\n\n ");
    printf("Teclea el mes:");
    scanf("%d",&mes);
    
    switch(mes)
    {
    case 1:
    printf("31 dias");
    break;
     
	 case 2:
    printf("28 dias");
	break;
    
	case 3:
    printf("31 dias");
    break;
    
	 case 4:
    printf("31 dias");
    break;
    
	case 5:
    printf("31 dias");
    break;
    
	case 6:
    printf("31 dias");
    break;
    
	case 7:
    printf("31 dias");
    break;
                    
    case 8:
    printf("30 dias");
    break;
                    
    case 9:
    printf("30 dias");
    break;
    
	case 10:
    printf("30 dias");
    break;
    
	case 11:
    printf("30 dias");
    break;
    
	case 12:
    printf("30 dias");
    break;
                    
    default: printf("error MES INVALIDO ");
                    
    }

getch();

}




int SER3programa3();
int SER3programa3()
{

int c,n,suma=0;


printf ("\nPROGRAMA QUE PIDA 10 NUMEROS Y CALCULE Y MUESTRE \n LA SUMA DE TODOS LOS QUE FFUERON PARES");
	for(c=0;c<10;c++)
	{
		printf("\n\nIngresa tu Numero %d: ",c);
		scanf("%d",&n);
		
		if(n%2==0)
		suma+=n;
	}
	printf("\nLa sumatoria de los numeros pares es: %d",suma);


getch();	
}  


int SER3programa4();
int SER3programa4()
{

int vec1[20],suma=0,prom,a;



printf("\n\n\tOBTENER EL PROMEDIO DE CALIFICACIONES DE UN GRUPO DE 20 ESTUDIANTES\n\t");
    
printf ("\n\n**Teclea la 20 calificaciones de los Estudiantes**\n ");
	
	for(a=1;a<20;a++)
	{
    printf ("\nCalifiocaion%d : ",a);
	scanf("%d",&vec1[a]);
	suma=suma+vec1[a];
	}
	prom=suma/20;
	printf("\nEl promedio es :%d",prom);

getch();
}


int SER3programa5();
int SER3programa5()
{
	
int num;
char nu[100]; 
int n,contador=1;
printf("\n\tDADO UN NUMERO DE TIPO ENTERO DECIR CUANTOS DIGITOS TIENE\n");	 
	 
    printf("\nIntroduce un Numero: ");
	scanf("%i",&num);
while(num/10 !=0)
{
    num=num/10;
    contador++;
}
printf("\nDigitos: %i",contador);

getch(); 
}


int SER3programa6();
int SER3programa6()
{
int n;



 printf("\n\t VALIDAR QUE UN NUMERO DADO ESTE EN EL RANGO DE 10 A 20");
		
printf("\nIngrese un numero: ");
scanf("%d",&n);

	if(n>=10 && n<=20)
	{
	printf("\n\nNumero Valido.");
	}
	
else
{
printf("\n\nNumero invalido en el rango indicado.");
}

getch();	
}



int SER3programa7();
int SER3programa7()

{
int f,g,h;             


   
printf("ESCRIBIR UNPROGRAMA EN C QUE LEA TRES NUMEROS\nE INDIQUE EL TIPO DE TRIANGULO\nQUE FORMAN (ISOCELES,EQUILATERO, ESCALEMO).\nCOMPROBAR QUE LOS NUMEROS REALMENTE FORMEN UN TRIANGULO SI NO EMITIR UN ERROR.");   
printf ("\n\n\nEscribe el primer lado");
scanf("%i",&f);
printf ("\n\nEscribe el segundo lado");
scanf("%i",&g);
printf ("\n\nEscribe el tercer lado");                
scanf("%i",&h);
                                                       
printf("\n\n"); 

if ((f+g>h) && (f+h>g) && (g+h)>f)
{
if (f==g && f==h) printf ("\t\tEquilatero"); 
else 

if (f==g || f==h || g==h) printf ("\t\tIsosceles"); 
else printf("\t\tEscaleno");
}
else
printf("\n\nNumeros numeros incorrectos no forman un Triangulo");


getch();
}



int SER3programa8();
int SER3programa8()
{
int x;
float fact=1;


    
printf("\nPROGRAMA QUE LEA UN NUMERO ENTERO POR TECLADO Y QUE CALCULE SU FACTORIAL");	
printf("\n\nEscriba el número: ");
scanf("%d",&x);

while(x>1) 
{

fact*=x--;
}
printf("Factorial =%f",fact);

getch();
}


int SER3programa9();
int SER3programa9()
{


int u, mayor=0;
printf ("\nPROGRAMA QUE LEA UNA SERIE DE NUMEROS POR TECLADO E INDIQUE CUAL ES EL MAYOR ");
printf("\n\n\nTeclear CERO para que el programa se detenga");	
	
	do{
	
		printf ("\n\n Ingersa numero"); 
		scanf ("%i",&u);
		
		if (mayor <u)
		 mayor =u;
		 
	} while (u!=0);
		printf("\n\n\t\tEl numero mayor es %i", mayor);
	
		
getch();	
}
		



int SER3programa10();
int SER3programa10()

{

int n;
double precio, total=0;

printf("\nCREAR UNPROGRAMA EN C QUE LEA CANTIDADES Y \nPRECIOS Y AL FINAL INDIQUE EL TOTAL DE LA FACTURA");	
printf("\n\n\t\tTeclea CERO para indicar el total de las facturas vendidas\n\n\t\t");	
do{
do{
printf("\n\nIntroduzca la cantidad vendida: ");
scanf("%d",&n);

if(n<0) 

printf("\nCantidad no valida");
}while(n<0); 

if (n>0){

printf("\nIntroduzca el precio: ");

do{
scanf("%lf",&precio);

if(precio<0)
 printf("\nPrecio no valido");

else total+=n*precio;

}while(precio<0);
}

}while(n!=0); 

printf("\t\tTotal de la factura vendida = %f", total);

getch();
}




int SER3programa11();
int SER3programa11()
{
int a,d;

printf("\nCREAR UN PROGRAMA QUE ESCRIBA DOS COLUMNAS DE NUMEROS EN LA PRIMERA SE COLOCARAN LOS NUMEROS DEL 1 AL 100\n Y EN LA SUGUNDA LOS NUMEROS DEL 100 AL 1.\n \n");
	
	
for(a=1,d=100;a<=100,d>=1;a++,d--)
{
printf("\n\t %d \t %d",a,d);

}
getch();	
}


int SER3programa12();
int SER3programa12()
{
int  a, res, t;

    
    
printf("\nCREAR EL PROGRAMA TABLA DE MULTIPLICAR QUE ESCRIBA LA TABLA DE MULTIPLICAR DEL 1 AL 15");	
	printf("\n\n\tIntroduce el numero que deseas para multiplicarlo:");
    scanf("%d",&t);
    for(a=1;a<=15;a++)
{    
res=t*a;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",t,a,res);
}


getch ();
}
          

int SER3programa13();
int SER3programa13()
{
int f1=1,f2=1;
int n,cont;
double res=1; 


printf("\n\nCREAR UN PROGRAMA QUE LEA E INDIQUE SU VALOR EN LA SUCECION FIBONACI");
printf("\n\n\t\t**FIBONACI**\n\n\t\t");

do{
printf("Escriba el número: ");
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

getch();	
}


int SER3programa14();
int SER3programa14()
{
int impares,impar=0;

printf("PROGRAMA QUE MUESTRE LOS NUMEROS IMPARES QUE HAY DL 1 AL 100");
    
for(impares=0;impares<100;impares++)
{
if(impares%2!=0)
{
printf("\n\n%d",impares);
impar = impar + 1;
}
}
        
printf("\n\n\n%d Numeros impares que hay desde el 1 al 100",impar);


getch();	
}



int SER3programa15();
int SER3programa15()
{
printf("\nESCRIBA UN PROGRMA QUE IMPRIMA UNA LISTA DE AMIGOS GUARDADOS EN UNA AGENDA\t\t\n");	
struct agenda
{
char nombre[25];
char telefono[10];
int edad;
};
struct agenda
amigos[N]={{"ALEJANDRA","72245434",20},{"ABRAHAM","722547623",18},{"BOB","723456778",18}};
int i;
for (i=0; i<N; ++i)
{
printf("\nAmigo %s\t telefono %s\t edad %d",amigos[i].nombre,
amigos[i].telefono,amigos[i].edad);
}
printf("\n");
}

int SER3programa16();
int SER3programa16()
{
int hola,nomb;


printf("\nESCRIBA UN PROGRAMA QUE TE IMPRIMA UN MENSAJE DE PRESENTACION\n TE PREGUNTE COMO TE LLAMAS Y TE SALUDE");
printf("\n\n\nHola usuario gracias por entrar a este programa de c++ es un gusto tener ainvitados como tu\n\n");
  
  printf("\n\n\ncual es tu nobre\n\n\n" );
  scanf("%d",&nomb);
  
  printf("\n\n\tGRACIAS SALUDOS Y VUELVE PRONTO\n\n");
  
   getch();	
}

int SER3programa17();
int SER3programa17()
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

getch();	
}


int SER3programa18();
int SER3programa18()
{
	
int veces = 0, i = 0; 
char caracter; 

printf("\nESCRIBA UN PROGRAMA QUE PIDA AL USUARIO UNCARACTER Y UN NUMERO DE\n REPITICIONES LUEGO IMPRIMA EL CARACTER EL NUMERO DE VECES ESPECIFICADO");
printf("\n\n\nEscribe un caracter: "); 
scanf("%c", &caracter);
 
printf("Escribe el numero de veces que se repetira: "); 
scanf("%d", &veces);
 
do{ 

printf("\n%c",caracter); 

i++; 

}
while(i<=veces);

getch();
}
        

int SER3programa19();
int SER3programa19()
{

int n;

printf("\n\nESCRIBA UN PROGRMA QUE IMPRIMA UN TABLA CON LAS CUATRO\n PRIMERAS POTENCIAS DE LOS NUMEROS 1 AL 10");
printf(" \nnumero\t \nexp2\t \nexp3\t \nexp4");

for (n=0; n<=10; n++)
{
printf("%2d\t%5d\t%5d\t%5d\n",n,n*n,n*n*n,n*n*n*n);
}
getch();	
}



int SER3programa20();
int SER3programa20()
{
int i, numero, factorial=1;
printf("escriba un numero para calcular su factorial: ");
scanf("%d",&numero);
for (i=numero; i>1; --i) factorial *= i;
printf("\n%d = %d\n",numero,factorial);
getch();
}


int SER3programa21();
int SER3programa21()
{
int ascii=0,col=1,ren=1;
 

 printf("\n\nESCRIBA UN PROGRMA QUE MUESTRE LA TABLA ASCII\n\n");
 for(ascii=1;ascii<=256;ascii++) 
  {
  
  printf("%i:%c\t",ascii,ascii);
  if(ren==24) {
  ren=0; col+=12;
  }
  if(col>=80) 
  {
  getch();
 
   ren=0; col=1;
  }
  ren++;
  }
  getch();

getch();	
 }


int SER3programa22();
int SER3programa22()
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
 
getch();	
}
 


int SER3programa23();
int SER3programa23()
{
int i;


  
  printf("ESCRIBA UN PROGRAM QUE IMPRIMA UN MENSAJE\n POR UN BORDE UTILIZANDO FUNCIONES PARA DIBUJAR LOS ELEMNETOS DEL BORDE\n\n");
  
    
                   printf("******************************************\n");

for(i=0;i<4;i++)
{
                   printf("*                                        *\n");
                }
                   printf("*        LUIS FELIPE COPORO              *\n");
                
          for(i=0;i<4;i++)      
{
                   printf("*                                        *\n");
                }
                
                     printf("*****************************************\n");



                   getch();
}



int SER3programa24();
int SER3programa24()
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

int SER3programa25();
int SER3programa25()
{

void LimpiaPantalla(int n);
int numlin=30;
LimpiaPantalla(numlin);
getch();

}

void LimpiaPantalla(int n)

{

while (n-- >0) putchar('\n');

getch();

}



int SER3programa26();
int SER3programa26()
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


getch();	
}


int SER3programa27();
int SER3programa27()
{
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


int SER3programa28();
int SER3programa28()
{
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




int SER3programa29();
int SER3programa29()
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
 getch();

getch();	
}

int SER3programa30();
int SER3programa30()
{
 int serie=1;
 bool sw=true;
   
    {
	printf("\n\n GENERAR LA SERIE: 1, 5, 3, 7, 5, 9, 7, ..., 23 \n \n");
   
    do
    {
      printf("%d, ",serie);
      if (sw) serie+=4;
      else serie-=2;
      sw=!sw;
    } while (serie<=23);
    getch();
}

 getch();
}

 
 int SER3programa31();
int SER3programa31()
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

getch();
return 0;

}


int SER3programa32();
int SER3programa32()
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

getch();

}	  

int SER3programa33();
int SER3programa33()
{
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
	
getch();
return 0;
}





int SER3programa34();
int SER3programa34()
{

printf("\n\nDADA UNA MATRIZ CUADRADA INVETIR SU DIAGONAL PRINCIPAL");
int m[2][2];

int i=0, j=0; 


for(i=0;i<j;i++)
{
	for(j=0;j<i;j++)
	{
		printf("\n\nIngresa tu matriz");
	}
	printf("\n\n");
} 


for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\n\ntus posiciones de tu matriz son [%d][%d]\n",i,j);
		scanf("%d",&m[i][j]);
	}
	printf("\n");
} 
printf("\n");
printf("\ntu matriz es: \n");
printf("\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("\t%d",m[i][j]);
	}
	printf("\n\n");
} 

printf("\n\n");
printf("\ntu diagonal inversa es: \n");
printf("\n");
for (i=2;i>=0;i--) 
{ 
for (j=2;j>=0;j--) 
{ 
if (j+i==2-1) 

{ 
 printf ("\t%d",m[i][j]);
 printf("\n");
} 
} 
} 
getch();
}



int SER3programa35();
int SER3programa35()
{


printf ("\n\n DADA DOS MATRICES DE DIFERENTE\n TAMAÑOS R Y S MOSTRAR LOS ELEMENTOS COMUNES DE R EN S");	
int FILA,COLA,FILB,COLB,f,c,cc=0,pc;
	printf("\n\n Cuantas filas para la matriz A ? ");
	scanf("%d",&FILA);
	printf("\nCuantas filas para la matriz B ? ");
	scanf("%d",&FILB);
	printf("\nCuantas columnas para la matriz A ? ");
	scanf("%d",&COLA);
	printf("\nCuantas columnas para la matriz B ? ");
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


int SER3programa36();
int SER3programa36()
{
	int FIL,COL,f,c,cc=0,pc;
	printf ("\n\nDADA UNA MATRIZ DE M*N Y EL VECTOR DE\n TAMAÑO N DETERMINAR QUE COLUMNA DE LA MATRIZ ES IGUAL AL DEL VECTOR");
	printf("\n\nCuantas filas para la matriz? ");
	scanf("%d",&FIL);
	printf("\nCuantas columnas para la matriz? ");
	scanf("%d",&COL);
	int matriz[FIL][COL];
	int vector[COL];
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ: ",f,c);
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

return 0;
getch();

}

main()
{
		system("color A");
reiniciar:
int op,p,r; 
printf("\t\t\t\tPROYECTO FINAL\n");
printf("\n\n\n\n\tLUIS FELIPE COPORO CRUZ              MATRICULA: 1314INI022\n\n\n\n");
printf("\n\n\n\tMENU DE TOODOS LOS PROGRAMAS\n\n\n\t");
printf("Seleciona El proyecto que se desea ver:"); 
printf("\n\n\t\tPROYECTO[1]\n\n\t\tPROYECTO[2]\n\n\t\tPROYECTO[3]\n\n\t\t");

printf("EL proyecto selecionado es:");
fflush(stdin);
scanf("%i",&op); 

switch(op) 
{
case 1: 
printf("PROYECTO[1]:\n\nPrograma1\nPrograma2\nPrograma3\nPrograma4\nPrograma5\n"); 
printf("Programa6\nPrograma7\nPrograma8\nPrograma9\nPrograma10\nPrograma11\nPrograma12");
printf("\n\nSELECIONE EL PROGRAMA A EJECUTAR:");
scanf("%d",&p);
fflush(stdin); 
system ("cls");

switch(p)
{
case 1:
programa1();
getch();
break; 
case 2: 
programa2();
getch();
break;
case 3: 
programa3();
getch();
break;
case 4: 
programa4();
getch();
break;
case 5: 
programa5();
getch();
break;
case 6: 
programa6();
getch();
break;
case 7: 
programa7();
getch();
break;
case 8: 
programa8();
getch();
break;
case 9: 
programa9();
getch();
break;
case 10: 
programa10();
getch();
break;
case 11: 
programa11();
getch();
break;
case 12: 
programa12();
getch();
break;

}

printf("\n\n\nSLECCIONE LA OPCION \n\t\t 1-VOLVER AL MENU\n\t\t 2-VER LOS PROGRAMAS DEL PROYECTO SIGUIENTE\n\t");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}


case 2:
printf("PROYECTO 2\nPrograma1\nPrograma2\nPrograma3\nPrograma4\nPrograma5\n"); 
printf("Programa6\nPrograma7\nPrograma8\nPrograma9\nPrograma10");
printf("\n\nSELECIONE EL PROGRAMA A EJECUTAR:");
scanf("%d",&p);
system ("cls");
fflush(stdin); 
switch(p)
{
case 1:
SER2programa1();
getch();
break; 
case 2: 
SER2programa2();
getch();
break;
case 3: 
SER2programa3();
getch();
break;
case 4: 
SER2programa4();
getch();
break;
case 5: 
SER2programa5();
getch();
break;
case 6: 
SER2programa6();
getch();
break;
case 7: 
SER2programa7();
getch();
break;
case 8: 
SER2programa8();
getch();
break;
case 9: 
SER2programa9();
getch();
break;
case 10: 
SER2programa10();
getch();
break;

}
printf("\n\n\nSLECCIONE LA OPCION \n\t\t 1-VOLVER AL MENU\n\t\t 2-VER LOS PROGRAMAS DEL PROYECTO SIGUIENTE\n\t");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}



case 3:
printf("PROYECTO[3]:\nPrograma1\nPrograma2\nPrograma3\nPrograma4\nPrograma5\n"); 
printf("Programa6\nPrograma7\nPrograma8\nPrograma9\nPrograma10\nPrograma11\nPrograma12\nPrograma13\nPrograma14\nPrograma15\nPrograma16\nPrograma17\nPrograma18\nPrograma19\nPrograma20\nPrograma21\nPrograma22\nPrograma23\nPrograma24\nPrograma25\nPrograma26\nPrograma27\nPrograma28\nPrograma29\nPrograma30\nPrograma31\nPrograma32\nPrograma33\nPrograma34\nPrograma35\nPrograma36");
printf("\n\nSELECIONE EL PROGRAMA A EJECUTAR:");
scanf("%d",&p);
system ("cls");
 
switch(p)
{
case 1:
SER3programa1();
getch();
break;
case 2:
SER3programa2();
getch();
break;
case 3:
SER3programa3();
getch();
break;
case 4:
SER3programa4();
getch();
break;
case 5:
SER3programa5();
getch();
break;
case 6:
SER3programa6();
getch();
break;
case 7:
SER3programa7();
getch();
break;
case 8:
SER3programa8();
getch();
break;
case 9:
SER3programa9();
getch();
break;
case 10:
SER3programa10();
getch();
break;
case 11:
SER3programa11();
getch();
break;
case 12:
SER3programa12 ();
getch();
break;
case 13:
SER3programa13();
getch();
break;
case 14:
SER3programa14();
getch();
break;
case 15:
SER3programa15();
getch();
break;
case 16:
SER3programa16();
getch();
break;
case 17:
SER3programa17();
getch();
break;
case 18:
SER3programa18();
getch();
break;
case 19:
SER3programa19();
getch();
break;
case 20:
SER3programa20();
getch();
break;
case 21:
SER3programa21();
getch();
break;
case 22:
SER3programa22();
getch();
break;
case 23:
SER3programa23();
getch();
break;
case 24:
SER3programa24();
getch();
break;
case 25:
SER3programa25();  
getch();
case 26:
SER3programa26();  
getch();
break;
case 27:
SER3programa27();
getch();
break;
case 28:
SER3programa28();
getch();
break;
case 29:
SER3programa29();
getch();
break;
case 30:
SER3programa30();
getch();
break;
case 31:
SER3programa31();
getch();
break;
case 32:
SER3programa32();
getch();
break;
case 33:
SER3programa33();
getch();
break;
case 34:
SER3programa34();
getch();
break;
case 35:
SER3programa35();
getch();
break;
case 36:
SER3programa36();
getch();
break;
}
printf("\n\n\nSELECCIONE LA OPCION \n\t\t 1-VOLVER AL MENU\n\t\t 2-PROYECTO FINALIZADO\n\t");
scanf("%d",&r);
system("cls");
if(r==1)
{goto reiniciar;}

default:printf("\n\nPROGRAMA INCORRECTO");
}
getch();
return 0;
}

