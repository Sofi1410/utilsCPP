#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count=0;
    int limite=10;
    vector <int> v1;
    //tamaño predefinido para las matrices
    int matriz[4][2];
    int filas= sizeof(matriz)/sizeof(matriz[0]);
    int columnas= sizeof(matriz[0])/sizeof(matriz[0][0]);
    cout << filas <<endl ;
    cout << columnas <<endl ;
    cout << matriz <<endl ;
    cout << sizeof(matriz) <<endl ;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j]=count;
            count++;
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<endl;
        }
    }
    return 0;
}