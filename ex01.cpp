#include <stdio.h>
#include <ctype.h>
int main(){
	float h;
	char sexo;
	
	printf("\nCalcular peso ideal");
	printf("\nDigite seu sexo: (Escreva M para Masculino e F para Feminino): ");
	scanf("%c", &sexo);
	printf("\nDigite sua altura: ");
	scanf("%f", &h);
	
	sexo = tolower(sexo);
	
	if (sexo == 'm'){
		float pesoIdeal = (h * 72.7) - 58;
		printf("\nSeu peso ideal: %.2f", pesoIdeal);
	}else if (sexo == 'f'){
		float pesoIdeal = (h * 62.1) - 44.7;
		printf("\nSeu peso ideal: %.2f", pesoIdeal);
	}
	
	return 0;
}
