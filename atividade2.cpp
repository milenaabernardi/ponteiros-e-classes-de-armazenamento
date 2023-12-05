#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;
    const int b = 3;
    
    cout << "valor original do ponteiro: " << *ptr << endl; 
    
    *ptr += b;
    
    cout << "valor do ponteiro apos adicao da constante: " << *ptr << endl;

    return 0;
}