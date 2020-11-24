#include <stdio.h>
#include <stdlib.h>
float funcao_s(int n){
	
	float s = 0;
	float i;

	for(i = 1.0; i <= n; ++i)
		s = (i*i + 1)/(i+3);
	
	return s;
}

int main() {
	
	int n;
	float s;
	printf("\nAdicione um valor de N: ");
	scanf("%d", &n);
	
	s = funcao_s(n);
	
	printf("O valor de S correspondente sera: %0.3f", s);

	return 0;
}


