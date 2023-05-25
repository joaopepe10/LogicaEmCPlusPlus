#include <iostream>
using namespace std;
int main(){
	char nome[30];
	int cod,turno;
	float ht,sal,extra; //ht== horas trabalhadas
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite o numero de horas trabalhadas: ";
	cin>>ht;
	cout<<"\nDigite o turno: ";
	cin>>turno;
	cout<<"\nDigite o codigo do cargo [1 ou 2]: ";
	cin>>cod;
	
	if (cod==1){
		sal=ht*5.0;
		cout<<"Seu salario base e: R$"<<sal<<endl;
		if 		(turno == 1){
			extra=sal*0.03;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
			
		} else if (turno == 2){
			extra=sal*0.04;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
		}else if (turno == 3){
			extra=sal*0.04;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
		}
	
		
	//AQUI COMECA O CODIGO CASO A OPCAO ESCOLHIDA FOR 2
	}  else if (cod==2){
		sal=ht*8.0;
		cout<<"Seu salario base e: R$"<<sal<<endl;
		if 		(turno == 1){
			extra=sal*0.03;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
			
		} else if (turno == 2){
			extra=sal*0.04;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
		}else if (turno == 3){
			extra=sal*0.04;
			cout<<nome<<" como voce trabalha no turno "<<turno<<" voce recebera uma comissao de R$"<<extra;
			sal=sal+extra;
			cout<<"\nTotal do salario base agora e: R$"<<sal;
		}
	}
		
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
