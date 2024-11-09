#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float comprimento, largura, altura;
	
	printf("Digite o comprimento(cm): ");
	scanf("%f", &comprimento);
	printf("Digite a largura(cm): ");
	scanf("%f", &largura);
	printf("Digite o altura(cm): ");
	scanf("%f", &altura);
	
	float volume = comprimento * largura * altura;
	
	printf("O volume dessa caixa é %.2f", volume);
	
	return 0;
}
