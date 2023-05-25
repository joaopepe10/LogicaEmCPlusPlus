#include <iostream>
using namespace std;
int main(){
	char nome[30];
	int imp,tipo,valorimp=0;
	float iu,tbr=38.14,tbc=64.69,vsl,ti,conta;
	
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"\nDigite o numero de impulsos deste mes: ";
	cin>>imp;
		if (imp>100){
			valorimp=imp-100;
			valorimp=valorimp*0.15;
			cout<<"Valor extra devido o numero de impulsos superior a 100 e de: R$"<<valorimp;
		}
	cout<<"\nTotal de interubanos gasto no mes: R$";
	cin>>iu;
	cout<<"\nQual tipo de telefone voce usa?\n1-RESIDENCIAL\n2-COMERCIAL\n";
	cin>>tipo;
	
	if (tipo==1){
		cout<<nome<<" sua tarifa basica e de: R$"<<tbr;
		ti=iu*0.05;
		ti=ti+iu;
		cout<<"\n"<<nome<<" tarifa de interurbano e de: R$"<<ti<<endl;
		conta=tbr+ti+valorimp;
		cout<<nome<<" o valor total da conta e de: R$"<<conta;
		
		
	}else if(tipo==2){
	
		cout<<nome<<" sua tarifa basica e de: R$"<<tbc;
		ti=iu*0.05;
		ti=ti+iu;
		cout<<"\n"<<nome<<" tarifa de interurbano e de: R$"<<ti<<endl;
		conta=tbc+ti+valorimp;
		cout<<nome<<" o valor total da conta e de: R$"<<conta;
		}
	
	
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
