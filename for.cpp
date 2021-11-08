#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count=0;
    int limite=10;
    vector <int> v1;
    for(int i=0; i<=limite; i=i+1){
        v1.push_back(i);
    }

    cout << "tamaño vector con sizeof " << sizeof(v1) << endl ;
    cout << "tamaño vector con size() " << v1.size() << endl ;
    v1.pop_back();
    cout << "tamaño vector con sizeof luego de una extracción " << sizeof(v1) << endl ;
    cout << "tamaño vector con size() luego de una extracción " << v1.size() << endl ;
    return 0;
}



