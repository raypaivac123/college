#include <stdio.h>

// Declaração dos procedimentos e da função
void Ler(int *n1, int *n2, int *n3);

void Ordenar(int *menor, int *meio, int *maior);

int Par(int num);

// Programa principal 
int main(void) {	
		
	// Criação das variáveis
	int numero1, numero2, numero3, par;
	char opcao;

	// Looping para permitir que o programa seja executado mais de uma vez
	do {		
		// Chamada do procedimento para a entrada dos números
		Ler(&numero1, &numero2, &numero3);

		// Chamada do procedimento para ordernação dos números em ordem crescente
		Ordenar(&numero1, &numero2, &numero3);
		
		// Chamada de função para descobrir se o o maior número (numero3) é par ou ímpar
		par = Par(numero3);
		
		// Condicional que exibe o resultado de acordo com o retorno da função Par
		if(par) 
			printf("Os numeros ordenados sao: %d, %d, %d (Par)\n", numero1, numero2, numero3);		
		else 
			printf("Os numeros ordenados sao: %d, %d, %d (Impar)\n", numero1, numero2, numero3);	
		
		// Entrada de caractere caso o usuário queira executar o programa novamente 
		
		fflush(stdin); //Limpa o buffer de entrada do teclado
		
		printf("Quer continuar? (S/N) ");
		scanf("%c", &opcao);
		
		printf("\n");		
	} while(opcao != 'N'); // É executado esse looping enquanto a variável opcao for diferente de N
	
	return 0; 
}

// Procedimento que pede entrada de dados 
void Ler(int *n1, int *n2, int *n3) {
	printf("Digite tres numeros inteiros: ");
	scanf("%d %d %d", n1, n2, n3);
}

// Procedimento que orderna as variáveis entre si em order crescente 
void Ordenar(int *menor, int *meio, int *maior) {	
	// Atribuição das variáveis locais
    int n1 = *menor,
        n2 = *meio,
        n3 = *maior;

    if(n3 > n1 && n3 > n2) { //Quando o n3 já é o maior número
        *maior = n3;
        if(n2 > n1) {
            *meio = n2;
            *menor = n1;
        } else {
            *meio = n1;
            *menor = n2;
        } 
	}	

    if(n2 > n1 && n2 > n3) { //Quando o n2 é o maior número
        *maior = n2;
        if(n3 > n1) {
            *meio = n3;
            *menor = n1;
        } else {
            *meio = n1;
            *menor = n3;
        } 
    }

    if(n1 > n2 && n1 > n3) { //Quando o n1 é o maior número	
        *maior = n1;
        if(n3 > n2) {
            *meio = n3;
            *menor = n2;
        } else {
            *meio = n2;
            *menor = n3;
        } 
    }
}
			
// Função que retorna um valor caso o número seja par ou ímpar (retorna 1 se for par ou retorna 0 se for ímpar)
int Par(int num) {
	int resultado;
	
	if(num % 2 == 0) 
		resultado = 1;
	else 
		resultado = 0;
		
	return resultado;	
}

