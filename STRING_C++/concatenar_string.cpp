#include <iostream>
using namespace std;
int main(){
	
	char p1[5],p2[5],pc[10];
	int i,x;
	
	for (i=0;i<5;i++){
		cout<<"Digite letra por letra da primeira palavra[LIMITE 5 CARACTER]";
		cin>>p1[i];
		pc[i]=p1[i];
	}
	for (i=0;i<5;i++){
		cout<<"\nDigite letra por letra da segunda palavra[LIMITE 5 CARACTER]";
		cin>>p2[i];
		pc[i+5]=p2[i];
	}
	for (i=0;i<10;i++){
		cout<<pc[i];
	}
	
	
	



	cout<<endl;
	system ("pause");
	return (0);
}

