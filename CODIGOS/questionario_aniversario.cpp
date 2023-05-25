#include <iostream>
using namespace std;
int main () {
	int dia, mes, ano;
	cout<<"\nDigite o ano em que sua mae nasceu \n";
	cin>>ano;
		if (ano==1977){
			cout << "Voce acertou \n";
		}else {
			cout<<"Voce errou \n";
		}
	
	cout<<"\nDigite o mes em que sua mae nasceu\n";
	cin>>mes;
		if (mes==1 or mes==01){
			cout<<"Voce acertou \n";
		}else {
			cout<<"Voce errou \n";
	    }
	cout<<"\nDigite o dia em que sua mae nasceu \n";
	cin>>dia;
		if (dia==8){
			cout<<"Voce acertou \n\n";
		}else {
			cout<<"Voce errou \n";
	    }
	
	
	
	
	
	system("pause");
	return (0);
}
