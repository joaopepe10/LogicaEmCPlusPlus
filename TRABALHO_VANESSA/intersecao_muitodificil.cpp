#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main(){
	int tam;
	cout<<"Digite o tamanho que voce deseja os vetores: ";
	cin>>tam;
	cout<<endl;
	
	srand(time(NULL));
	
	
	int v1[tam],v2[tam],u[tam],i[tam],x,y;
	
	cout<<"Primeiro vetor: ";
	for (x=0;x<tam;x++){  //ATRIBUINDO VALOR DO PRIMEIRO VETOR
		v1[x]=rand()%100+1;
		u[x]=v1[x];
		cout<<v1[x]<<" ";
		
	}
	cout<<endl;
	cout<<"Segundo vetor: ";	
	for (x=0;x<tam;x++){ //ATRIBUINDO VALOR DO SEGUNDO VETOR
		v2[x]  = rand()%100+1;
		u[x+tam]= v2[x];
		cout<<v2[x]<<" ";
		

		
	}
	cout<<endl;
	
	cout<<"\Numero armazenado  dos dois vetores: ";
	for (x=0;x<tam*2;x++){
		cout<<" "<<u[x];
	}
	cout<<endl;
	for (x=0;x<tam;x++){
		i[x]=0;
	}
	
	
	
	cout<<"NUMEROS QUE SE REPETIRAM: ";
	for (x=0;x<tam;x++){
		for (y=tam;y<tam*2;y++){
			if(u[x] == u[y])
			i[x]=u[x];
			
			
		} 
	}
	
	for(x=0;x<tam;x++){
		if(i[x] !=0){cout<<"\n "<<i[x];		}
	}
	
	
	
	
	
	
	
	
	
	cout<<endl;
	system("pause");
	return(0);
}
