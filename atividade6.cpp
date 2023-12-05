#include <iostream>
using namespace std;

void funcaoEstatica(){
    static int valorEstatico = 0;
    valorEstatico++;
    cout << "o valor da variavel estatica" << valorEstatico << " e: " << valorEstatico << endl;
}

int main(){
    for(int i = 0; i < 5; i++){
        funcaoEstatica();
    }
    return 0;
}