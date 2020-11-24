#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 2

struct racional{
	int num;
	int den;
}racs[max], simp[max], soma, sub, mult, divi;

struct racional criar_racional(char ix_num);

int mdc(int num, int den);

struct racional simplificar_fracao(struct racional rac);

struct racional somar(struct racional a, struct racional b);

struct racional subtrair(struct racional a, struct racional b);

struct racional multiplicar(struct racional a, struct racional b);

struct racional dividir(struct racional a, struct racional b);

float ponto_flutuante(struct racional rac);

int main() {
	
	printf("Insira 2 numeros racionais (primeiro o numerador e depois o denominador):\n");
	
	// Cria numeros racionais
	racs[0] = criar_racional('A');
	racs[1] = criar_racional('B');

	// Simplifica numeros racionais
	simp[0] = simplificar_fracao(racs[0]);
	simp[1] = simplificar_fracao(racs[1]);
	
	// Soma numeros racionais
	soma = somar(racs[0], racs[1]);
	
	// Subtrai numeros racionais
	sub = subtrair(racs[0], racs[1]);
	
	// Multiplica numeros racionais
	mult = multiplicar(racs[0], racs[1]);
	
	// Divide numeros racionais
	divi = dividir(racs[0], racs[1]);
	
	printf("\nA = %d/%d = %d/%d = %0.3f", racs[0].num, racs[0].den, simp[0].num, simp[0].den, ponto_flutuante(racs[0]));	
	printf("\nB = %d/%d = %d/%d = %0.3f", racs[1].num, racs[1].den, simp[1].num, simp[1].den, ponto_flutuante(racs[1]));
	
	printf("\n\nA + B = %d/%d = ", soma.num, soma.den);
	
	soma = simplificar_fracao(soma);
	
	printf("%d/%d = %0.3f", soma.num, soma.den, ponto_flutuante(soma));
	
	printf("\n\nA - B = %d/%d = ", sub.num, sub.den);
	
	sub = simplificar_fracao(sub);
	
	printf("%d/%d = %0.3f", sub.num, sub.den, ponto_flutuante(sub));
	
	printf("\n\nA * B = %d/%d = ", mult.num, mult.den);
	
	mult = simplificar_fracao(mult);

	printf("%d/%d = %0.3f", mult.num, mult.den, ponto_flutuante(mult));
	
	printf("\n\nA / B = %d/%d = ", divi.num, divi.den);
	
	divi = simplificar_fracao(divi);
	
	printf("%d/%d = %0.3f", divi.num, divi.den, ponto_flutuante(divi));

	return 0;
}

// Função para cirar um numero racional

struct racional criar_racional(char ix_num){
	
	struct racional rac;
	
	printf("\nNumero %c:", ix_num);
	printf("\nNumerador: ");
	scanf("%d", &rac.num);
	
	printf("Denominador: ");
	scanf("%d", &rac.den);
	
	return rac;
};

// Função para calcular o máximo divisor comum entre dois números

int mdc(int num, int den){
    int mdc, resto;

    while (num != 0)
    {
        resto = den % num;
        den = num;
        num = resto;
    }

    mdc = den;

    return mdc;
};

// Função para simplificar frações

struct racional simplificar_fracao(struct racional rac){
	struct racional simplificado;
	int div;
	
	div = (mdc(rac.num, rac.den));
	
	simplificado.num = (rac.num)/div;
	simplificado.den = (rac.den)/div;
	
	return simplificado;
}

// Função para somar duas frações

struct racional somar(struct racional a, struct racional b){
	struct racional res_soma;
	
	res_soma.num = (a.den * b.den < 0) ? -((a.num * b.den) + (b.num * a.den)) : ((a.num * b.den) + (b.num * a.den));
	res_soma.den = (a.den * b.den < 0) ? -(a.den * b.den) : (a.den * b.den);
	
	return res_soma;
}

// Função para subtrair duas frações

struct racional subtrair(struct racional a, struct racional b){
	struct racional res_sub;
	
	res_sub.num = (a.den * b.den < 0) ? -((a.num * b.den) - (b.num * a.den)) : ((a.num * b.den) - (b.num * a.den));
	res_sub.den = (a.den * b.den < 0) ? -(a.den * b.den) : (a.den * b.den) ;
	
	return res_sub;
}

// Função para multiplicar duas frações

struct racional multiplicar(struct racional a, struct racional b){
	struct racional res_mult;
	
	res_mult.num = (a.den * b.den < 0) ? -(a.num * b.num) : (a.num * b.num);
	res_mult.den = (a.den * b.den < 0) ? -(a.den * b.den) : (a.den * b.den);
	
	return res_mult;
}

// Função para dividir duas frações

struct racional dividir(struct racional a, struct racional b){
	struct racional res_divi;
	
	res_divi.num = a.num * b.den;
	res_divi.den = a.den * b.num;
	
	return res_divi;
}

// Simplificação de fração em modo ponto flutuante

float ponto_flutuante(struct racional rac){
	return (float) rac.num/rac.den;
}

