#include <iostream>
using namespace std;
int main(){
 
	float postos[]={8,9.8,12,15.7,22.4,30},combustivel,consumo,percurso_em_km; //distancia dos postos em km
	
	cout<<"DIGITE A QUANTIDADE EM LITROS QUE VOCE TEM: ";
	cin>>combustivel;
	cout<<"DIGITE O CONSUMO MEDIO DE COMBUSTIVEL POR LITRO DO SEU VEICULO: ";
	cin>>consumo;
	percurso_em_km=combustivel*consumo;
	
	for(int i=0;i<6;i++){
	if(percurso_em_km<=postos[i]){
		cout<<"O posto mais proximo esta a "<<postos[i]<<"KM";
		break;
	}
	
	}
	
	
	



	cout<<endl;
	system ("pause");
	return (0);
}

