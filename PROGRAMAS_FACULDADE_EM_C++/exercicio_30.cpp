#include <iostream>
using namespace std;

int main(){
	int r;
	char sexo;
	float altura;
	cout<<"Vamos calcular o peso ideal?\n1-SIM\n2-NAO\n";
	cin>>r;
	
	if (r==1){
		cout<<"Qual o seu sexo?[M=MASCULINO ou F=FEMININO] ";
		cin>>sexo;
		cout<<"Qual sua altura? ";
		cin>>altura;
		if (sexo == 'M' || sexo== 'm'){
			cout<<"O peso ideal para homens com a altura de "<<altura<<" e de: "<<(72.7*altura)-58<<" KG";
		}else if(sexo == 'f' || sexo== 'F') {
			cout<<"O peso ideal para mulheres com a altura de "<<altura<<" e de: "<<(61.1*altura)-44.7<<" KG";
		}
		
	}else{
		cout<<"Fico aguardando seu retorno!";
	}
	
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
