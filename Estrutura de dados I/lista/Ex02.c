#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(void) {
	NoLista *lst;
	int tamanhoLista,
		matricula;
	char op;
	
	lst = lst_cria();
	
	do {
		printf("Digite a matricula: ");
		scanf("%d", &matricula);
		lst = lst_insere_ordenado(lst, matricula);
		
		printf("Deseja inserir outra matricula? [S/N]: ");
		fflush(stdin);
		scanf("%c", &op);
		fflush(stdin);
	} while(op != 'N');
	
	printf("\nListagem de alunos que sao favoraveis ao retorno das aulas presenciais (por matricula): \n");	
	lst_imprime(lst);
	
	tamanhoLista = lst_tamanho(lst);
	printf("\nO numero de alunos favoraveis ao retorno das aulas presenciais: %d\n", tamanhoLista);	
		
	lst_libera(lst);
	
	return 0;
}
