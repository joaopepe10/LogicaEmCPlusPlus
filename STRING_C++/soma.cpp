#include <iostream>
using namespace std;
int main(){
	char nome[]="joao";
	int soma=0;
	
	for(int i=0;i!='0';i++){
		if(	   nome[1] == 'a' ||
               nome[2] == 'e' || 
               nome[3] == 'i' || 
               nome[2] == 'o' ||
               nome[5] == 'u')
               soma++;
               
	}
	
	cout<<soma<<endl;



	cout<<endl;
	system ("pause");
	return (0);
}

