#include <stdio.h>
//Sequencia de Fibonacci
int main(){
	int i = 0;
	int a, b;
	int aux=0;
	a=-1; b=1;
//	printf("O valor e: %d\nO valor e: %d\n", a,b);
	
	printf("Sequencia de fibonacci\n");
	for(i=0; i<12; i++){
		
		printf("O valor e: %d\n", (a+b));
		aux=a+b;
		a=b;
		b=aux;
	}
	return 0;
}
