#include <iostream>

using namespace std;

int main(){
	int x[10],y[10],i;
	
	for (i=0;i<10;i++){
		cout<<"Digite o valor que deseja ser invertido: ";
		cin>>x[i];
		
	}
	system("cls");
	for(i=0;i<10;i++){
		cout<<"{"<<x[i]<<"}";
	}
	cout<<"\nO valor invertido e: \n";
	for(i=10-1;i>=0;i--){
		y[i]=x[i];
		cout<<"{"<<y[i]<<"}";
	}
	cout<<"\nValor invertido com sucesso!"<<endl;
	
	
	
	system("pause");
	return(0);
}
