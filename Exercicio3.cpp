#include <stdio.h>
#include <math.h>

int fatorial(int valor){
	int i=0;
	
	if(valor == 1 || valor == 0){
		return 1;
	}
	else{
		for(i=valor; i >1; i --){
	//	valor *= i;
		valor -= (valor*i);
		}
	return valor;
	}
}


int main(){
	int v = 0;
	printf("Digite um valor: ");
	scanf("%i", &v);
	v = fatorial(v);
	
	printf("Resultado: %d", v);	
	return 0;
}
