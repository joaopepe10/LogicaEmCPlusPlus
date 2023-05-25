#include <iostream>
using namespace std;
int main(){
	int maior = 0, menor = 0, peso[5];
	
	for (int i = 0; i<5 ; i++){
		cout<<"DIGITE O PESO: ";
		cin>>peso[i];
		if(peso[i] > maior){
			maior = peso[i];
		}
		if(peso[i+1] < maior){
			menor = peso[i+1];
		}
	}

	cout<<"O MAIOR PESO E: "<<maior<<"\nO MENOR PESO E: "<<menor;

	cout<<endl;
	system ("pause");
	return (0);
}

