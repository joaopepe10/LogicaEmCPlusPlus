#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main(){
	string nome1,nome2,nome3;
	int tam1, tam2, tam3, menor, maior,i;
	
	cout<<"Digite o primeiro nome: ";
	getline(cin,nome1);
	cout<<"Digite o segundo nome: ";
	getline(cin,nome2);
	cout<<"Digite o terceiro nome: ";
	getline(cin,nome3);
	cout<<endl;
	
	tam1=nome1.size();
	tam2=nome2.size();
	tam3=nome3.size();
	
	if (tam1<tam2){
		if(tam1<tam3){
		menor=tam1;
		cout<<"Primeiro nome e o menor!";
		}else if(tam3<tam1){
			menor=tam3;
			cout<<"Terceiro nome e o menor";
		}else if(tam1==tam2){
			cout<<"Nao ha um tamanho menor, os nomes tem a mesma quantidade de caracters!";
		}
	}else {
		if(tam2<tam3){
		menor=tam2;
		cout<<"Segundo nome e o menor!";
		}else if(tam3<tam2){
		menor=tam3;
		cout<<"Terceiro nome e o menor!";

		}else if(tam2==tam3){
		cout<<"Nao ha um tamanho menor, os nomes tem a mesma quantidade de caracters!";	
		}
	}
	cout<<endl;
	
	if(tam1>tam2){
		if(tam1>tam3){
			maior=tam1;
			cout<<"Primeiro nome e maior!";
		}else if(tam3>tam1){
			maior=tam3;
			cout<<"Terceiro nome e o maior!";
				
		}else if(tam1==tam2){
			cout<<"Nao ha tamanho maior, todos os nomes tem a mesma quantidade de caracters!";
		}
	}else{
		if(tam2>tam3){
			maior=tam2;
			cout<<"Segundo nome e o maior!";
	}else if(tam3>tam2){
		maior=tam3;
		cout<<"Terceiro nome e o maior!";
		
	}else if(tam2==tam3){
			cout<<"Nao ha tamanho maior, todos os nomes tem a mesma quantidade de caracters!";
	}
	}
	
	cout<<endl;
	system("pause");
	return(0);	
}
