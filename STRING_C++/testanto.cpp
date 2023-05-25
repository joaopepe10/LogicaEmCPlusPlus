#include <iostream>
#include <string>

using namespace std;
int main(){
string nome;
getline(cin,nome);
int i,contador=0,tam;

tam=nome.size();

string::iterator it;

	for(i=0;i<tam;i++){
		it = nome.end()-1-i;
		if(*it =='a'||*it =='e'||*it =='i'||*it =='o'||*it =='u'||*it =='A'||*it =='E'||*it =='I'||*it =='O'||*it =='U'){  
			contador++;
		}
		
	}
	cout<<endl<<contador;

	cout<<endl;
	system ("pause");
	return (0);
}

