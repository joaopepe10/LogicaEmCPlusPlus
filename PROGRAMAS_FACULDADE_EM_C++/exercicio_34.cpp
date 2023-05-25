#include <iostream>
using namespace std;
int main(){
	char nome[30];
	int turno;
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite seu turno[ENTRE 1 E 3]: ";
	cin>>turno;
	
	if (turno==1){
		cout<<nome<<" seu salario e: R$450.00";
	}
	if (turno==2){
		cout<<nome<<" seu salario e: R$490.00";
	}else if(turno==3){
		cout<<nome<<" seu salario e: R$650.00";
	}
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
