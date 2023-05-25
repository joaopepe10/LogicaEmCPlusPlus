#include <iostream>
using namespace std;
int main (){
	float velm, velkm;
	
	cout << "Digite o valor em m/s que voce quer converter: \n";
	cin >> velm;
	system("cls");
	cout << "Digite o valor em m/s que voce quer converter: \n";
	cout << velm<<"M/s";
	
	velkm=velm*3.6;
	
	cout << "\nO valor da conversao em Km/h e: \n"<<velkm<<"KM/h"<<"\n";

	
	
	
	system("pause");
	return (0);
}
