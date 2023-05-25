#include <iostream>
using namespace std;
int main(){
	
	int freq=0,i;
	float soma=0,media,n[4];
	char nome[30];
	
	cout<<"Digite o nome do aluno: ";
	cin>>nome;
	
	cout<<endl;
	for(i=1;i<5;i++){
		cout<<"Digite a "<<i<<" nota: ";
		cin>>n[i];
		soma=soma+n[i];
	}
	
	cout<<"A somatoria das notas de "<<nome<<" e: "<<soma<<endl;
	media=soma/4;
	cout<<"A media de "<<nome<<" e de: "<<media<<endl;
	/*system("pause");
	if (media >= 60 && freq >= 160){
	system("cls");
	
		cout<<nome<<" esta aprovado.\n\n\t\tPARABEEENS, BOAS FERIAS!!!";
	}else  (media<60 && aula <160){
		cout<<nome<<" foi reprovado, infelizmente voce vai repetir de anos, nos vemos anos que vem.";
	}
	*/
	cout<<"Digite a frequencia de "<<nome<<" ";
	cin>>freq;	
	
	if (media >= 60 && freq >= 160){
		cout<<nome<<" esta aprovado.\n\n\t\tPARABEEENS, BOAS FERIAS!!!\n\n";
	}else  {
		cout<<nome<<" foi reprovado, infelizmente voce vai repetir de ano, nos vemos anos que vem.";
	}
	
	
	

	cout<<endl;
	system("pause");
	return(0);
}

