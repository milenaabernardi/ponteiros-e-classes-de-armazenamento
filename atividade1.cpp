#include <iostream>
using namespace std;

int main(){
    int numero = 10;
    int* ponteiro = &numero;
    
    cout << "valor da variavel: " << *ponteiro << endl;
    
    ponteiro++;
    
    cout << "valor da variavel depois de incrementar o ponteiro: " << *ponteiro << endl;
    
    ponteiro--;
    
    cout << "valor da variavel depois de decrementar o ponteiro: " << *ponteiro << endl;

    return 0;
}