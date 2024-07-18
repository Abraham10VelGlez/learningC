#include<conio.h>
#include<stdio.h>
// AYUDA A UN ALUMNO A RESOLVER EL AREA DE UN TRAPECIO
float ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1);

float ayuda_alumno(float Bas_ma,float bas_me,float altura,float area_trapecio_2,float area_trapecio_1)

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
      main()
      {
            float Bas_ma,bas_me,altura,area_trapecio_2,area_trapecio_1;
            ayuda_alumno (Bas_ma,bas_me,altura,area_trapecio_1,area_trapecio_2);
            
            getch ();
            }
            
