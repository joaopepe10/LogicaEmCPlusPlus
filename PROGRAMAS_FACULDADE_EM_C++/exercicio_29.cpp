#include <iostream>
using namespace std;
int main(){
	//string nome;
	int idade;
	float sal;
	char sexo,nome[30];
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite seu sexo:[RESPONDER COM CARACTER M OU F] ";
	cin>>sexo;
	cout<<"\nDigite sua idade: ";
	cin>>idade;
	cout<<"\nDigite seu salario: ";
	cin>>sal;
	if (sexo== 'm' ||sexo == 'M'   ){
		cout<<nome<<" e um homem, portanto sua idade e: "<<idade<<" anos.";
	}else if(sexo =='f' or sexo== 'F'){
		cout<<nome<<" e uma mulher, portanto seu salario e: R$"<<sal;
	}
	
	
	
	cout<<endl;	
	system("pause");
	return (0);
}
