#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int nasc, atual;
	
	printf("Em que ano voc� nasceu? ");
	scanf("%i", &nasc);
	printf("Qual o ano atual? ");
	scanf("%i", &atual);
	
	int idade = atual - nasc;
	printf("Sua idade � %i.", idade);
	int meses = (atual - nasc) * 12;
	printf("\nSua idade em meses � %i.", meses);
	int semanas = 52 * idade;
	printf("\nSua idade em semanas � %i.", semanas);
	int dias = semanas * 7;
	printf("\nSua idade em dias � %i.", dias);
	
	return 0;
}
