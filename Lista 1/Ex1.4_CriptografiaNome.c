#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void criptografia(char *vetor);

int main() {
	
	char frase[80];
	
	printf("Entre a sua frase: ");
	gets(frase);
	
	criptografia(frase);
	
	printf("Frase criptografada: %s", frase);

	return 0;
}

// Função para critografar strings
void criptografia(char *vector){
	int i;
	char aux;
	
	for(i = 0; i < strlen(vector); i++){
		aux = tolower(vector[i]);
		vector[i] = (aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u') ? '*' : vector[i];
	}	
}
