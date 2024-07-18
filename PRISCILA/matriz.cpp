#include<stdio.h>
#include<conio.h>
main()
{
int i,j,suma=0,prom;
int bob[4][4];
for(j=0;j<=3;j++)
{
                  for(i=0;i<=3;i++)
                  {
                                    printf("ingresa la posiscion del a matriz%d,%d de la matriz:\t%\n",j,i);
                                    scanf("%d",&bob[j][i]);
                                    }
                                    
                                    printf("\n");
                                    }
                                    for(j=0;j<=3;j++)
                                        {
                                                        for(i=0;i<=3;i++)
                                                         {
                                                                          printf("la posicion %d,%d de la matriz es:\t%d\n",j,i,bob[j][i]);
                                                                          suma=suma+bob[j][i];
                                                                           }
                                                                          printf("\n");
                                                                          }
                                                                           for(j=0;j<=3;j++)
                                                                           {
                                                                           for(i=0;i<=3;i++)
                                                                                {
                                                                          printf("la posicion %d,%d de la matriz es:\t%d\n",j,i,bob[j][i]);
                                                                          
                                                                          }
                                                                          prom=suma/bob[j][i];
                                                                           
                                                                          }
                                                                          printf("\nla suma de los elementos de la matriz es :\t%d",suma);
                                                                          printf("\nel promedio de los elementos de la matriz es :\t%d",prom);
                                                                            
                                                                          
                                                                           getch();
                                                                                           }
                                                                                           
                                                                          
                                                                          
                                                                          
                                    
