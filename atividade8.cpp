#include <iostream>
using namespace std;

struct var_registro {
    int valor;
};

void incrementa_valor(var_registro &vr){
    vr.valor++;
}

int main(){
    var_registro registro;
    registro.valor = 0;

    for (int i = 0; i < 10; i++){
        incrementa_valor(registro);
        cout << "valor apos chamada " << i+1 << ": " << registro.valor << endl;
    }

    return 0;
}