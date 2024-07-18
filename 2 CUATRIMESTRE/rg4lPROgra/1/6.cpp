#include<conio.h>
#include<stdio.h>
//una empresa desea conocer el porcentaje q le toca a cada direccion, son finanzas,desarrollo social,informatica de acuerdo al monto mensual ,
void ayuntamiento()
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
              int main()
              {
              ayuntamiento();
            getch ();
            }
