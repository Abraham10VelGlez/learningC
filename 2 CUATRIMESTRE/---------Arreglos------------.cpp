#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <stdlib.h>
#include <math.h>


main()
{
	int a;
  scanf("%d", &a);
switch (a)
	{
	system ("color 7");
	int accel;	
			printf("\t\t\tUnidad 3\n\n");
			printf("\tELIGE UN PROGRAMA DE LA LISTA\n\n");
			printf("CONVERSOR DE PESOS A DOLARES            (presionar 1)\n\n");float T, Pesos, UCambio;// case 1
			printf("VOLUMEN SEGUN LA TEMPERATURA            (presionar 2)\n\n");float temperatura,presion,volumen,masa;//case 2
			printf("SUMA Y PROMEDIO                         (presionar 3)\n\n");float n1,n2,n3,p,t;//case 3
			printf("CALCULAR NUMERO DE PULSACIONES          (presionar 4)\n\n");int edad,num_pulsaciones;//case 4
			printf("SALARIO DEL 25 PORCIENTO                (presionar 5)\n\n");int salario_anterior,incremento,salario_actual;//case 5
			printf("EL HOSPITAL                             (presionar 6)\n\n");float Pres,go,po,to;//case 6
			printf("LA SUMA DE LOS OTROS DOS                (presionar 7)\n\n");int c;//case 7
			printf("SALRIO SEMANAN                          (presionar 8)\n\n");float ss;int ht, he; //case 8
			printf("MODO ACENDENTE                          (presionar 9)\n\n");int n11,n22,n33,n44,n55;//case 9
			printf("LIBRE                                   (presionar 10)\n\n");int ce,ser=0,sum=0,suma11=0;//case 10
			printf("CANTIDAD DE CALORIA                     (presionar 11)\n\n");int m;//11
			printf("AÑO BISISESTO                           (presionar 12)\n\n");int B;//case 12
			printf("SUMA DE 2 VECTORES                      (presionar 13)\n\n");int Ce[19],Ae[19],Be[19];//case 13
			printf("PRECIO DEL KILO DE HUEVO                (presionar 14)\n\n");int poo,go1,al,sum12,cal;//case 14
			printf("MAYOR NUMERO DE VOTANTES*               (presionar 15)\n\n");
			printf("EL CENSO PARA VOTACION                  (presionar 16)\n\n");
			printf("LIBRE                                   (presionar 17)\n\n");int lado, base, opcion;//case 17
			printf("CUAL ES EL NEGATIVO                     (presionar 18)\n\n");
			printf("SUMA,REST,DIVICION DE DOS NUMEROS       (presionar 19)\n\n");
			printf("DOS NUMEROS SON AMIGOS                  (presionar 20)\n\n");int i,j,c1,c2,n12,n21;//case 20
			printf("ADIVINASA                               (presionar 21)\n\n");int n10,p10=6,cont;//case 21
			printf("LIBRE                                   (presionar 22)\n\n");float deduccion,importe;//case 22
			printf("NUMERO PERFECTO                         (presionar 23)\n\n");int b=0,a,k,x,p11[11]; //case 23
			printf("FACTORIAL                               (presionar 24)\n\n");int a14=1, n17;//case 24
			printf("CENSO PARA PERSONAS                     (presionar 25)\n\n");
			printf("PAGO DE 20 TRABAJADORES                 (presionar 26)\n\n");
			printf("LIBRE                                   (presionar 27)\n\n");float peso;//case 27
			printf("CONVERTIDOR A DECIMAL                   (presionar 28)\n\n");int num; //case 28
			printf("LIBRE                                   (presionar 29)\n\n");int Calificacion;//case 29
			printf("VECTOR ELEVADO AL CUADRADO              (presionar 30)\n\n");int ax[30],bx[30];//case 30
			printf("MATRIZ 3*3, SUMA                        (presionar 31)\n\n");int prom=0,am[3][3],bm[3][3],cm[3][3];//case 31
			printf("MATRIZ 4*4, SUMA                        (presionar 32)\n\n");int dp,num15[4][4],vec5[4];//case 32
			printf("MATRIZ, SUMA FILA+COLUMNA               (presionar 33)\n\n");int ma[5][3],ho[5],vec10[3],f,suma=0;//case 33
			printf("MATRIZ(A,B)                             (presionar 34)\n\n");int a20[4][4],b20[4][4],c20[4][4];//case 34
			printf("EL AVION                                (presionar 35)\n\n");
				scanf("%d",&accel);
							
			switch (accel){
				case1:
							
								printf("\n\n\t\tEscribe la cantidad de pesos a convertir:\t");
									scanf("%f", &Pesos); 
								printf("\n\n\t\tEscribe la unidad de cambio:\t");
									scanf("%f", &UCambio);
									T=Pesos*UCambio;
								printf("\n\n\t\tEl total de dolares que tiene usted es:\t %.2f", T);
				break;
				case 2:
						
						printf ("Ingrese Temperatura:");
							scanf ("%f", &temperatura);
						printf ("Ingrese Presion:");
							scanf ("%f", &presion);
						printf ("Ingrese Volumen:");
							scanf ("%f", &volumen);
								masa = (presion * volumen)/(0.37 * (temperatura + 460));
						printf("La masa calculada es: %f\n", masa);
				break;
				case 3:
						
							printf("\n\tTECLEA NUM1: ");
								scanf(" %f",&n1);
							printf("\n\tTECLEA NUM2: ");
								scanf(" %f",&n2);
							printf("\n\tTECLEA NUM3: ");
								scanf(" %f",&n3);
									t=n1+n2+n3;
									p=t/3;
							printf("\n\t LA SUMA ES: %f", t);
							printf("\n\t EL PROMEDIO ES: %f", p);
				break;
				case 4:
					
					printf ("Ingrese Edad:");
						scanf ("%d", &edad);
						num_pulsaciones = (220 - edad)/10;
					printf("Pulsaciones en 10 seg son: %d\n", num_pulsaciones);
				break;
				case 5:
					
					printf ("Su salario anterior fue:");
						scanf ("%d", &salario_anterior);
						incremento = salario_anterior * 0.25;
						salario_actual = incremento + salario_anterior;
						printf("Su nuevo salario es: %d\n", salario_actual);
				break;
				case 6:
					
					printf("\n\n\tPORCENTAJE DE PRESUPUESTO PARA EL HOSPITAL");
					printf("\n\n\t\tDigite el presupuesto total: ");
						scanf("%f", &Pres);
							go=Pres*.40;
							po=Pres*.30;
							to=Pres*.30;
								printf("\n\n\tEl presupuesto para cada Area es: ");
								printf("\n\n\t\tGinecologia: %.2f", go);
								printf("\n\n\t\tPediatria: %.2f", po);
								printf("\n\n\t\tTraumatologia: %.2f", to);
			
				break;
				case 7:
					
						printf ("\n\n\tDigita numero 1:");
							scanf ("%d", &a);
						printf ("\n\n\tDigita numero 2:");
							scanf ("%d", &b);
						printf ("\n\n\tDigita numero 3:");
							scanf ("%d", &c);
							if(a=(b+c)){
								printf("\n\n\t%d Es la suma de los otros numeros ", a);
							}
							else
							if(b=(a+c)){
								printf("\n\n\t%d Es la suma de los otros numeros ", b);
							}
							else
							if(c=(b+a)){
								printf("\n\n\t%d Es la suma de los otros numeros ", c);
							}
							else{
								printf("\n\n\tNo coincide la suma de los numeros");
							}
				break;
				case 8:
					printf("Ingresa Horas Trabajadas:");
						scanf("%d", &ht);
						if (ht > 40){
						he = ht - 40;
						ss = he * 30 + 40 * 20;
						}
						else{
						ss = ht * 20;
						}
						printf("El Salario Semanal es: %.2f",ss);
				break;
				case 9:
            			printf("Introduzca numero 1:");
    						scanf("%d",&n11);
    					printf("Introduzca numero 2:");
    						scanf("%d",&n22);
    					printf("Introduzca numero 3:");
    						scanf("%d",&n33);
    					printf("Introduzca numero 4:");
    						scanf("%d",&n44);
    					printf("Introduzca numero 5:");
    						scanf("%d",&n55);
								if (n11<n22 && n22<n33 && n33<n44 && n44<n44){
       								printf("La posision de los numeros es: %d %d %d %d %d", n11,n22,n33,n44,n55);
    							}
    							else
    							if (n22<n11 && n11<n33 && n33<n44 && n44<n55){
       								printf("La posision de los numeros es: %d %d %d %d %d", n22,n11,n33,n44,n55);
    							}
    							else
    							if (n33<n11 && n11<n22 && n22<n44 && n44<n55){
      				 				printf("La posision de los numeros es: %d %d %d %d %d", n33,n11,n22,n44,n55);
    							}
    							else
   				 				if (n44<n11 && n11<n33 && n33<n22 && n22<n55){
       								printf("La posision de los numeros es: %d %d %d %d %d", n44,n11,n33,n22,n55);
				    			}
				    			else
				    			if (n55<n11 && n11<n33 && n33<n44 && n44<n22){
				       				printf("La posision de los numeros es: %d %d %d %d %d", n55,n11,n33,n44,n22);
				   				}	
				break;
				case 10:
					int vec[5];
					
    					for(ce=0;ce<5;ce++){
        					printf("INGRESA UN NUMERO(%d):  \t\n",ce);
        						scanf("\n\t%d",&vec[ce]);		
						}
						for(ce=0;ce<5;ce++){
        					suma11=suma11+vec[ce];
        						if(vec[ce]<=0){
									vec[ce]=sum; 
									sum=sum+1;	
								}
								if(vec[ce]>=1){
									vec[ce]=ser; 
									ser=ser+1;	
								}
						}		
							printf("\n");
							printf("\n\t***********negativos********\n\t");
							printf("\n\t\t\t%d",sum);	
							printf("\n");
							printf("\n\t***********positivos********\n\t");
							printf("\n\t\t\t%d",ser);	
        					printf("\n");
							printf("\n\t***********suma de los positivos********\n\t");
							printf("\n\t\t\t%d",suma11);		
				break;
				case 11:
					
						printf("\t\t\tELIJA LA OPCION DESEADA\n\n");
						printf("\t\nDigite 1 si estaba durmiendo");
						printf("\t\nDigita 2 si estaba sentado");
							scanf(" %d",&a);
								switch(a){
		 							case 1:
										printf("\t\nDigita cuantas horas estubo durmiendo");
											scanf(" %d",&b);
												t=b*60;
												m=t*1.08;
													printf("\t\nLas calorias que consumio son:  %d",m);
									break;
									case 2:
										printf("\t\nDigita cuantas horar que estubo sentado");
											scanf(" %d",&b);
												t=b*60;
												m=t*1.66;
													printf("\t\nLas calorias que consumio son:  %d",m);
									break;
								}
				break;		
				case 12:
					
					printf("\n\n\tDigita un año:\t");
						scanf ("%d", &B);
							if(B%400==0){
								printf("\n\n\tEl año es biciesto");
							}
							else
							if(B%100==0){
								printf("\n\n\tEl año no es biciesto");
							}
							else
							if(B%4==0){
								printf("\n\n\tEl año es biciesto");
							}
							else{
								printf("\n\n\tEl año no es biciesto");
							}	
				break;
				case 13:
						for(int Xe=0; Xe<19; Xe++){	
							printf("\tIntroduce valor %i: ",Xe);
								scanf(" %i",&Ae[Xe]);
						}
						for(int Xe=0; Xe<19; Xe++){
							printf("\tIntroduce valor %i: ",Xe);
								scanf(" %i",&Be[Xe]);
						}
						for(int Xe=0; Xe<19; Xe++){
							Ce[Xe]= Ae[Xe]+Be[Xe];
						}
						printf("\n\tVector");
						for(int Xe=0; Xe<19; Xe++){
							printf("\n\t\tPosicion %i =%i", Xe ,Ce[Xe]);
						}
				break;
				case 14:
					
						printf("digita peso la gallina");
							scanf("%d",&go1);
						printf("altura de la gallina");
							scanf("%d",&al);
						printf("numero de huevos q pone");
							scanf("%d",&poo);
								cal=(go1*al)/poo;
								if(cal>=15){
									sum12=cal*1.2;
										printf("el precio es: %d",sum12);
								}
								if(cal>8&&cal<15){
									sum12=cal*1.00;
										printf("el precio es: %d",sum12);
								}
								if(cal<=85){
									sum12=cal*0.80;
										printf("el precio es: %d",sum12);
								}
				break;
				case 17:
						
            			printf("Introduzca lado del triángulo:");
				 				scanf("%d",&lado);
						printf("Introduzca base del triángulo:");
				 				scanf("%d",&base);
							 printf("Seleccione opción:\n");
							 printf("1 - Equilátero\n");
							 printf("2 - Isósceles\n");
							 printf("3 - Escaleno\n");
							 	scanf("%d",&opcion);
									switch (opcion){
							            case 1:
							                 printf("El perímetro es:%d\n",3*lado);
							                 break;
							            case 2:
							                 printf("El perímetro es:%d\n",(2*lado)+base);
							                 break;
							            case 3:
							                 printf("El perímetro es:%d\n",lado + lado + lado);
							                 break;
							            default:
							            printf("Opción no válida.");
							            break;
									}
				break;
				case 20:
					
					 	printf("\t\t\t------SI ES AMIGO O NO------  \t\n");
					 		printf("Digite numero 1  \t");
					 			scanf("%d",&n12);
					 		printf("\nDigite numero 2  \t"); 
					 			scanf("%d",&n2);
					 				c1=0;
					 				c2=0;
					 				for(i=1;i<=n12/2;i=i+1){
					 					if (n12%i==0){
					 						c1=c1+i;
					 					}
					 				}
					 				for(j=1;j<=n21/2;j=j+1){
					 						if (n21%j==0){
					 							c2=c2+j;
					 						}
					 				}
					 				if (c1==n21){
					 					printf("\nel numero es amigo");
					 				}
					 				else {
					 				printf("\nel numero no es amigo");
									}
				break;
				case 21:
				
						printf("\nEscoge un numero 1 al 100\n");
							scanf("%d",&n10);
								if(n10==p10){
									printf("\nHas ganado");
								}
								if(n10==1||n10==2||n10==3||n10==4||n10==5||n10==7||n10==8||n10==9||n10==10){
									printf("\nTe quemaste");
								}
								if(n10>10&&n10<=21){
									printf("\nCaliente ");
								}
								if(n10>20&&n10<31){
									printf("\nTibio");
								}
								if(n10>30&&n10<101){
									printf("\nFrio");
								}
				break;
				case 22:
				        printf("Introduzca Importe:");
				    		scanf("%f",&importe);
					 			if (importe>15000){
				       				deduccion=importe*0.16;
				    			}
				    			else{
				        			deduccion=importe*0.1;
				    			}
				    printf("El importe neto es %f pesos\n",importe-deduccion);
				break;
				case 23:
					 
					  
					        for(k=2;k<100;k++){  
					              a=0;  
					            for(i=1;i<(k+2);i++){  
					                if(k%i==0){  
					                    a=a+i;  
					                    if((a-k)==k){  
					                         p11[b]=k;  
					                         b++;  
					                    }  
					                }  
					            }  
					        }  
					         for(x=0;x<b;x++){  
					             printf("%d PERFECTO\n",p11[x]);  
					    	} 
				break;
				case 24:
					
     
					     printf("\n\tIngresa un numero:  ");
					     scanf("%d", &n17);
						 		if (n17>=5 && n17<=62){
					                for(int i=1; i<=n17; i++){
					                 a14=a14*i;
					                 }
					                printf("\n\n\tEl factorial es: %d", a14);
								}
								else{
									printf("\n\n\tLos numeros estan fuera del rango");
								}
				break;
				case 27:
						      
						    printf("Introduzca peso en kilogramos:");
						     	scanf("%f",&peso);     
						     printf("Seleccione opción:\n");
						     printf("1 - Hectogramos\n");
						     printf("2 - Decagramos\n");
						     printf("3 - Gramos\n");
						     printf("4 - Decigramos\n");
						     printf("5 - Centigramos\n");
						     printf("6 - Miligramos\n");
						     	scanf("%d",&opcion);
								switch (opcion){
						            case 1:
										{
										T=peso/10;
						                 printf("El peso es:%f\n", T);
										}
						                 break;
						            case 2:
										{
										T=peso/100;
						                 printf("El peso es:%f\n", T);
										}
						                 break;
						            case 3:
										{
										T=peso/1000;
						                 printf("El peso es:%f\n", T);}
						                 break;
						            case 4:
										{
										T=peso/10000;
						                 printf("El peso es:%f\n", T);}
						                 break;
						            case 5:
										{
										T=peso/100000;
						                 printf("El peso es:%f\n", T);}
						                 break;
						            case 6:
										{
										T=peso/1000000;
						                 printf("El peso es:%f\n", T);
										}
						                 break;
						            default:
						            printf("Opción no válida.");
						            break;
						     	}
				break;
				case 28:
					
						printf("Ingresa el numero decimal a convertir:\n "); 
							scanf("%d",&num);
							 printf("\nDIGITA 1 PARA DECIMAL: ");
							 printf("\nDIGITA 2 PARA HEXADECIMAL ");
							 printf("\nDIGITA 3 PARA OCTAL\n");
							 scanf("%d",&x);
							switch(x){
								case 1:
									printf("DECIMAL: %d \n",num);
								break;
								case 2:	 
									printf("HEXADECIMAL: %x \n",num); 
								break;
								case 3:	
									printf("OCTAL: %o \n",num); 
								break; 
							}	
								printf("\nEL BINARIO ES\n"); 
						        for(i = 15; i>=0; i--) { 
						         if((1<<i)&num) printf("1"); 
							else printf("0"); 
						} 
						printf("\n");
				break;
				case 29:
					
						printf("Digite la calificacion del alumno:\t");
							scanf("%d",&Calificacion);
								if(Calificacion>=9 && Calificacion<=10){
									printf("\n Tu calificacion es excelente");
					        	}
								else if(Calificacion>=8 && Calificacion<9){
									printf("\n Tu calificacion es Muy Buena");
								}
					            else if(Calificacion>=7 && Calificacion<8){
								    printf("\n Tu calificacion es Buena");
								}		
								else if(Calificacion>=6&& Calificacion<7){
									printf("\n Tu calificacion es Regular");
								}				
								else if(Calificacion>=0 && Calificacion<6){
									printf("\n Debes mejorar tu calificacion");
								}						
								else{
									printf("\n Digita Calificacion Debidamente");
								}
				break;
				case 30:
					
						for(i=0;i<30;i++)
						{
							printf("INGRESA EL VALOR %i :  ",1+i);
								scanf("%d",& ax[i]);	
									bx[i]=pow(ax[i],2);		
						}
						printf("\n\nINGRESA:\n");
						for(i=0;i<30;i++)
						{
							printf("%d\t\t\t\t",ax[i]);
						}
						printf("\n\nCUADRADO:\n");
							for(i=0;i<30;i++)
							{
									printf("%d\t\t\t\t",bx[i]);
							
							}
				break;
				case 31:
				
							for(j=0;j<3;j++){
								for(i=0;i<3;i++){
									printf("INGRESA LA %d,%d POSICION DE LA MATRIZ A\t\n",j,i);
										scanf("%d",&am[j][i]);		
								}
								printf("\n");	
							}
							for(j=0;j<3;j++){
								for(i=0;i<3;i++){
									printf("INGRESA LA %d,%d POSICION DE LA MATRIZ B\t\n",j,i);
										scanf("%d",&bm[j][i]);
										
								}
								printf("\n");	
							}
							printf("\n\tELIJA SU OPCION\n");
							printf("\n\tDIGITA 1 PARA LA SUMA\n");
							printf("\n\tDIGITA 2 PARA LA RESTA\n");
							printf("\n\tDIGITA 3 PARA LA MULTIPLICACION\n");
							printf("\n\tDIGITA 4 PARA LA DIVICION\n");
							scanf("%d",&x);
							switch(x){
								case 1:
									for(j=0;j<3;j++){
										for(i=0;i<3;i++){
											cm[j][i]=am[j][i]+bm[j][i];		
												printf("\tla suma de la %d,%d posision de la matriz: %d\n",j,i,cm[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 2:
									for(j=0;j<3;j++){
										for(i=0;i<3;i++){
											cm[j][i]=am[j][i]-bm[j][i];		
												printf("\tla resta de la %d,%d posision de la matriz: %d\n",j,i,cm[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 3:
									for(j=0;j<3;j++){
										for(i=0;i<3;i++){
											cm[j][i]=am[j][i]*bm[j][i];		
												printf("\tla multiplicacion de la %d,%d posision de la matriz: %d\n",j,i,cm[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 4:
									for(j=0;j<3;j++){
										for(i=0;i<3;i++){
											cm[j][i]=am[j][i]/bm[j][i];		
												printf("\tla divicion de la %d,%d posision de la matriz: %d\n",j,i,cm[j][i]);	
										}
										printf("\n");	
									}
								break;
							}	
				break;
				case 32:
					
				
						for(j=0;j<=3;j++){
							for(i=0;i<=3;i++){
								printf("INGRESA LA %d,%d POSICION DE LA MATRIZ \t\n",j,i);
									scanf("%d",&num15[j][i]);	
							}
							printf("\n");
						}
						printf("\n\t***********Matriz********\n\t");
						for(j=0;j<=3;j++){	
							for(i=0;i<=3;i++){	
								printf("\t%d",num15[j][i]);	
							}
							printf("\n");
						}
						printf("\n\t*******Diagonal Principal********\n");
			            for(j=0;j<4;j++){ 
							for(i=0;i<4;i++){ 
								if(j==i){ 
			                		vec[k]=num15[j][i];
										printf("\n\t\t\t%d",vec5[k]);	 
								}	
							}
			            }
				break;
				case 33:
					
						for(f=0;f<5;f++){
				    		for(c=0;c<3;c++){
				        		printf("INGRESA LA %d,%d POSICION DE LA MATRIZ \t\n",f,c);
				        			scanf("\n\t%d",&ma[f][c]);
				    		}
				    		printf("\n");
						}
						printf("\n\t*******Matriz********\n");
						for(f=0;f<5;f++){
									for(c=0;c<3;c++){
										printf("\t%d",ma[f][c]);	
									}
									printf("\n");	
						}
						for(f=0;f<5;f++){
				    		suma=0;
				    			for(c=0;c<3;c++){
				        			suma+=ma[f][c];
				    			}
				    			vec10[f]=suma;
						}
						printf("\n\t****SUMA DE LA MATRIZ (FILA)****");
						for(i=0;i<5;i++){
				    		printf("\n\t\t\t--%d--",vec10[i]);
						}
						for(c=0;c<3;c++){
				    		suma=0;
				    			for(f=0;f<5;f++){
				        			suma=suma+ma[f][c];
				    			}
				    			ho[c]=suma;
						}
						printf("\n\t****SUMA DE LA MATRIZ (COLUMNA)****");
						for(i=0;i<3;i++){
				    		printf("\n\t\t\t--%d--",ho[i]);
						}
				break;
				case 34:
					
							for(j=0;j<4;j++){
								for(i=0;i<4;i++){
									printf("INGRESA LA %d,%d POSICION DE LA MATRIZ A\t\n",j,i);
										scanf("%d",&a20[j][i]);		
								}
								printf("\n");	
							}
							for(j=0;j<4;j++){
								for(i=0;i<4;i++){
									printf("INGRESA LA %d,%d POSICION DE LA MATRIZ B\t\n",j,i);
										scanf("%d",&b20[j][i]);
										
								}
								printf("\n");	
							}
							printf("\n\tELIJA SU OPCION\n");
							printf("\n\tDIGITA 1 PARA LA SUMA\n");
							printf("\n\tDIGITA 2 PARA LA RESTA\n");
							printf("\n\tDIGITA 3 PARA LA MULTIPLICACION\n");
							printf("\n\tDIGITA 4 PARA LA DIVICION\n");
							scanf("%d",&x);
							switch(x){
								case 1:
									for(j=0;j<4;j++){
										for(i=0;i<4;i++){
											c20[j][i]=a20[j][i]+b20[j][i];		
												printf("\tLA SUMA EN LA  %d,%d POSISION DE LA MATRIZ ES: %d\n",j,i,c20[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 2:
									for(j=0;j<4;j++){
										for(i=0;i<4;i++){
											c20[j][i]=a20[j][i]-b20[j][i];		
												printf("\tLA SUMA EN LA  %d,%d POSISION DE LA MATRIZ ES: %d\n",j,i,c20[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 3:
									for(j=0;j<4;j++){
										for(i=0;i<4;i++){
											c20[j][i]=a20[j][i]*b20[j][i];		
												printf("\tLA SUMA EN LA  %d,%d POSISION DE LA MATRIZ ES: %d\n",j,i,c20[j][i]);	
										}
										printf("\n");	
									}
								break;
								case 4:
									for(j=0;j<4;j++){
										for(i=0;i<4;i++){
											c20[j][i]=a20[j][i]/b20[j][i];		
												printf("\tLA SUMA EN LA  %d,%d POSISION DE LA MATRIZ ES: %d\n",j,i,c20[j][i]);	
										}
										printf("\n");	
									}
								break;
							}
				break;			
			}
	break;
	}

}


