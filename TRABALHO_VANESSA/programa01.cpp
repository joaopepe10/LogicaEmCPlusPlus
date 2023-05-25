#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int aleatorio[50],i,a,contador;
	double media,soma=0;
	srand(time(NULL));

	 for(i=0;i<=95;i++){

	 	aleatorio[contador]=rand()%96;
	if (aleatorio[contador] >=30 && aleatorio[contador]<=95){
	 	cout<<aleatorio[contador]<<"\n";
	 	}
	 	soma=soma+aleatorio[contador];

	}
	cout<<"O soma e: "<<soma<<"\n";
	media=soma/50;
	cout<<"A media e: "<<media<<"\n";
	
	
	system("pause");
	return (0);
}
