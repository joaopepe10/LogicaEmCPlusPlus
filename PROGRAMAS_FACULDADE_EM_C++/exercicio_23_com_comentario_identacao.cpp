#include<iostream>
using namespace std;
int main(){ //VARIAVEL DO TIPO REAL DECLARADA POIS AS NOTAS PODEM SER EM DECIMAIS
	float med_p, med_a, port, mat, dir;
	int p1,m2,d3;
		cout<<"Declare o peso da nota de portugues: ";
		cin>>p1;
		cout<<"Declare o peso da nota de matematica: ";
		cin>>m2;
		cout<<"Declare o peso da nota de direito: ";
		cin>>d3;
		system("cls");
		cout<<"Digite a nota de portugues: ";
		cin>>port;
		cout<<"Digite a nota de matematica: ";
		cin>>mat;
		cout<<"Digite a nota de direito: ";
		cin>>dir;
		cout<< "A media aritimetica e: " <<(mat+port+dir)/3<<"\n"; //A SOMA ESTA ENTRE PARENTESES PARA DAR PRIORIDADE, POIS SE ESTIVESSE FORA IRIA SER REALIZADA A OPERACAO DE DIVISAO PRIMEIRO
			med_p=port*p1+mat*m2+dir*d3;
			med_a=med_p/(p1+m2+d3);	
		cout<<"A media ponderada e: "<<med_a<<"\n";
	
	system("pause"); //PAUSE E PARA "CONGELAR" O PROGRAMA NA INTERFACE DELE E ELE N FECHAR SOZINHO
	return (0);
}
