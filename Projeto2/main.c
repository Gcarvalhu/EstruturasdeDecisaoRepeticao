#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//estruturas de decisão e repetição
int main(int argc, char *argv[]) {
	/*
	//Decisao	
	int idade = 5;
	
	printf("Verificar idade:\n");
	
	//Simples
	//if(conidção)
	//true e false
	

	//Compostas
	if(idade >=18 && idade < 120)
		printf("Maior");
	else if(idade >=120 || idade <=0)
		printf("Idade inválida");
	else
		printf("Menor");
		
	//Aninhada
	if(idade >=0){
		if(idade < 120)
			printf("Maior");
		else
			printf("idade inválida");
			
		if(idade < 18)
			pritf("Menor");
	}
	*/
	
	//Estrutura de repetição
	int i=0;
	
		//Inicialização			Condição			passo(contador)
	for(i=0; 					i<=10; 				i++) //enquanto a váriavel i não for=10 o laço se repetirá, e a cada repetição é somado 1 a variavel i
	{
		printf("\n %d", i);
	}
}
