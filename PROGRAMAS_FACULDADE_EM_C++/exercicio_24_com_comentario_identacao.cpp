#include <iostream>
using namespace std;

int main(){
	float saldo=1702.67,ret1,ret2,dep,saldof1,saldof2,saldof3; //SALDO COLOQUEI UM VALOR FIXO PRA SIMULAR UM VALOR QUE JA ESTIVESSE DENTRO DO BANCO.
	int opc,opc2;
	cout<<"Ola Joao, bem vindo ao CITYBANK, seu saldo atual e de: "<<"R$ "<<saldo<<"\n"; //INTERFACE DE INICIO DO BANCO.
	
	inicio: //AQUI COMECA O LOOPING DO GOTO
		
	cout<<"Deseja fazer uma operacao \n1-Retirada\n2-Deposito\n3-Saldo Final\nDigite o numero de acordo com a operacao que deseja fazer.\n";
	cin>>opc;
	system("cls"); //CLS se usa pra limpar alguns dados da interface do programa, pra deixar ele menos "poluido".
	
		if (opc==1){
			cout<<"Voce deseja fazer a primeira retirada em qual valor?\n";
			cin>>ret1;
			cout<<"Seu saldo apos a primeira retirada e de: R$ ";
			saldof1=saldo-ret1;
			cout<<saldof1<<"\n\n";
			cout<<"Voce deseja fazer a segunda retirada em qual valor?\n";
			cin>>ret2;
			cout<<"Seu saldo apos a segunda retirada e de: \nR$ ";
			saldof1=saldof1-ret2;
			cout<<saldof1<<"\n\n";
			//IDENTACAO DEIXA O PROGRAMA MAIS ORGANIZADO, FAZENDO A LEITURA DO CODIGO BEM MAIS FACIL.
			
        }else if(opc==2){
        	cout<<"Voce deseja fazer o deposito em qual valor?\n";
        	cin>>dep;
        	cout<<"Seu saldo apos o deposito e de: \nR$";
        	saldof2=saldof1+dep;
        	cout<<saldof2<<"\n\n";
        	
        }else if(opc==3){
        	cout<<"Seu saldo final e de: \nR$ "<<saldof2<<"\n";
		}
		cout<<"Deseja realizar outra operacao?\n1-SIM\n2-NAO\n";		
		cin>>opc2;
		if (opc2==1){
			goto inicio;
		}else {
			cout<<"Sessao finalizada, obrigado e volte sempre!\n\n";
		}
	
	system("pause");
	return(0);
}

