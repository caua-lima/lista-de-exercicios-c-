#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float celsius;
	
	printf("Digite a temperatura em Graus Celsius: ");
	scanf("%f", &celsius);
	
	float fah = celsius * 1.8 + 32;
	
	printf("Em Fahrenheit: %.2f", fah);
	
	return 0;
}
