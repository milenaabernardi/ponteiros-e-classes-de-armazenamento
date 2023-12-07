#include <iostream>
#include "extern.cpp"
using namespace std;

double a = 12.0;
extern void troca();

int main(){
cout << "Inicialmente: " << a << endl;
troca();
}