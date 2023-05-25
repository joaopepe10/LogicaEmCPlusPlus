#include <iostream>
using namespace std;

int main() {

int a, b, c, soma; //variavel tipo real EX: 7, -55.
float media; //variavel tipo decimal EX: 10.4, -7.5(Usa tbm a variavel DOUBLE que tem precisao maior em numeros decimais)
bool verd; //variavel BOOL verdadeiro_true(1) ou falso_false(0)
cout<< "Digite a primeira nota: ";
cin>>(a);
cout<< "Digite a segunda nota: ";
cin>>(b);
cout<< "Digite a terceira nota: ";
cin>>(c);

  

soma = a + b + c;
media = soma;
cout << media/3; //Comando Cout exibe a msg na tela.
return 0;
}