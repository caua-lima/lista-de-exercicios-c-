#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num = 1;
	int n = 0;
	for(int i = 0; i < 20; i++){
		
		n = n + num;
		int temp = num;
		num = n;
		n = temp;
		
		printf("\n%i", n);
	}
	
	return 0;
}
