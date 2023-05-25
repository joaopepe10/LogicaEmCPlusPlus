#include <iostream>
#include <string>

using namespace std;
int main(){
	int i, conta = 0;
	char caracteres[50], c;

	cout<<"Digite uma string: ";
	cin.getline(caracteres,50);

	cout<<"Informe um caractere da string: ";
	cin>>c;

	for(i=0; caracteres[i]!='\0'; i++) { //ENQUANTO A VARIAVEL CARACTERES ESTIVER DIFERENTE DE \0, O PROGRAMA IRA PERCORRER TODA A STRING
		if(caracteres[i]==c)
			conta++;
	}

	if(conta==0) {
		cout<<"Caractere nao encontrado";
	} else if(conta!=0){
		cout<<"Quantidade de vezes que o caracter ["<<c<<"]"<<" se repete e de ["<<conta<<"] vezes.";
	}



	cout<<endl;
	system ("pause");
	return (0);
}

