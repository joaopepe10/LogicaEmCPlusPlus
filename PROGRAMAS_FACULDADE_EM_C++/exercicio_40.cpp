    #include <iostream>
using namespace std;
int main(){
	string nome[10];
	char sexo[10];
	int idade[10],volei=0,opc[10];
	int quantM=0,quantF=0,quant_idade25a30=0;
	float soma_homem=0,soma_mulher=0,mediaM=0,mediaF=0;
	float mulher_basquete=0,mulher_matriculadas=0;
	
	for(int i=0;i<10;i++){
		cout<<"Qual seu sexo? [M] ou [F] ";
		cin>>sexo[i];
		cout<<"Qual sua idade? ";
		cin>>idade[i];
			if(sexo[i]=='m' or sexo[i]=='M'){
				quantM++;
				soma_homem=soma_homem+idade[i];	
			}
			if(sexo[i]=='F' or sexo[i]=='f'){
				quantF++;
				soma_mulher=soma_mulher+idade[i];
			}
		cout<<"Digite o nome do atleta numero "<<i+1<<" ";
		cin>>nome[i];
		cout<<"QUAL SUA MODALIDADE ESPORTIVA:\n\t1-VOLEI\n\t2-BASQUETE\n\t3-FUTSAL \n\t\t";
		cin>>opc[i];
		cout<<"\n\n";
		
		if(idade[i]>=25 or idade[i]<=30)
		quant_idade25a30++;
	
		if(sexo[i]=='f' or sexo[i]=='F'){
			mulher_matriculadas++;
			if(opc[i]==2){
				mulher_basquete=mulher_basquete+1;
			}
		}
		system("cls");
	}
	cout<<"Temos um total de: "<<quant_idade25a30<<" homens entre 25 a 30 anos.";
	cout<<"\nTemos um total de: "<<mulher_matriculadas/10<<" por cento mulheres matriculadas.\n";
	cout<<"Temos um total de: "<<mulher_basquete/mulher_matriculadas<<" por cento mulheres matriculadas no basquete.";
	
	mediaM=soma_homem/quantM;
	mediaF=soma_mulher/quantF;
	
	cout<<"\nMedia da idade dos homens e de: "<<mediaM<<endl;
	cout<<"Media da idade das mulheres e de: "<<mediaF;
	
	cout<<endl;
	system ("pause");
	return (0);
}

