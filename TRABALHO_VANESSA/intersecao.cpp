#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main(){
	int tam,i,x;
	/*cout<<"Digite o tamanho do vetor: ";
	cin>>tam;*/
	
	int vt1[20],vt2[20],vt3[20*2];
	
	cout<<"NUMEROS DO PRIMEIRO VETOR: \n";
	for (i=0;i<10;i++){
		vt1[i]= rand()%20;
		cout<<" "<<vt1[i];

	}
	cout<<"\nNUMEROS DO SEGUNDO VETOR: \n";
	for (x=0;x<10;x++){
		vt2[x]= rand()%20;
		cout<<" "<<vt2[x];
	}
	cout<<endl;
	/*	for (i=0;i<10;i++){
		
		vt3[i]=0;
		}*/
	cout<<"NUMEROS EM COMUM  DO PRIMEIRO E SEGUNDO VETOR: \n";
		for (i=0;i<10;i++){
			vt3[i]=0;
			}

	for (i=0;i<10;i++){
		for(x=10;x<10*2;x++){
			if (vt1[i] == vt2[x]){
				vt3[i]=vt1[x];
			} else{}
			
		}
		
	}
	
	for (i=0;i<10;i++){
		if(vt3[i]!=0){
			cout<<vt3[i]<<"\n";
		} else{}
	}

	
	
	
	
	
	cout<<endl;
	system("pause");	
	return (0);
}
