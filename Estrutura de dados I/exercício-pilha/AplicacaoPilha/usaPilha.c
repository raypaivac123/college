
#include "Pilha.h"

#include <stdio.h>

Pilha* CopiaInvertida (Pilha* p);

int main (void) {
  Pilha *p,
  		*copia;           /* declara variável para acessar pilha */
  float n;
  char op;
  
  p = pilha_cria();
  
  
 do{
 	printf("\n Informe um numero real");
 	scanf("%f", &n);
 	pilha_push(p, n);
 	
 	fflush(stdin);
	 printf("\n\n Digite N para sair, qualquer tecla para repetir");
 	scanf("%c", &op);
 	
 } while (op != 'N');
 
/* p = pilha_cria();    inicia pilha vazia */
/* pilha_push(p, 4.5); insere na pilha o elemento 4.5*/
/* pilha_push(p, 3.0);  insere na pilha o elemento 3.0 */
/*pilha_push(p, 5.0);  insere na pilha o elemento 5.0 */
/* pilha_push(p, 3.5);  insere na pilha o elemento 3.5 */
  
  copia = CopiaInvertida (p);
  
  while(!pilha_vazia(p)){
  printf ("%f \n", pilha_pop(p)); /* retira da pilha elemento 3.5 */
}

 while(!pilha_vazia(copia)){
  printf ("%f \n", pilha_pop(copia)); 
}
  
  pilha_libera(p);
  pilha_libera(copia);
  
  return 0;
}
Pilha* CopiaInvertida (Pilha* p){
	Pilha *aux,
		  *resp;
	float v;
		  
	aux = pilha_cria(); 
	resp = pilha_cria(); 
	
	while (!pilha_vazia(p)){
		v = pilha_pop(p);
		pilha_push(aux, v);
		pilha_push(resp, v);
	}
	
	while (!pilha_vazia(aux)){
		v = pilha_pop(aux);
		pilha_push(p, v);
	}
	
	pilha_libera(aux);
	
	return resp;
}
