#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count=0;
    int limite=10;
    vector <int> v1;
    while (count<limite){
        cout << count <<endl ;
        v1.push_back(count);
        count++;
    }
    cout << v1.size() << endl ;
    v1.pop_back();
    cout << v1.size() ;
    return 0;
}