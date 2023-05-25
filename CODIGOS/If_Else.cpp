#include <iostream>
using namespace std;

int main() {
   
   int a, b;

   cout << "Tente acertar o dia que eu nasci";
   cin >> a;

   if (a==28) {
    cout << "Voce acertou";

   } else {
    cout << "Voce errou";
   }

   cout << "Tente acertar o mes que eu nasci, em numeral";
   cin >> b;

   if (a==11) {
    cout << "Voce acertou em cheio";

   } else {
    cout << "Voce errou feio";
   }

   return 0
}