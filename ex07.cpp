#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int conta;
	float saldo, debito, credito;
	
	printf("Digite o número da sua conta: ");
	scanf("%i", &conta);
	printf("Digite seu saldo: ");
	scanf("%f", &saldo);
	printf("Quanto passou no Débito: ");
	scanf("%f", &debito);
	printf("Digite seu crédito: ");
	scanf("%f", &credito);
	
	float saldo_atual = saldo - debito + credito;
	
	if (saldo_atual >= 0){
		printf("Seu saldo atual é positivo. Saldo atual = R$%.2f", saldo_atual);
	} else{
		printf("Seu saldo atual é Negativo. Saldo atual = R$%.2f", saldo_atual);
	}
}
