#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	int aleatorio[50],vt,soma,i;
	float media;
	srand(time(NULL));
	 
	 for( i=0;i<=95;i++){
	 	
	 	aleatorio[vt]=i;
	 		aleatorio[vt]=rand()%95;
	 	if (aleatorio[vt] >=30 && aleatorio[vt]<=95)
	 		cout<<aleatorio[vt]<<"\n";
	 		soma=soma+aleatorio[vt];
	 	
	}
	
	media=soma/vt;
	cout<<"A media e: "<<media<<"\n";
	
	 
	
	
	
	system("pause");	
	return(0);
}
