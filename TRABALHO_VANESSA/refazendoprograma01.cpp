#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//O PROGRAMA E PARA GERAR UM NUMERO ALEATORIO ENTRE 30 E 95, ARMAZENDANDO ELE NO VETOR COM 50 DE TAMANHO
//DPS FAZER A SOMA E A MEDIA DO VETOR
int main(){ 
	int i,inf=30,sup=95,alet[50],cont,a,b=0,c; //SUP NO CASO E O NUMERO MAXIMO QUE EU QUERO QUE APARECA NO CASO O MEU ERA O 95
	//INF O NUMERO MININO QUE EU QUERIA QUE COMESSACE A CONTAGEM QUE NO CASO E O 30
	double media,soma=0,quant=50,maior[50];
	srand(time(0)); //ESSA FUNCAO FAZ COM QUE GERE NUMEROS A PARTIR DO HORARIO DA EXECUCAO DO PROGRAMA
	
	
	
	for (i=0;i<quant;i++){ //LOOP PARA GERAR O NUMERO ALEATORIO E JA FAZENDO A SOMA DO MESMO, ATRIBUINDO CADA NUMERO ALEATORIO A VARIAVEL SOMA
		alet[i]=(rand()%(sup-inf+1))+inf;
		cout<<b++<<"-Numero gerado e: "<<alet[i]<<endl; //IRA IMPRIMIR CADA NUMERO ALEATORIO PARA DPS CONFERIR SE TODOS OS DADOS BATEM
		soma=soma+alet[i];	} //ATRIBUI A SOMA NO INICIO O VALOR=0 PARA JA DETERMINAR QUE ELA ESTAVA COM VALOR 0.
		
	
	cout<<"A soma e: "<<soma<<"\nA media e: "; //IMPRIMI A SOMA PARA TESTE FUTURAMENTE
	media=soma/quant; 
	cout<<media<<endl;
	
	
	for(i=0;i<quant;i++){ //LOOP DE ATRIBUIR CADA VETOR INTEIRO PARA CADA VETOR REAL, FAZENDO ISSO 50 VEZES.
		maior[i]=alet[i];
	}
	
	for(i=0;i<quant;i++){ //FIZ UMA VERIFICACAO PARA VER SE O NUMERO ATRIBUIDO A VARIAVEL "MAIOR" E >= A MEDIA, CASO FOR, IMPRIMIR O COUT
		if(maior[i]>=media){	
		maior[i]=alet[i];
		c++;
		cout<<"O numero acima da media e: "<<maior[i]<<endl; //INFORMA QUAL NUMERO ESTA ACIMA DA MEDIA
		
		}
		
		
		
	}
	cout<<"Um total de ["<<c<<" numeros] esta acima da media.\n";	
		

	system("pause");	
	return (0);
}
