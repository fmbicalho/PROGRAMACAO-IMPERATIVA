//main.c------------------------------------
#include <stdio.h>
#include "ordenacao.h"


int isSorted (int v[], int N){
	int i;
	for (i=0; i<N-1 && v[i] <= v[i+1]; i++)
		;
	return (i==N-1);
}

void dumpV (int v[], int N){
   int i;
   for (i=0; i<N; printf ("%d ", v[i++]))
   	   ;
}
typedef void SORT (int *, int);

int testa (int v[], int N, SORT f) {
	int aux[N], i, r=0;
	for (i=0; i<N; i++) 
		aux [i] = v[i];
	f (aux, N);
    if (! isSorted (aux, N)) {
    	printf ("Array original:      ");
    	dumpV (v,N);
    	printf ("\nDepois da ordenação: ");
    	dumpV (aux,N);
    	r=1;
    }
	return r;

}

int main () {
   SORT *funcs [6] = {iSort1, iSort2, 
	                  maxSort1, maxSort2, 
	                  bubblesort1, bubblesort2};
   char *desc[6] = {"iSort1", "iSort2", 
                    "maxSort1", "maxSort2",
                    "bubblesort1", "bubblesort2"};
   int tests[8][25] 
   = { { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}
     , {25, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}
     , { 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25, 1}
     , {25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
     , { 1,25, 2,24, 3,23, 4,22, 5,21, 6,20, 7,19, 8,18, 9,17,10,16,11,15,12,14,13}
     , { 1, 1, 1,10,10,10, 2, 2, 2, 9, 9, 9, 9, 3, 3, 8, 4, 4, 4, 5, 7, 7, 7, 8, 8}
     , {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10, 1}
     , { 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1}
     };
   int f, t, erro=0;
   for (f=0; f<6 && !erro;f++)
   	   for (t=0; t<8 && !erro; t++) 
   	   	   if ( (erro = testa (tests[t], 25, funcs[f])) ) {
   	   	   	  printf ("\nErro ao testar a função %s\n", desc[f]);
   	   	   }
    return 0;
}

//===================================================================================

//ordenação.c------------------------------------------
#include <stdio.h>

void swap (int v[], int i, int j){
  int t=v[i];
  v[i]=v[j]; v[j]=t;
}

/////// Insertion Sort 

void insere (int v[], int N, int x){
    // insere x ordenadamente no array v com N elementos
    // no final o array v tem N+1 elementos ordenados
}

void iSort1 (int v[], int N) {
  // ordena o array v com sucessivas invocações da função insert
}

void iSort2 (int v[], int N){
  // semelhante ao anterior, mas sem usar a função insert
}


////// Max Sort ///////

int maxInd (int v[], int N){
  // calcula o ídice do maior elemento do array v

  return 0;
}

void maxSort1 (int v[], int N) {
  // ordena o array por sucessivas invocações da função maxInd
}

void maxSort2 (int v[], int N) {
  // semelhante ao anterior, mas sem usar a função maxInd

}


////// Bubble Sort ///////

int bubble (int v[], int N) {
  int i, r=0;
  for (i=1; i<N; i++)
    if (v[i] < v[i-1]) {
      swap (v, i, i-1); 
      r=i;
    }
  return r; // última posição trocada
}

void bubblesort1 (int v[], int N){
  // ordena o array por sucessivas invocações da função bubble
}

void bubblesort2 (int v[], int N){
  // optimização do procedimento anterior que pára mal o array esteja ordenado
}

//=============================================================================
//ordenação.h-----------------------------------------

/////// Insertion Sort 
void iSort1 (int v[], int N);
void iSort2 (int v[], int N);

////// Max Sort ///////
void maxSort1 (int v[], int N); 
void maxSort2 (int v[], int N);

////// Bubble Sort ///////
void bubblesort1 (int v[], int N);
void bubblesort2 (int v[], int N);