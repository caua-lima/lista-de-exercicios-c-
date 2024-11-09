#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, a, b, c;
		
	do{
		printf("\nDigite um número: (Digite 1, 2 ou 3): ");
		scanf("%i", &n);
		
		if(n != 1 and n != 2 and n != 3){
			printf("\nPor favor digite 1, 2 ou 3. Tente novamente!");
		}
		
	} while (n != 1 and n != 2 and n != 3);
	
	do{
		
	printf("\nDigite o número A: ");
	scanf("%i", &a);
	printf("\nDigite número B: ");
	scanf("%i", &b);
	printf("\nDigite número C: ");
	scanf("%i", &c);
	
		if(a == b or a == c or b == c){
			printf("\nNão digite números iguais. Tente novamente!");
		}
	} while(a == b or a == c or b == c);
	
	if(n == 1){
	
		if (a > b and a > c){
			if (b > c){
				printf("%i, %i, %i", c, b, a);
			}
			else{
				printf("%i, %i, %i", b, c, a);
			}
			} 
		else if(b > a and b > c){
			if (a > c){
				printf("%i, %i, %i", c, a, b);
			}
			else{
				printf("%i, %i, %i", a, c, b);
			}
			} 
		else if(c > a and c > b){
			if (a > b){
				printf("%i, %i, %i", b, a, c);
			}
			else{
				printf("%i, %i, %i", a, b, c);
			}
	}
	}
	
	if(n == 2){
	
		if (a < b and a < c)	{
			if (b < c){
				printf("%i, %i, %i", c, b, a);
			}
			else{
				printf("%i, %i, %i", b, c, a);
			}
			} 
		else if(b < a and b < c){
			if (a < c){
				printf("%i, %i, %i", c, a, b);
			}
			else{
				printf("%i, %i, %i", a, c, b);
			}
			} 
		else if(c < a and c < b){
			if (a < b){
				printf("%i, %i, %i", b, a, c);
			}
			else{
				printf("%i, %i, %i", a, b, c);
			}
		}
	}
	
	if(n == 3){
		if(a > b and a > c){
			printf("%i, %i, %i", b, a, c);
		}
		else if(b > a and b > c){
			printf("%i, %i, %i", a, b, c);
		}
		else if(c > a and c > b){
			printf("%i, %i, %i", b, c, a);
		}
	}
	
	
	return 0;
}
