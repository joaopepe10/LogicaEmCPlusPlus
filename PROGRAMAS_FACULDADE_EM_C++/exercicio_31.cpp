#include <iostream>
using namespace std;
int main(){
	int classe,opc,saida;
	float ht,salb=0,sall=0,des=0; //HT== HORAS TRABALHADAS
	char nome[30];
	cout<<"\t\tMENU SNOB CONFECCOES\n\n";
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"Digite a quantidade de horas trabalhadas por favor: ";
	cin>>ht;
	cout<<"Digite sua classe funcional:\n1\n2\n";
	cin>>classe;
	system("cls");
	inicio:
	system("cls");
	cout<<"OPERACOES DISPONIVEIS\n1-SALARIO LIQUIDO\n2-SALARIO BRUTO\n3-DESCONTO INSS\n";
	cin>>opc;
	if (opc==1){
		if (classe == 1){
			salb=ht*5;
			des=salb*0.11;
			sall=salb-des;
			cout<<nome<<" O seu salario liquido e: R$"<<sall;
		
		}else {
			salb=ht*9;
			des=salb*0.11;
			sall=salb-des;
			cout<<nome<<" O seu salario liquido e: R$"<<sall;
			}
	}else if(opc==2){
		system("cls");
		if (classe == 1){
			salb=ht*5;
			cout<<nome<<" O seu salario bruto e: R$"<<salb;
		} else{
			salb=ht*9;
			cout<<nome<<" O seu salario bruto e: R$"<<salb;
		}
		
		
	}else if(opc==3){
		system("cls");
		if (classe==1){
			salb=ht*5;
			des=salb*0.11;
			cout<<nome<<" O seu desconto do INSS e de: R$"<<des;
			
		}else {
			salb=ht*9;
			des=salb*0.11;
			cout<<nome<<" O seu desconto do INSS e de: R$"<<des;
			
		}
	}
	cout<<"\n\nDeseja realizar outra operacao?\n1-SIM\n2-NAO\n";
	cin>>saida;
	
	if (saida==1){
		goto inicio;
	}else {
		cout<<"Obrigado "<<nome<<", SNOB CONFECCOES agradece, volte sempre.";
	}
	
	
	
	
	
	cout<<endl;	
	system("pause");
	return (0);
}
