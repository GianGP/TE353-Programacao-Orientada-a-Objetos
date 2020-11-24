#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define max 15

int j = 0;

struct cadastro{
	int num_conta;
	char nom_cliente[50];
	float saldo;
} contas[max-1];

struct cadastro nova_conta(char nome_cliente[50], int num_conta, float saldo){
	struct cadastro cad;
	
	strcpy(cad.nom_cliente, nome_cliente);
	cad.num_conta = num_conta;
	cad.saldo = saldo;
	
	return cad;
}

bool checar_conta(char conta){
	
	int i;
	bool status = true;
	for(i = 0; i < j; ++i) {
		if(contas[i].num_conta == conta){
			status = false;
		}
	}
	
	return status;
}

void excluir_menor_saldo(void){
	
	int c;
	int ix_menor = 0;
	float menor = contas[0].saldo;
	
	for(c = 0; c < j; ++c){
		if(contas[c].saldo < menor){
			menor = contas[c].saldo;
			ix_menor = c;
		}
	}
	
	contas[ix_menor] = contas[j-1];
	--j;
	
	printf("\nConta de menor saldo foi deletada com sucesso!\n");
}

void cadastrar_conta(void){
	
	char nome[50];
	int conta;
	float saldo;
	bool check;
	
	printf("\n>> Insira o numero da conta: ");
	scanf("%d", &conta);
	
	if(checar_conta(conta)){
		printf("\n>> Insira o seu nome: ");
		fflush(stdin);
		gets(nome);
	
		printf("\n>> Insira o saldo da conta: ");
		scanf("%f", &saldo);
		
		contas[j] = nova_conta(nome, conta, saldo);
		
		++j;
		printf("\nConta criada com sucesso!\n");

	}
	else{
		printf("\nConta Invalida!\n");
	}
}

bool checar_nome(char nome[50]){
	
	int i;
	bool status = false;
	for(i = 0; i < j; ++i) {
		if(!strcmp(contas[i].nom_cliente, nome)){
			status = true;
		}
	}
	
	return status;
}

void visualizar_contas(void){
	
	char nome [50];
	int c;
	
	printf("\n>> Digite o nome a ser procurado: ");
	fflush(stdin);
	gets(nome);
	
	if(checar_nome(nome)){
		for(c = 0; c < j; ++c){
			if(!(strcmp(contas[c].nom_cliente, nome))) printf("\nConta: %d, Saldo: %f\n", contas[c].num_conta, contas[c].saldo);
		}
	}
	else{
		printf("\nNao existe conta com esse nome!\n");
	}

}

int main() {
	
	int teste;
	
	bool quit = false;
	
	int operacao;

	printf("Operacoes que podem ser realizadas:\n\n");
	printf("Opcao [1]: Cadastrar nova conta\n");
	printf("Opcao [2]: Visualizar suas contas\n");
	printf("Opcao [3]: Excluir conta com menor saldo\n");
	printf("Opcao [4]: Sair\n");

	while(!quit){
		printf("\n>> Digite qual operacao quer realizar: ");
		scanf("%d", &operacao);
				
		switch(operacao){
			
			case 1:
				if(j == max){
					printf("\nO sistema chegou ao limite das contas!\n");
				}else{
					cadastrar_conta();					
				}
				break;
			
			case 2:
				visualizar_contas();
				break;
				
			case 3:
				excluir_menor_saldo();
				break;
			
			case 4:
				quit = true;
				break;
				
			default:
				printf("\nOperacao invalida, digite uma operacao valida***\n");
				break;
		}
		for(teste = 0; teste < j; ++teste){
			printf("\nContas[%d]: \n", teste);
			printf("Nome_Cliente: %s\n", contas[teste].nom_cliente);
			printf("Num_Conta: %d\n", contas[teste].num_conta);
			printf("Saldo: %f\n\n", contas[teste].saldo);

		}
	}

	return 0;
}

