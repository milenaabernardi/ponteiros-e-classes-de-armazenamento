#include <iostream>
using namespace std;

int main(){
    int var1 = 10;
    int var2 = 20;

    int* ponteiro1 = &var1;
    int* ponteiro2 = &var2;

    if (ponteiro1 != ponteiro2){
        int diferenca = (ponteiro2 - ponteiro1) / sizeof(int);
        cout << "a diferenca entre os dois ponteiros e: " << diferenca << endl;
    } else{
        cout << "os dois ponteiros apontam para o mesmo endereco. nao podemos realizar a subtracao." << endl;
    }

    return 0;
}