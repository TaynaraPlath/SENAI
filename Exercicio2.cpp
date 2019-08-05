#include <stdio.h>

main() {
  int ano;
  printf("\n==========ANO BISSEXTO==========\n");
  //printf("\nDigite o ano: ");
  //scanf("%d", &ano);
  
  
	for(ano=2000; ano<2040;ano++){
  
  		if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
   		printf("\n %i Ano bissexto.\n", ano);
  		}
  
  		else {
   		printf("\n %i Ano nao bissexto.\n", ano);
  
  		}
	}
}
