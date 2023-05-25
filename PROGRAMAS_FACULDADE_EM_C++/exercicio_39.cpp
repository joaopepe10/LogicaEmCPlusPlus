#include <iostream>
using namespace std;
	int main(){
	string nome[10];
	float ht[10],sph[10],salariobruto[10],desconto[10],salarioliquido[10]; //sph= salario por hora ht=horas trabalhadas

	cout<<"\t\t\t NEW  EMPIRE  CONFECCOES\n\n\n\n";

	for(int i=0;i<10;i++){
		cout<<"Digite o nome do funcionario: ";
		cin>>nome[i];
		cout<<"Digite o numero de horas trabalhadas: ";
		cin>>ht[i];
		cout<<"Digite o valor do salario por hora: ";
		cin>>sph[i];
		salariobruto[i]=ht[i]*sph[i];
		desconto[i]=salariobruto[i]*0.11;
		salarioliquido[i]=salariobruto[i]-desconto[i];
		system("cls");
	}
	for(int i=0;i<10;i++){
	cout<<"O salario liquido de "<<nome[i]<<" e de: R$"<<salarioliquido[i]<<endl;	
	}
	cout<<endl;
	system ("pause");
	return (0);
}

