#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int x1,x2,soma,sub,mult,quoc,resto,pot,real;
	
	cout<<"Digite o primeiro numero\n";
	cin>>x1;
	cout<<"Digite o segundo numero\n";
	cin>>x2;
	
	cout<<"O resultado da soma e: \n"<<x1+x2<<"\n";
	cout<<"O resultado da subtracao e: \n"<<x1-x2<<"\n";
	cout<<"O resultado da multiplicacao e: \n"<<x1*x2<<"\n";
	if(x1 && x2 !=0){
		cout<<"O resultado do quociente inteiro e: \n"<<x1/x2<<"\n";
		cout<<"O resultado do resto e: \n"<<x1%x2<<"\n";
		cout<<"O resultado da divisao em numero decimal e: \n"<<(float)x1/x2<<"\n";
	}
	cout<<"O resultado da potencia e: \n"<<pow(x1,x2)<<"\n";
	
	
	
		
	system("pause");	
	return (0);
}
