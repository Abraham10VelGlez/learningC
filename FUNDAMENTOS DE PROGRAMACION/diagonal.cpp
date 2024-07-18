#include<iostream>
using namespace std;
 
#define MAX 10
 
void ordenMatriz(int &n);
void ingresoMatriz(float M[MAX][MAX], int f, int c);
void reporteMatriz(float M[MAX][MAX], int f, int c);
float sumaDiagonalPrincipal(float M[MAX][MAX], int n);
float promedioDiagonalSecundaria(float M[MAX][MAX], int n);
float mayorElementoTriangularSuperior(float M[MAX][MAX], int n);
float promedioMatrizTriangularInferior(float M[MAX][MAX], int n);
 
int main()
{
    float M[MAX][MAX];
    int n;
    ordenMatriz(n);
    ingresoMatriz(M,n,n);
    cout<<"Matriz ingresada"<<endl;
    reporteMatriz(M,n,n);
    
    system("PAUSE");
    return 0;
}
 
 
void ordenMatriz(int &n)
{
  do{
     cout<<"Orden de la matriz cuadrada: ";
     cin>>n;
  }while(n<=0 || n>MAX);
}
 
void ingresoMatriz(float M[][MAX], int f, int c)
{
     int i,j;
     for(i=0;i<f;i++)
       for(j=0;j<c;j++)
       {
    cout<<"M["<<i<<"]["<<j<<"]:";
    cin>>M[i][j];
      }
}
void reporteMatriz(float M[][MAX],int f, int c)
{
     int i,j;
    for(i=0;i<f;i++)
    {
      for(j=0;j<c;j++)
          cout<<M[i][j]<<"t";
      cout<<endl;
    }
}
 
float sumaDiagonalPrincipal(float M[][MAX], int n)
{
  int i,j;
  float s=0;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(i==j)
         s=s+M[i][j];
  return s;
}
 
float promedioDiagonalSecundaria(float M[][MAX], int n)
{
  int i,j;
  float s=0;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i+j==n-1)
       s=s+M[i][j];
  return s/n;
}
 
float mayorElementoTriangularSuperior(float M[MAX][MAX], int n)
{
  int i,j;
  float may=M[0][0];
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(i<=j && M[i][j]>may)
         may=M[i][j];
  return may;        
}
 
float promedioMatrizTriangularInferior(float M[MAX][MAX], int n)
{
  int i,j,c=0;
  float s=0;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(i>=j)
      {
         s = s + M[i][j];
         c++;
      }
  return s/c;
}
