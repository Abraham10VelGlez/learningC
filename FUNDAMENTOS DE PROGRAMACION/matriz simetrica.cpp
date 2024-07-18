#include<iostream>
using namespace std;
 
#define MAX 10
 
void ordenMatriz(int &n);
void ingresoMatriz(float M[MAX][MAX], int f, int c);
void reporteMatriz(float M[MAX][MAX], int f, int c);
bool esSimetrica(float M[MAX][MAX], int n);
 
 
int main()
{
    float M[MAX][MAX];
    int n;
    ordenMatriz(n);
    ingresoMatriz(M,n,n);
    cout<<"Matriz ingresada"<<endl;
    reporteMatriz(M,n,n);
    if(esSimetrica(M,n))
        cout<<"La matriz es simetrica"<<endl;
    else
        cout<<"La matriz no es simetrica"<<endl;
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
 
void ingresoMatriz(float M[MAX][MAX], int f, int c)
{
     int i,j;
     for(i=0;i<f;i++)
       for(j=0;j<c;j++)
       {
    cout<<"M["<<i<<"]["<<j<<"]:";
    cin>>M[i][j];
      }
}
void reporteMatriz(float M[MAX][MAX],int f, int c)
{
     int i,j;
    for(i=0;i<f;i++)
    {
      for(j=0;j<c;j++)
          cout<<M[i][j]<<"t";
      cout<<endl;
    }
}
 
bool esSimetrica(float M[MAX][MAX], int n)
{
   int i,j;
   for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
       if(M[i][j]!=M[j][i])
         return false;
   return true;      
}
