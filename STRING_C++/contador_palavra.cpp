#include <iostream>
using namespace std;
int main(){

	char s [100];
	int i=0,cont=0;
	
	cout<<"Digite um texto:";
	fgets(s, 80,stdin);
	
	while(s[i]!='\n' && s[i]!= '\0'){
		
		while(s[i] == ' ' ){
		i++;
		}
		if (s[i]!='\n' && s[i]!='\0'){
			cont++;
			while (s[i]!=' '&& s[i]!='\n' && s[i]!='\0'){
			i++;
		}	
		}
	}
	cout<<"Numero total de palavras: "<<cont;

	cout<<endl;
	system ("pause");
	return (0);
}

