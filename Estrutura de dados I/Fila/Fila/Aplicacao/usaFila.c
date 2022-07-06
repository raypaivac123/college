#include <stdio.h>
#include <stdlib.h>

#include "Fila.h"
#include "Pilha.h"

void fila_inverte(Fila *f);

int main (void) 
{
  Fila *f,
  	   *filaInvertida;
  	   
  float valor;
  
  char op;
     
  f = fila_cria ();

  do {
  	printf("Digite um numero: ");
  	scanf("%f", &valor);
  	fila_insere(f, valor);
  	
 	fflush(stdin);
  	printf("\nDigite N para parar... ");
  	scanf("%c", &op);
  	printf("\n");
  } while(op != 'N');
  
  fila_inverte(f);
  
  printf("\n\nFila invertida: ");
  while(!fila_vazia(f)) 
  	printf("%.2f ", fila_retira(f));
  

  fila_libera (f);
  
  return 0;
}

void fila_inverte(Fila *f){
	Pilha *p = pilha_cria();
	float v,
		  v2;
	
	printf("Fila original: ");
	while(!fila_vazia(f)) {
		v = fila_retira(f);
		printf("%.2f ", v);
		pilha_push(p, v);
	}	
	
	while(!pilha_vazia(p)) {
		v2 = pilha_pop(p);
		fila_insere(f, v2);	
	}
	
	pilha_libera(p);
}
