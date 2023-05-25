#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	srand(time(0));
	int a,i;
	int vetor1[5], vetor2[5], vet3[5*2];
	
	/*cout<<"Digite a quantidade de numeros do primeiro vetor e do segundo vetor: ";
	cin>>a; */

	for (i=0;i<5;i++){ //ATRIBUINDO O VALOR ALEATORIO  DO PRIMEIRO VETOR
		vetor1[i]= rand() %10;
		cout<<vetor1[i]<<" " ;
		
	} 
	cout<<"\n";
		
	for (i=0;i<5;i++){ //ATRIBUINDO O VALOR ALEATORIO  DO PRIMEIRO VETOR
		vetor2[i]= rand() %10;
		cout<<vetor2[i]<<" " ;

	}
		cout<<"\n";

	for (i=0;i<5;i++){
		vet3[i*2]= vetor1[i];
	}
		cout<<"\n";

	for (i=0;i<5;i++){
		vet3[i*2+1] = vetor2[i];
	}
	cout<<endl;
	cout<<"NUMEROS INTERCALADOS COM SUCESSO!\n";
	for(i=0;i<5*2;i++){
		cout<<"["<<vet3[i]<<"] ";
	}
	cout<<endl;
		
	
	/*for (i=0;i<a;i++){
		cout<<"\n"<<vetor1[i];
	}*/
	
	
	
	system("pause");
	return(0);
}
