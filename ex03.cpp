#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char tipo_combustivel;
	float litros_vendidos;
	
	printf("Escolha A para �lcool e G para Gasolina: ");
	scanf(" %c", &tipo_combustivel);
	printf("Quantos litros ser�o vendidos: ");
	scanf("%f", &litros_vendidos);
	
	tipo_combustivel = tolower(tipo_combustivel);

	if(tipo_combustivel == 'a' and litros_vendidos <= 20){
		float valor = 3.39 * litros_vendidos;
		float valorDesconto = valor - (valor * 0.03 );
		printf("Pre�o final: R$%.2f", valorDesconto);
	}
	else if(tipo_combustivel == 'a' and litros_vendidos > 20){
		float valor = 3.39 * litros_vendidos;
		float valorDesconto = valor - (valor * 0.05 );
		printf("Pre�o final: R$%.2f", valorDesconto);
	}
	else if(tipo_combustivel == 'g' and litros_vendidos <= 20){
		float valor = 5.39 * litros_vendidos;
		float valorDesconto = valor - (valor * 0.04 );
		printf("Pre�o final: R$%.2f", valorDesconto);
	}
	else if(tipo_combustivel == 'g' and litros_vendidos > 20){
		float valor = 5.39 * litros_vendidos;
		float valorDesconto = valor - (valor * 0.06 );
		printf("Pre�o final: R$%.2f", valorDesconto);
	}

	return 0;	
}
