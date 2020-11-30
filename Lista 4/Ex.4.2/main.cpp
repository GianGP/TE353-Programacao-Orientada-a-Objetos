#include <iostream>
#include "Complexo.h"
using namespace std;

int main() {
	Complexo comp, comp1, soma, subtracao, multiplicacao, divisao;
	
	float real, imag;
	
	// Instanciando primeiro objeto complexo
	cout << ">> Complexo 1: \n";
	comp.setComplex();
	
	// Instanciando segundo objeto complexo
	cout << "\n>> Complexo 2: \n";
	comp1.setComplex(); 
	
	// Chamando funções matemáticas
	soma = sum(comp, comp1);
	subtracao = sub(comp, comp1);
	multiplicacao = mult(comp, comp1);
	divisao = div(comp, comp1);

	// Complexo 1
	cout << "\n>> Numero Complexo 1: \n";
	comp.getRect();
	comp.getPolar();
	
	// Complexo 2
	cout << "\n>> Numero Complexo 2: \n";
	comp1.getRect();
	comp1.getPolar();

	// Soma
	cout << "\n>> Complexo 1 + Complexo 2: \n";
	soma.getRect();
	soma.getPolar();
	
	// Subtracao
	cout << "\n>> Complexo 1 - Complexo 2: \n";
	subtracao.getRect();
	subtracao.getPolar();
	
	// Multiplicação
	cout << "\n>> Complexo 1 * Complexo 2: \n";
	multiplicacao.getRect();
	multiplicacao.getPolar();
	
	// Divisão
	cout << "\n>> Complexo 1 / Complexo 2: \n";
	divisao.getRect();
	divisao.getPolar();
	
	cout << "\n";
	system("PAUSE");
	return 0;
}


