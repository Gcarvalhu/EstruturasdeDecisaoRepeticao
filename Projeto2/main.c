#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//estruturas de decis�o e repeti��o
int main(int argc, char *argv[]) {
	/*
	//Decisao	
	int idade = 5;
	
	printf("Verificar idade:\n");
	
	//Simples
	//if(conid��o)
	//true e false
	

	//Compostas
	if(idade >=18 && idade < 120)
		printf("Maior");
	else if(idade >=120 || idade <=0)
		printf("Idade inv�lida");
	else
		printf("Menor");
		
	//Aninhada
	if(idade >=0){
		if(idade < 120)
			printf("Maior");
		else
			printf("idade inv�lida");
			
		if(idade < 18)
			pritf("Menor");
	}
	*/
	
	//Estrutura de repeti��o
	int i=0;
	
		//Inicializa��o			Condi��o			passo(contador)
	for(i=0; 					i<=10; 				i++) //enquanto a v�riavel i n�o for=10 o la�o se repetir�, e a cada repeti��o � somado 1 a variavel i
	{
		printf("\n %d", i);
	}
}
