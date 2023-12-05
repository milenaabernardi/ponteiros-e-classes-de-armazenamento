#include <iostream>
using namespace std;

int main(){
    int num1 = 10, num2 = 20;
    int *ponteiro1 = &num1, *ponteiro2 = &num2;

    cout << "ponteiro1 = " << ponteiro1 << endl;
    cout << "ponteiro2 = " << ponteiro2 << endl;

    if(ponteiro1 == ponteiro2)
        cout << "ponteiro1 e ponteiro2 apontam para o mesmo endereco de memoria" << endl;
    else
        cout << "ponteiro1 e ponteiro2 apontam para enderecos diferentes de memoria" << endl;

    if(*ponteiro1 == *ponteiro2)
        cout << "ponteiro1 e ponteiro2 sao iguais" << endl;
    else
        cout << "ponteiro1 e ponteiro2 sao diferentes" << endl;

    return 0;
}