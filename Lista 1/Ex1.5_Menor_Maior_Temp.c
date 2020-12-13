#include <stdio.h>
#include <stdlib.h>

char meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int max(float vector[12]);

int min(float vector[12]);

void setVector(float *vector);

void getMinMax(float vector[12]);

int main(){
	float temperaturas[12];
	setVector(temperaturas);
	getMinMax(temperaturas);
	system("PAUSE");
	return 0;
}

// Função para inserir variáveis
void setVector(float *vector){
	int i;
	printf("Adicione as temperaturas medias de cada mes:\n");
	
	for(i=0; i<12; ++i){
		printf("%s: ", meses[i]); 
		scanf("%f", &vector[i]);
	}

}

// Função para encontrar valor máximo dentro de vetor
int max(float vector[12]){
	int i, ix;
	float aux;
	aux = vector[0];
	for(i=0; i < 12; ++i){
		aux = (vector[i] > aux) ? vector[i] : aux;
		ix = (vector[i] > aux) ? i : ix;
	}
	return ix;
}

// Função para encontrar valor mínimo dentro de vetor
int min(float vector[12]){
	int i, ix;
	float aux;
	for(i=0; i < 12; ++i){
		aux = (vector[i] < aux) ? vector[i] : aux;
		ix = (vector[i] < aux) ? i : ix;
	}
	return ix;
}

// Função para retornar maior e menor valor
void getMinMax(float vector[12]){
	int ix_min = min(vector);
	int ix_max = max(vector);
	
	printf("Mes com maior temperatura => %s, com %0.1f graus\n", meses[ix_max], vector[ix_max]);
	printf("Mes com menor temperatura => %s, com %0.1f graus\n", meses[ix_min], vector[ix_min]);
}

