#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/* n vai guardar o tamanho do array */
	const unsigned int n = 10000000; 
	
	/* Cria vetor, um ponteiro para double */
	double * vetor; 
	
	/* Pede memória para guardar n valores do tipo double e
	 * coloca vetor a apontar para essa memória */
	vetor = malloc(n*sizeof(double));
	
	/* Testa se a memória foi corretamente alocada */
	if(vetor == NULL){
		/* Se falhou, imprime mensagem de erro */
		fprintf(stderr,"Falha a inicializar vetor!\n"); 
		return 1; 
	}
	
	/* Para teste, atribui um valor à última posição do array... */
	vetor[n-1]=M_PI; 
	
	/* ... e imprime essa posição */ 
	printf("O valor da posição %d é %lf\n",n-1,vetor[n-1]);
	
	free(vetor); 
	
}
	
