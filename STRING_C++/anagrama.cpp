#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char p1[20],p2[20];
	int i;
	int tam1,tam2;
	int cont1=0,cont2=0;
	
	cout<<"Digite a primeira palavra: ";
	cin>>p1;
	cout<<"Digite a segunda palavra: ";
	cin>>p2;
	
	tam1=strlen(p1);
	tam2=strlen(p2);
		
	for(i=0;i<tam1;i++){  //USANDO A TABELA ASCII EU SOMEI O VALOR DA PRIMEIRA PALAVRA
	cont1=cont1+p1[i];
	}
	for(i=0;i<tam2;i++){ //USANDO A TABELA ASCII EU SOMEI O VALOR DA SEGUNDA PALAVRA
	cont2=cont2+p2[i];
	}
	//USEI UMA COMPARACAO PARA VERIFICAR O VALOR DAS DUAS PALAVRAS, CASO O VALOR SEJA IGUAL, QUER DIZER QUE AMBAS AS PALAVRAS TEM O MESMO VALOR, PORTANTO SAO ANAGRAMAS!
	cont1==cont2?cout<<"Sao anagramas!":cout<<"Nao sao anagramas\n"; //OPERADOR TERNARIO PARA SIMPLIFICAR A LINHA DE CODIDO!

	cout<<endl;
	system ("pause");
	return (0);
}

