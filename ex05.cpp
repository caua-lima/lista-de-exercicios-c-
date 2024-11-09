#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3;
	
	printf("Escreva sua 1ª nota: ");
	scanf("%f", &n1);
	printf("Escreva sua 2ª nota: ");
	scanf("%f", &n2);
	printf("Escreva sua 3ª nota: ");
	scanf("%f", &n3);
	
	float media = (n1*2 + n2*3 + n3*5)/10;
	
	printf("A média desse Aluno é: %.1f", media);
	
	return 0;
}
