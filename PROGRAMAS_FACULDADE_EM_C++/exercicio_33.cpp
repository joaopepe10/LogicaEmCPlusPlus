#include <iostream>
using namespace std;
int main(){
	
	char nome[30];
	int idade;
	float rf; //rf== renda familiar
	
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite sua idade: ";
	cin>>idade;
	cout<<"\nDigite sua renda familiar: R$";
	cin>>rf;
	
	if (idade <=15){
		cout<<nome<<" voce e um atleta infantil.\n";
	}else if(idade>=16 && idade <=18){
		cout<<nome<<" voce e um atleta juvenil.\n";
	}else{
		cout<<nome<<" voce e um atleta adulto.\n";
	}
	
	if(rf<=1000.00){
	cout<<nome<<" voce pertence a classe media baixa.\n";
	}else if(rf>=1000.01 && rf<=3500.00){
	cout<<nome<<" voce pertence a classe media.\n";
 	}else {
 		cout<<nome<<" voce pertence a classe media alta.\n";
	 }
	
	
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
