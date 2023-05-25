#include <iostream>
#include <string>

using namespace std;
int main(){
	char nome1[50], nome2[50], nome3[50], a1[1]={'a'}, e1[1]={'e'}, i1[1]={'i'}, o1[1]={'o'}, u1[1]={'u'};
	int i, contador1=0,contador2=0,contador3=0;
	cout<<"Digite o primeiro nome: ";
	cin.getline(nome1,50);
	/*cout<<"Digite o primeiro nome: ";
	cin.getline(nome2,50);
	cout<<"Digite o primeiro nome: ";
	cin.getline(nome3,50);*/
	
	for (i=0;i!='\0';i++){
		if(nome1[i]== a1[0] ||nome1[i]== e1[0]||nome1[i]==i1[0]||nome1[i]==e1[0]||nome1[i]==o1[0]||nome1[i]==u1[0]);
		contador1=contador1+1;
	}
	cout<<"QUANTIDADE  DE VOGAIS DO PRIMEIRO NOME: "<<contador1;



	cout<<endl;
	system ("pause");
	return (0);
}

