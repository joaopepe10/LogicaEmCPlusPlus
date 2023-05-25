#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int aleatorio[50],contador,i,a;
	double media,soma=0;
	srand(time(NULL));
	 
	 for(i=0;i<=95;i++){
	 	
	 	aleatorio[contador]=rand()%95;
	if (aleatorio[contador] >=30 && aleatorio[contador]<=95){ 
	 	cout<<aleatorio[contador]<<"\n";
	 	}
	 	soma=soma+aleatorio[contador];
	 		
	}
	cout<<"O soma e: "<<soma<<"\n";
	media=soma/50;
	cout<<"A media e: "<<media<<"\n";
	
		for (a=0;a<=95;a++){
			if (aleatorio[contador] >= media){
			cout<<aleatorio[contador]<<"\n";
				a++;
			}	
		}
		
	return(0);
}
