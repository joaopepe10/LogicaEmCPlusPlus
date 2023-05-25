#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char texto[50],inverso[50];
	int i,f=0;
	
	
	cout<<"Digite um palindromo:";
	gets(texto);
			
	for(i=strlen(texto)-1;i>=0;i--){
		inverso[f]=texto[i];
		f++;
	}
	inverso[f]='\0';
	
	if(strcmp(texto,inverso)==0){
		cout<<"E um palindromo!";
	}else{
		cout<<"Nao e um palindromo.";
	}
   


	cout<<endl;
	system ("pause");
	return (0);
}

