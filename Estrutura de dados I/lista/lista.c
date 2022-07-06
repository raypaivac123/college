// nome: lista.c   

#include <stdlib.h>
#include <stdio.h>
 
#include "lista.h"

/* estrutura representando um nó da lista */
struct noLista {
    int             info;
    struct noLista* prox;
};

/* função de criação: retorna uma lista vazia */
NoLista* lst_cria (void) {
       return NULL;
}

void lst_libera (NoLista* lst) {
   NoLista *p, *t;
 
   for (p = lst; p != NULL; p = t) { /* faz p apontar para o próximo */
      t = p->prox;   /* guarda referência p/ prox elemento */
      free(p);       /* libera a memória apontada por p */
   }
   
}

/* insersão no início: retorna a lista atualizada */
NoLista* lst_insere (NoLista* lst, int v) {
    NoLista* novo = (NoLista*) malloc (sizeof(NoLista));
    
    if (novo == NULL) {
    	printf ("Erro de memÃ³ria");
	    exit (EXIT_FAILURE);
	}
    
    novo->info = v;
    novo->prox = lst;
    
    return novo;
}

/*função insere_ordenado: insere elementos em ordem*/
NoLista* lst_insere_ordenado(NoLista *lst, int v) {
	NoLista* novo;
	NoLista* ant = NULL;
	NoLista* p;
	
	/*cria novo elemento*/
	novo = (NoLista*) malloc(sizeof(NoLista));
	
	if(novo == NULL) exit(1);
	
	novo->info = v;
	
	/*procura posição de insersão*/
	for(p = lst; p != NULL && p->info < v; p = p->prox)
		ant = p;
	
	/* encadeia elemento */	
	if(ant == NULL) {
		novo->prox = lst;
		return novo;
	} else {
		novo->prox = ant->prox;
		ant->prox = novo;
		return lst;
	}
}

/* função retira: retira elemento da lista */
NoLista* lst_retira (NoLista* lst, int v) {
 NoLista* ant = NULL;   /* ponteiro para elemento anterior */
 NoLista* p;            /* ponteiro para percorrer a lista */
 
  /* procura elemento na lista, guardando o anterior */
     for (p = lst; p != NULL && p->info != v; p = p->prox)
             ant = p;

  /* verifica se achou elemento */
     if (p == NULL) 
        return lst;      /* não achou: retorna lista original */
        
  /* retira elemento */
    if (ant == NULL)   /* achou no 1º nó */
        lst = p->prox; 
    else               /* achou em nó que não é o 1º */
        ant->prox = p->prox; 	

  free(p);
  
  return lst;
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int lst_vazia (NoLista* lst) {
   if (lst == NULL)
      return 1;
   else
      return 0;
}

/* função busca: busca um elemento na lista */
NoLista* lst_busca (NoLista* lst, int v) {  
   NoLista* p;
   
   for (p = lst; p != NULL; p = p->prox) {
       if (p->info == v)
          return p;
   }
   
   return NULL; /* não achou o elemento */
}

/* função recupera: recupera um elemento na lista */
int lst_recupera (NoLista* noh) {  
   return noh->info;
}

/* função imprime: imprime valores dos elementos */
void lst_imprime (NoLista* lst) {
   NoLista* p;
   
   for (p = lst; p != NULL; p = p->prox)
        printf("%d ", p->info);

   printf("\n");
}

/* função tamanho: mostra o tamanho da lista */
int lst_tamanho (NoLista* lst) {
   NoLista* p;
   int i;
   
   /*São percorrido a lista e incrementado a variável i*/
   for (p = lst, i = 0; p != NULL; p = p->prox)
        i++;

   return i;
}




