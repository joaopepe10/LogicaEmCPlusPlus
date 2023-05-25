#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	inicio:
	system("cls");
	enum jogo{pedra=1,papel,tesoura};
	int jogador,computador,cont1=0,cont2=0,parada=0;
	 jogo game;
	
	
	
	
	
	cout<<"\t\tBora jogar PEDRA, PAPEL E TESOURA!\nSeu adversario sera o computador!\n";
	cout<<"Jogador, digite sua opcao:\n1-Pedra\n2-Papel\n3-Tesoura\n\n";
	cin>>jogador;
	
	switch(jogador){
	
		case pedra:
			cout<<"Jogador escolheu PEDRA.\n";
			break;
		case papel:
			cout<<"Jogador escolheu PAPEL.\n";
			break;
		case tesoura:
			cout<<"Jogador escolheu TESOURA.\n";
			break;
	}
	srand(time(NULL));
	computador=(rand()%3+1);
	switch(computador){
		case pedra:
			cout<<"Computador escolheu PEDRA.\n";
			break;
		case papel:
			cout<<"Computador escolheu PAPEL.\n";
			break;
		case tesoura:
			cout<<"Computador escolheu TESOURA.\n";
			break;
		
	}
	
	if(jogador==computador){
		cout<<"Deu empate.";
	}else if((jogador==papel && computador==pedra)||(jogador==pedra &&computador==tesoura)||(jogador==tesoura &&computador==papel)){
		cout<<"JOGADOR GANHOU!";
		cont1++;
	}else if((computador==papel && jogador==pedra)||(computador==pedra &&jogador==tesoura)||(computador==tesoura &&jogador==papel)){
		cout<<"COMPUTADOR GANHOU!";
		cont2++;
	}
	cout<<"\n\nO placar atual:\n\t\t JOGADOR=="<<cont1<<"\n\t\t COMPUTADOR=="<<cont2<<endl;
	
	int opc;
	volta:
	cout<<"\n\nDIGITE UMA OPCAO\n\t1-JOGAR NOVAMENTE.\n\t2-VER O PLACAR.\n\t3-FINALIZAR O JOGO.";
	cin>>opc;
	if(opc==1){
		goto inicio;
	}else if(opc==2){
		system("cls");
		cout<<"O placar e este:\n\t\t JOGADOR=="<<cont1<<"\n\t\t COMPUTADOR=="<<cont2<<endl;
		invalida:
		cout<<"\nDigite [1] para voltar para opcoes.";
		int voltar;
		cin>>voltar;
		switch	(voltar){
			case 1:
				goto volta;
				break;
			default:
				cout<<"Opcao invalida, digite novamente: ";
				goto invalida;	
		}
	}else if(opc==3){
		cout<<"Obrigado por jogar meu jogo, volte sempre!";
		return(0);
	}
	

	cout<<endl;
	system ("pause");
	return (0);
}

