/*Suma un matriz de 3x3*/

#include<iostream>
#include<stdio.h>

using namespace std;

void Suma(int mat1[3][3],int mat2[3][3])
{

    int mat3[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
            mat3[i][j]=mat1[i][j]+ mat2[i][j];
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<mat3[i][j];
        }
        cout<<"\n";
    }
}


int main()
{

    int matriz1[3][3];
    int matriz2[3][3];
    for(int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Porfavor introduzca el valor de la matris 1 ["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Porfavor introduzca el valor de la matris 2 ["<<i<<"]["<<j<<"]: ";
            cin>>matriz2[i][j];   
        }
    }


    Suma(matriz1,matriz2);

}
