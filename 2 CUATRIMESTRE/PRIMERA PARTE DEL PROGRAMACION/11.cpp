#include<conio.h>
#include<stdio.h>

main()
{
      int anio;
      
      printf("Teclea anio");
      printf("%d",anio);
      
      if(anio%4==0)&&(anio%100==0)
      {
                                  printf(" El anio no es bisiesto:",anio);
                                  }
                                  else
                                  if(anio%400==0)
                                  {
                                                 printf(" El anio es bisiesto:",anio);
                                                 }
                                                 else
                                                 printf(" El anio no es bisiesto:");
                                                 getch();
                                                 }
                                                 
                                  
