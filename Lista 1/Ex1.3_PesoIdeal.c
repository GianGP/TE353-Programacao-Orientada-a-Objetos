#include <stdio.h>
#include <stdlib.h>

float peso_ideal(float *alt, char *sexo){
	
	if (*sexo = 'M')
		return 72.7 * (*alt) - 58;
	else
		return 61.2 * (*alt) - 44.7;
	
}

int main() {
	
	float alt, peso;
	char sexo;

	printf("Adicione sua altura (ex: 1.83): ");
	scanf("%f", &alt);
	
	printf("\nQual o seu sexo? (M/F): ");
	scanf("%s", &sexo);
	
	peso = peso_ideal(&alt, &sexo);
	
	printf("\nPeso ideal (kg): %0.2f", peso);

	return 0;
}


