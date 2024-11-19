#include <stdio.h>
#include <math.h>

int main(){
	
	/* n vai guardar o tamanho do array */
	const unsigned int n = 100000; 
	
	/* Cria o vetor */
	double vetor[n];
	
	/* Para teste, atribui um valor à última posição do array... */
	vetor[n-1]=M_PI; 
	
	/* ... e imprime essa posição */ 
	printf("O valor da posição %d é %lf\n",n-1,vetor[n-1]);
}
	
