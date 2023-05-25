#include <iostream>
using namespace std;
int main(){
int n, i, h, l, s = 0; // Inicializar a soma "s" em zero
    cout << "Digite 5 números:\n";

    for(i=0; i<5; i++){
        cin >> n;
        s+=n;
        if (i==0) {l=n; h=n;} // Inicializar os valores de "l" e "h" no primeiro loop
        if (n<l) { l=n; }
        if (n>h) { h=n; }
    }
    cout <<"VALOR MENOR: "<< l <<"VALOR MAIOR: "<< h;


	cout<<endl;
	system ("pause");
	return (0);
}

