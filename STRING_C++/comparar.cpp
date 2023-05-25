#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main(){
	string vogais[5]={"a","e","i","o","u"};
	char nome1[50];
	char nome2[50];
	char nome3[50];
	int tam1, tam2, tam3, menor, maior,i;
	
	cout<<"Digite o primeiro nome: ";
	cin.getline(nome1,50);
	cout<<"Digite o segundo nome: ";
	cin.getline(nome2,50);
	cout<<"Digite o terceiro nome: ";
	cin.getline(nome3,50);
	
	tam1=strlen(nome1);
	tam2=strlen(nome2);
	tam3=strlen(nome3);
	
	if (tam1<tam2){
		if(tam1<tam3){
		menor=tam1;
		cout<<"Primeiro nome e o menor!";
		}else{
			menor=tam3;
			cout<<"Terceiro nome e o menor";
		}
	}else {
		if(tam2<tam3){
		menor=tam2;
		cout<<"Segundo nome e o menor!";
		}else{
		menor=tam3;
		cout<<"Terceiro nome e o menor!";

		}
	}
	cout<<endl;
	
	if(tam1>tam2){
		if(tam1>tam3){
			maior=tam1;
			cout<<"Primeiro nome e maior!";
		}else{
			maior=tam3;
			cout<<"Terceiro nome e o maior!";
				
		}
	}else{
		if(tam2>tam3){
			maior=tam2;
			cout<<"Segundo nome e o maior!";
	}else{
		maior=tam3;
		cout<<"Terceiro nome e o maior!";
		
	}
	}
	cout<<endl;
	
	string txt("joao");
	string::iterator it;
	it=txt.end()-1;
	
	cout<<*it;
	
	
		
	
	
	


	cout<<endl;
	system ("pause");
	return (0);
}

