#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

char pos[9] = "123456789";

int contagem = 0;

void tabuleiro(void);

void sel_posicao(bool *player1);

void check_final(int *ganhador, bool *game);

int main(){
	
	bool game = true, player1 = true;
	int ganhador = 0;
	tabuleiro();
	
	while(game){
		sel_posicao(&player1);
		check_final(&ganhador, &game);
		tabuleiro();
	}


	if(ganhador == 3){
		printf("\nJogo empatou!");
	}
	else{
		printf("\nJogador %d ganhou!", ganhador);
	}
	
    return 0;
}

// Funcao que checa se o jogo ja terminou ou nao
void check_final(int *ganhador, bool *game){
	
	if(pos[0] == pos[1] && pos[0] == pos[2]){
		*ganhador = (pos[0] == 'X') ? 1 : 2;
	}
	else if(pos[3] == pos[4] && pos[3] == pos[5]){
		*ganhador = (pos[3] == 'X') ? 1 : 2;
	}
	else if(pos[6] == pos[7] && pos[6] == pos[8]){
		*ganhador = (pos[6] == 'X') ? 1 : 2;
	}
	else if(pos[0] == pos[3] && pos[0] == pos[6]){
		*ganhador = (pos[0] == 'X') ? 1 : 2;
	}
	else if(pos[1] == pos[4] && pos[1] == pos[7]){
		*ganhador = (pos[1] == 'X') ? 1 : 2;
	}
	else if(pos[2] == pos[5] && pos[2] == pos[8]){
		*ganhador = (pos[2] == 'X') ? 1 : 2;
	}
	else if(pos[0] == pos[4] && pos[0] == pos[8]){
		*ganhador = (pos[0] == 'X') ? 1 : 2;
	}
	else if(pos[2] == pos[4] && pos[2] == pos[6]){
		*ganhador = (pos[2] == 'X') ? 1 : 2;
	}
	else if(contagem == 9){
		*ganhador = 3;
	}
	else{
		*ganhador = 0;
	}
	
	*game = (*ganhador == 0);
}

// Funcao para os players selecionarem as posicoes no tabuleiro
void sel_posicao(bool *player1){
	
	int ix;
	int player = (*player1) ? 1 : 2;
	char simb = (*player1) ? 'X' : 'O';
	
	printf("\nPlayer %d => Selecione uma posicao: ", player);
	scanf("%d", &ix);
	while(ix < 0 || ix > 9 || pos[ix - 1] == 'X' || pos[ix - 1] == 'O'){
		printf("\nPosicao invalida, selecione outra posicao\n");
		printf("\nPlayer %d => Selecione uma posicao: ", player);
		scanf("%d", &ix);
	}
	pos[ix-1] = simb;
	
	*player1 = !*player1;
	
	++contagem;
}

// Funcao para criar tabuleiro
void tabuleiro(void){
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  ||  %c  \n", pos[0], pos[1], pos[2]);
	printf("     ||     ||     \n");
	printf("===================\n");
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  ||  %c  \n", pos[3], pos[4], pos[5]);
	printf("     ||     ||     \n");
	printf("===================\n");
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  ||  %c  \n", pos[6], pos[7], pos[8]);
	printf("     ||     ||     \n");
}
