#include <stdio.h>

 int main(){

 enum direcoes{Norte=1, Leste, Oeste, Sul};

 enum direcoes direcao; // variavel do tipo enum direcoes

 int opcao;

 printf("\t1 - Norte\t2 - Leste\t3 - Oeste\t4 - Sul\nInforme uma direcao: ");
 scanf("%d", &opcao);

 printf("\n");
 direcao=opcao; // define o enum com a opcao lida do teclado (valor inteiro)

 // O switch pode ser usado com o enum para deixar mais claro a condicao
 // Note que isso eh possivel pois um enum eh um valor int
 switch(direcao){
 case Norte:
 printf("Estamos indo para o Norte.");
 break;
 case Leste:
 printf("Estamos indo para o Leste.");
 break;
 case Oeste:
 printf("Estamos indo para o Oeste.");
 break;
 case Sul:
 printf("Estamos indo para o Sul.");
 break;
 default:
 printf("Direcao invalida.");
 break;

 }

 return 0;

 }
