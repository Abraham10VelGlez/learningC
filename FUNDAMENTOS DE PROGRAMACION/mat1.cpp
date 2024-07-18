#include<iostream>
using namespace std;
#define MAX 10
 
void ordenVector(int &f, int &c);
void ingresoVector(float V[MAX][MAX], int f, int c);
void reporteVector(float V[MAX][MAX], int f, int c);
void transpuesta(float V[MAX][MAX], int f, int c,float T[MAX][MAX]);
int main()
{
   float V[MAX][MAX],T[MAX][MAX];
   int f,c;
   ordenVector(f,c);
   ingresoVector(V,f,c);
   cout<<"                                                                                                                                                                              ingresada"<<endl;
   reporteVector(V,f,c);
   transpuesta(V,f,c,T);
   cout<<"Vector Transpuesto "<<endl;
   reporteVector(T,c,f);
   system("PAUSE");
}
void ordenVector(int &f, int &c)
{
  do{
       cout<<"Numero de filas : ";
       cin>>f;
  }while(f<=0 || f>MAX);
  do{
       cout<<"Numero de columnas : ";
       cin>>c;
  }while(c<=0 || c>MAX);
}
 
void ingresoVector(float V[][MAX], int f, int c)
{
    int i,j;
    for(i=0;i<f;i++)
      for(j=0;j<c;j++)
      {
         cout<<"V["<<i<<"]["<<j<<"]:";
         cin>>V[i][j];
      }
}
 
void reporteVector(float V[][MAX],int f, int c)
{
    int i,j;
    for(i=0;i<f;i++)
    {
      for(j=0;j<c;j++)
          cout<<V[i][j]<<"t";
      cout<<endl;
    }
}
 
void transpuesta(float V[MAX][MAX], int f, int c,float T[MAX][MAX])
{
  int i,j;
  for(i=0;i<f;i++)
     for(j=0;j<c;j++)
       T[j][i]=V[i][j];
}
