#include <stdio.h>

int main() {
	float valor1,valor2,valor3;
	
	printf("Informe um valor: ");
	scanf("%f", &valor1);
	printf("Informe mais um valor: ");
	scanf("%f", &valor2);
	printf("Informe um ultimo valor: ");
	scanf("%f", &valor3);
	printf("A media desses valores e: %.2f", (valor1+valor2+valor3)/3);
	
	return 0;
}
