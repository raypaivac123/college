#include <stdio.h>
#include <stdlib.h>

char *CarregarFrase(void);

int main(void) {
	//Criação de variável do tipo ponteiro
	char *frase;
	int i;
	
	printf("Exercicio 2\n\n");
	
	//Atribuição de valor da função com retorno de char do tipo ponteiro
	frase = CarregarFrase();
	
	// Atribuição de valor para começar o looping
	i = -1;
	
	printf("\nVoce digitou: \n");
	// Looping que exibe os caracteres até o ponto final
    do {
    	i++;
    	printf("%c", frase[i]);  
	} while(frase[i] != '.');
	
	//Liberação de memória alocada
	free(frase);

	return 0;
}

char *CarregarFrase(void) {
	//Criação de variáveis do tipo char ponteiro
	char *entradaFrase,
	     *temp;
	
	//Criação de variáveis do tipo int
	int j,
	    qtd;
	        
	//Atribuição de valor para determinar a quantidade de memória alocada
	qtd = 100;
	 
	//Alocando memória na variável entradaFrase
	entradaFrase = (char *) malloc(qtd * sizeof(char));
	
	//Condicional para verificar se foi realmente alocado a memória
	if(entradaFrase == NULL) {
		printf("Memoria indisponivel. \n");
		exit(EXIT_FAILURE);
	}
	
	printf("Digite uma frase (Encerre com ponto final): \n");
	
	// Atribuição de valor para começar o looping
	j = 0;
	
	//Looping para a entrada de caracteres na memória
	do {
		entradaFrase[j] = getchar(); 
		j++; 
		
		//Condicional para alocar mais memória, caso a "frase" passe do tamanho inicial (100 caracteres)
		if(j == qtd) {
			qtd = qtd + 10;
			temp = (char *) realloc(entradaFrase, qtd * sizeof(char));
			if(temp == NULL) {
				printf("Memoria indisponivel. \n");
				exit(EXIT_FAILURE);
			} else {
				entradaFrase = temp;
			}
		}		
	} while(entradaFrase[j - 1] != '.'); //Decrementando o valor de i, para evitar que seja comparado um vetor vazio
			
	//Condicional para readequar a memória, caso a quantidade de caracteres da frase seja menor que a quantidade disponível pela memória alocada
	if(qtd > j) {
		temp = (char *) realloc(entradaFrase, j * sizeof(char));
		if(temp == NULL) {
			printf("Erro na memoria. \n");
		} else {
			entradaFrase = temp;
		}
	}
	
	return entradaFrase;
}
