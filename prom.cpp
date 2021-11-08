#include <string>
#include <iostream>
using namespace std;
int main(){
	float lenguaje = 6.0;
    float mates = 6.8;
    float biologia = 5.6;
    float historia = 7.0;
    float promedio = (lenguaje + mates + biologia + historia)/4;
    int modulo=5%2;
    string mensaje1="acá el promedio: ";
    string mensaje2="acá el módulo: ";
    cout<< mensaje1 ;
    cout<<promedio <<endl;
    cout<< mensaje2 << modulo << " tambien texto así";
    return 0;
}
