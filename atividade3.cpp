#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    const int b = 5;

    *ptr -= b;

    cout << "o valor de 'a' apos a subtracao e: " << *ptr << endl;

    return 0;
}