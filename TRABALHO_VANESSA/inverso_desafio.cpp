#include <iostream>

using namespace std;

int main(){
	int x[10],i;
	
	for (i=0;i<10;i++){
		cout<<"Digite o valor que deseja ser invertido: ";
		cin>>x[i];
		
	}
	for(i=10-1;i>=0;i--){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	
	system("pause");
	return(0);
}
