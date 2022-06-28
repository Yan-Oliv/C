//Desenvolvido by Yan de Oliveira
//Data: 04/10/2021
//Exercício: Estruturas de repetição
//Disciplina: Programação Estruturada
//Professor: Erikson Dutra
//Sistemas de Informação 2021/1 (2º Semestre)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função main
int main() {
	
   system ("color 1"); //Define cor para fontes
   setlocale (LC_ALL, "Portuguese"); //Permite uso de acentos do teclado PT-BR	
    
   int q;
   
   //Insere a questão deseja entre as duas passadas no exercício 
   printf ("Insira a questão desejada: ");
   scanf ("%d", &q);
   
   switch(q){
       case 1: //Entra na primeira questão
         Quest1();
         break;
         
       case 2: //Entra na segunda questão
         Quest2();
         break;
         
       default: //Função referente a operação inexistente
        printf ("\nQuestão inexistente!!!");
        break;
   }
}

//Função questão 1
void Quest1() {
    
    int i, n, m;
    
    //Insere o valor para operação
    printf ("\n\nInsira um número inteiro entre 1 e 10: \n");
    scanf ("%d", &n);
         
    printf ("\n");
    
	//Entra na estrutura de repetição para imprimir a tabuada     
    for (i = 1; i <= 10; i++){
        m = i*n;
        printf ("\n%d * %d = %d", i, n, m);
    }
}

//Função questão 2
void Quest2() {
    
    int i, n, m, op;
    
    i = 1; //Valor inicial de i
    
    //Menu informado na orientação do exercício
    printf ("\n\nInsira um valor de acordo com o menu: ");
    printf ("\nOpção 11  |  Ler entrada");
    printf ("\nOpção 12  |  Sair\n");
    scanf ("%d", &op);
    
    //Entra no laço de repetição para análise de dados
    while (op == 11 ){
    	
    	//Insere o valor para operação
        printf ("\nInsira um número inteiro entre 1 e 10: \n");
        scanf ("%d", &n);
        
        //Entra em um novo laço de repetição para impressão da tabuada
        while (i <= 10){
           m = n*i;
           printf ("\n%d * %d = %d", i, n, m);
           i++;
        }
        
        //Menu impresso novamente para verificação de loop
        printf ("\n\nInsira um valor de acordo com o menu: ");
        printf ("\nOpção 11  |  Ler entrada");
        printf ("\nOpção 12  |  Sair\n");
        scanf ("%d", &op);
        
        //caso valor 12 seja digitado programa se encerrará
        if (op == 12){

		}
		//Caso seja inserido um valor não presente nas opções é pedido para inserir um valor correto 
		else if ((op != 11) && (op != 12)){
			printf ("\n\nOpção não reconhecida!!!");
			printf ("\nInsira um valor referente as opções informadas: \n");
			scanf ("%d", &op);
		}
		
        i = 1;//i retorna a 1 para novo loop do laço
    }
}