#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	for(int i = 1; i <= 10; i++){
		int tabuada = num * i;
		printf("\n%i", tabuada);
	}
}
