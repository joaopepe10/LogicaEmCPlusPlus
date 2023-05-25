#include <iostream>
using namespace std;
int main(){
	char nome[30];
	float salb,sall,des;
	
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite seu salario bruto: R$";
	cin>>salb;
	
	if(salb <=800.00){
		des=salb*0.09;
		sall=salb-des;
		cout<<nome<<" seu salario liquido e: R$"<<sall;
	}else if(salb >=800.01 && salb<= 1500.00){
		des=salb*0.10;
		sall=salb-des;
		cout<<nome<<" seu salario liquido e: R$"<<sall;

	}else if(salb >1500.01){
		des=salb*0.11;
		sall=salb-des;
		cout<<nome<<" seu salario liquido e: R$"<<sall;
	}
	
	
	
	
	cout<<endl;	
	system("pause");
	return(0);
}
