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
		}else if(tam2<tam1){
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
		}else if(tam2>tam1){
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
	cout<<"\n"<<endl;
	
	int contavogal=0;
	
	string::iterator it1;
	string::iterator it2;
	string::iterator it3;
	
	it1 = nome1.end()-1;
	it2 = nome2.end()-1;
	it3 = nome3.end()-1;

	
	//cout<<*it1<<endl<<*it2<<endl<<*it3; So para conferir se estava direcionando para o ultimo caracter da string.
	
	if(*it1=='a'){
	contavogal++;
	cout<<"\nPrimeiro nome terminado na volgal A."<<endl;
	}else {
		cout<<"Primeiro nome nao terminado com a vogal A"<<endl;
	}
	
	if(*it2=='a'){
	contavogal++;
	cout<<"Segundo nome terminado na volgal A."<<endl;
	}else {
		cout<<"Segundo nome nao terminado com a vogal A"<<endl;
	}
	
	if(*it3=='a'){
	contavogal++;
	cout<<"Terceiro nome terminado na volgal A."<<endl;
	}else {
		cout<<"Terceiro nome nao terminado com a vogal A"<<endl;
	}
	
	
	
	cout<<"\nTotal de: ["<<contavogal<<"] nomes terminados com a vogal A.\n";
	
	int contador1=0,contador2=0,contador3=0;
	
	
	for(i=0;i<tam1;i++){
		it1 = nome1.end()-1-i;
		if(*it1 =='a'||*it1 =='e'||*it1 =='i'||*it1 =='o'||*it1 =='u'||*it1 =='A'||*it1 =='E'||*it1 =='I'||*it1 =='O'||*it1 =='U'){  
			contador1++;
		}
		
	}
	
	for(i=0;i<tam2;i++){
		it2 = nome2.end()-1-i;
		if(*it2 =='a'||*it2 =='e'||*it2 =='i'||*it2 =='o'||*it2 =='u'||*it2 =='A'||*it2 =='E'||*it2 =='I'||*it2 =='O'||*it2 =='U'){  
			contador2++;
		}
		
	}
	
	for(i=0;i<tam3;i++){
		it3 = nome3.end()-1-i;
		if(*it3 =='a'||*it3 =='e'||*it3 =='i'||*it3 =='o'||*it3 =='u'||*it3 =='A'||*it3 =='E'||*it3 =='I'||*it3 =='O'||*it3 =='U'){  
			contador3++;
		}
		
	}	
	
	cout<<"\nO primeiro nome tem "<<contador1<<" vogais.\n";
	cout<<"O segundo nome tem "<<contador2<<" vogais.\n";
	cout<<"O terceiro nome tem "<<contador3<<" vogais.";
	


	cout<<"\n\n"<<endl;
	system ("pause");
	return (0);
}

