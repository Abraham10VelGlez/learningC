#include<conio.h>
#include<stdio.h>

main()
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
                              getch();
                              }
                              
