#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criptografia(char *vetor){
	
	int i;
	
	for(i = 0; i < strlen(vetor); i++)
		if(vetor[i] == 'a')
			printf("P");

	
}

int main() {
	
	char frase[80];
	
	printf("Entre a sua frase: ");
	gets(frase);
	
	criptografia(frase);

	return 0;
}


