#include <stdio.h>
#include <stdlib.h>


int convert_sec(int hora, int min, int sec){
	return hora * 3600 + min * 60 + sec;
}

int main() {
	
	int hora, min, sec, total_sec;
	
	printf("Adicione a hora: ");
	scanf("%d", &hora);
	
	printf("Adicione os minutos: ");
	scanf("%d", &min);

	printf("Adicione os segundos: ");
	scanf("%d", &sec);	

	total_sec = convert_sec(hora, min, sec);
	
	printf("\nTempo Total em segundos: %d", total_sec);

	return 0;
}

