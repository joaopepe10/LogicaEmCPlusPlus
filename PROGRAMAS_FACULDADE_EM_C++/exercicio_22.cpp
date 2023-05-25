#include <iostream>
using namespace std;
int main (){
   float far, cel;
   cout << "Digite a temperatura em Fahrenheit que deseja converter para Celsius: \n";
   cin >> far;
   cel=(far-32)/9*5;
   cout << "A temperatura em Celsius e: \n"<<cel<<"\n";
   
      
system("pause");
	return (0);
}
