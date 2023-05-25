#include <iostream>
using namespace std;
int main(){
	char nome[30];
	int numf;
	float des;
	
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite quantos filhos voce tem: ";
	cin>>numf;
	
	if (numf==1){
		des=120*0.1;
		cout<<nome<<" voce tera um desconto de R$"<<des;
		des=120-des;
		cout<<", totalizando o valor final de: R$"<<des;
	}else if (numf>=2 && numf<=3){
		des=120*0.15;
		cout<<nome<<" voce tera um desconto de R$"<<des;
		des=120-des;
		cout<<", totalizando o valor final de: R$"<<des;
	}else {
		des=120*0.2;
		cout<<nome<<" voce tera um desconto de R$"<<des;
		des=120-des;
		cout<<", totalizando o valor final de: R$"<<des;	
		}
	
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
