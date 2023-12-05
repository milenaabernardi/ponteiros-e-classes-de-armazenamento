#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    if(p1 > p2){
        cout << "a variavel em um endereco de memoria mais alto e: " << a << endl;
    } else if(p1 < p2){
        cout << "a variavel em um endereco de memoria mais alto e: " << b << endl;
    } else{
        cout << "os enderecos dos ponteiros sao iguais. verifique novamente." << endl;
    }

    return 0;
}