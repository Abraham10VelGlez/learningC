
float peso,dolar,valordolar;
 int pre,vol,tem,ope2,ope1,ope3;
 int num,suma,a;
      float prom;
       int numpul,edad;
      float operacion1;
          int salario;
      float nuevosalario;
       float monmen,opera1,opera2,opera3;
      int i,l,b,c;
        int h_tra,sal,hex,tot_1,tot_2,total;
        int numm=0;
        
        //faltan ,10,11,
        
        
        
        float y,m,div;
        int f,res,x;
        int matriz[3][3]={{0}},d,k;
        float Bas_ma,bas_me,altura,area_trapecio_2,area_trapecio_1;
         float cel,fah,primero,despues;
         float direc_finan,direc_des_soc,direc_infor,mon_men, primer_porce, segundo_porce, tercer_porce;
float ganan, prec,venta,artc;
int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma, cua, divide;
int h,min,s; 
int z,b,cc,orden;
//completo


int d,mes,anio;
int mes;
 	int sum;
    int su,numero;
    int nu1,nu2,nu3,nu4,nu5,nu6,nu7,nu8,nu9,nu10;
    int nume,q,s,suman=0;
      float prome;
      char n[100];
      int numer,contador=1;
      int nun;
     int v,g,o;
      int w;
double fact=1;
    int e,mayor=0;
    int r;
double precio, total=0;
int col1=1, col2=100;
    int t,resu,u;
//13
int bb; 
char nombre[25];
char telefono[10];
int edad;
int ii;

//16,17

 int veces = 0, li = 0; 
    char caracter;
    int nn; 
    int nr,fac,nro;
    
    


printf("clsr");
              
              printf("1.-\n2.-\n3.-\n4.-\n5.-\n6.-\n7.-\n8.-\n9.-\n10.-\n");
              printf("11.-\n12.-\n13.-\n14.-\n15.-\n16.-\n17.-\n18.-\n19.-\n20.-\n");
              printf("21.-\n22.-\n23.-\n24.-\n25.-\n26.-\n27.-\n28.-\n29.-\n30.-\n");
              printf("31.-\n32.-\n33.-\n34.-\n35.-\n36.-\n37.-\n38.-\n39.-\n40.-\n");
              printf("41.-\n42.-\n43.-\n44.-\n45.-\n46.-\n47.-\n48.-\n49.-\n50.-\n");
              printf("51.-\n52.-\n53.-\n54.-\n55.-\n56.-\n57.-\n58.-\n59.-\n60.-\n");              
              scanf("%d",&opc);
              
              switch(opc)
              {
              
while(opc!=60)
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
              case 11:
                   
                   
                   // 2 parte llena
              case 12:
                   printf("SR. ALVAÑIL INGRESE MEDIDA UNO DE LARGO:"); scanf("%f",&y);
     printf("SR. ALVAÑIL INGRESE MEDIDA DOS DE ALTO:"); scanf("%f",&m);
     div=y/m;
     printf("EL TAMAÑO DE LA BARDA ES DE %.2f ",div);
     break;
              case 13:
                  printf("INGRESA EL NUMERO DE LA TABLA");
    scanf("%d",&x);
    for(f=1;f<=10;f++)
{    
res=x*f;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",x,f,res);
                     }
                     break;
              case 14:
                    for(d=0;d<3;d++)
     {
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
              system("PAUSE");                   
 
}
break;
              case 15:
                    printf("INGRESA LA BASE MAYOR");
            scanf("%f",&Bas_ma);
            printf("INGRESA LA BASE MENOR");
            scanf("%f",&bas_me);
            printf("INGRESA ALTURA");
            scanf("%f",&altura);
            
            
            area_trapecio_1=Bas_ma+bas_me;
            area_trapecio_2=area_trapecio_1*altura / 2;
      printf(" El AREA DEL TRAPECIO ES:%.1f",area_trapecio_2);
      break;
              case 16:
                   printf("\nDIGITA LOS GRADOS FAHARENHEIT\n");
      scanf("%f",&fah);
      
      primero=fah-32;
despues=(primero*5)/9;
printf("\n%.2f Faharenheit es igual a %.2f grados celcius \n",fah,despues);
break;
              case 17:
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
              
              break;
              case 18:
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
              break;
              case 19:
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
     break;
              case 20:
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
break;
              case 21:
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
break;

//3 parte
              case 22:
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
       break;
                   
              case 23:
                    printf("Teclea el mes:");
    scanf("%d",&mes);
    
    switch(mes)
    {
               case 1:
                    printf("31 dias");
                    break;
                               case 3:
                    printf("31 dias");
                    break;
                               case 5:
                    printf("31 dias");
                    break;
                               case 7:
                    printf("31 dias");
                    break;
                               case 8:
                    printf("31 dias");
                    break;
                               case 10:
                    printf("31 dias");
                    break;
                               case 12:
                    printf("31 dias");
                    break;
                    
                               case 2:
                    printf("28 0 29 dias");
                    break;
                    
                               case 4:
                    printf("30 dias");
                    break;
                               case 6:
                    printf("30 dias");
                    break;
                               case 9:
                    printf("30 dias");
                    break;
                               case 11:
                    printf("30 dias");
                    break;
                    
                    default: printf("error");
                    
                    }
                    break;
                    
              case 24:
                   	printf("introduce los 10 numeros\n");
	 
	
printf("introduce el primer numero");
scanf("%d",&nu1);
printf("introduce el segundo numero");
scanf("%d",&nu2);
printf("introduce el tercer numero");
scanf("%d",&nu3);
printf("introduce el cuarto numero");
scanf("%d",&nu4);
printf("introduce el quinto numero");
scanf("%d",&nu5);
printf("introduce el sexto numero");
scanf("%d",&nu6);
printf("introduce el septimo numero");
scanf("%d",&nu7);
printf("introduce el octavo numero");
scanf("%d",&nu8);
printf("introduce el noveno numero");
scanf("%d",&nu9);
printf("introduce el decimo numero");
scanf("%d",&nu10);

printf("\n\t\tGRACIAS PR SU ATENCION");

	printf("\n\n\n\nLA SUMA ES: ");
	
		sum=nu1+nu2+nu3+nu4+nu5+nu6+nu7+nu8+nu9+nu10;
	
	printf("%d",sum);
	
	if(numero=nu2,nu4,nu6,nu8,nu10)
	{
	su=nu2+nu4+nu6+nu8+nu10;
	
	printf("\n\nLA SUMA DE LOS NUMEROS PARES ES:%d\n\n",su);
	 	
	}
	break;
              case 25:
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
                                    
                                  
       printf("la suma es:%d\n",suman);
       printf("el promedio es:%.2f",prome);
       
              case 26:
                   printf("Introduce un numero: ");
	scanf("%i",&numer);
while(numer/10 !=0)
{
    numer=numer/10;
    contador++;
}
printf("Digitos: %i",contador);
break;
              case 27:
                   printf("ingresa el numero ");
scanf("%d",&nun);


if(nun>=10&&nun<=20)
{
	printf ("el numero es%d",nun);
	printf("\n");
	printf("el numero esta en el rango de 10 y 20");
	
}else

printf("el numero es%d",nun);
printf("\n");
printf("el numero no esta en el rango ");

break;
              case 28:
printf ("Escribe el primer lado");
scanf("%i",&v);
printf ("\nEscribe el segundo lado");
scanf("%i",&g);
printf ("\nEscribe el tercer lado");
scanf("%i",&o);

printf("\n\n\n"); 

if ((v+g>o) && (v+o>g) && (g+o)>v)
{
if (v==g && v==o) printf ("Equilatero"); 
else if (v==g || v==o || g==o) printf ("Isosceles"); 
else printf("Escaleno");
}
else
printf("Esos numeros no forman un triangulo");

break;

              case 29:
                    printf("Escriba el número: ");
scanf("%i",&w);

while(w>1) fact*=w--;

printf("Factorial =%lf",fact);
break;
              case 30:
                   do{
printf("\nNúmero: ");
scanf("%i",&e);
if (mayor<e) mayor=e;
}while (e!=0);

printf("\nEl mayor es %i",mayor);
break;
              case 31:
                    do{
do{
printf("\nIntroduzca la cantidad vendida: ");
scanf("%d",&r);
if(r<0) printf("Cantidad no valida");
}while(r<0); 
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
break;


// del 1 al 10 falta 11 al 36 o 38


              case 32:
                   while(col1<=100)
{
printf("%d\t\%d\n",col1,col2);
col1++;
col2--;
}
break;
              case 33:
                    printf("INGRESA EL NUMERO DE LA TABLA:");
    scanf("%d",&u);
    for(t=1;t<=15;t++)
{    
resu=u*t;
printf("\n MOSTRAR TABLA:%d x %d= %d\n",u,t,resu);
                     }
                     break;
              case 34
              
              //13
              
              
              case 35:
                   int impares();
int impares()
{
    
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
break;
              case 36:
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
break;
              case 37:
                   
                   //16
                   
              case 38:
                   
              //17
              
              case 39:
                          printf("Escribe un caracter: "); 
scanf("%c", &caracter);
 
printf("Escribe el numero de veces que se repetira: "); 
scanf("%d", &veces);
 
do{ 

printf("\n%c",caracter); 

li++; 

}
while(li<veces);
break;
              case 40:
              
puts(" numero\t     exp2\t     exp3\t     exp4");

puts("------\t    -----\t    -----\t    -----");

for (nn=0; nn<=10; ++nn)

printf("%2d\t    %5d\t    %5d\t    %5d\n",nn,nn*nn,nn*nn*nn,nn*nn*nn*nn);
break;
     
              case 41:
                   printf("Introduce un numero:"); 
scanf("%d",&nr);
if(nro<2) 
  return 1; 
else 
  return nro*factor(nro-1); 
  printf("El factorial de %d es %d\n", nr, fac); 
  break;
  
              case 42:
                   
              case 43:
              case 44:
              case 45:
              case 46:
              case 47:
              case 48:
              case 49:
              case 50:
              case 51:
              case 52:
              case 53:
              case 54:
              case 55:
              case 56:
              case 57:
              case 58:
              case 59:
              case 60:     
              
