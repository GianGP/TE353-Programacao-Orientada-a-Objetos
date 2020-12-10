# include <iostream>
# include "fracao.h"
using namespace std;

int main(){
	// Criacao variaveis 
	fracao frac, frac1(4, 5), sum, sub, mult, div, sum1, sub1, mult1, div1, inc, dec;
	
	// Operacoes matematicas entre 2 fracoes
	sum = frac + frac1;
	sub = frac - frac1;
	mult = frac * frac1;
	div = frac/frac1;
	
	// Operacoes matematicas entre uma fracao e um inteiro
	sum1 = frac1 + 3;
	sub1 = frac1 - 3;
	mult1 = frac1*3;
	div1 = frac1/3;
	
	// Retorna fracoes criadas
	cout << "Fracoes:";
	cout << "\nFracao 1: " << frac.getNum() << "/" << frac.getDen();
	cout << "\nFracao 2: " << frac1.getNum()<< "/" << frac1.getDen();
	
	// Retorna todas as operacoes entre duas fracoes
	cout << "\n\nOperacoes entre duas fracoes:";	
	cout << "\n" << frac.getNum() << "/" << frac.getDen() << " + " << frac1.getNum() << "/" << frac1.getDen() << ": "<< sum.getNum() << "/" << sum.getDen();
	cout << "\n" << frac.getNum() << "/" << frac.getDen() << " - " << frac1.getNum() << "/" << frac1.getDen() << ": "<< sub.getNum() << "/" << sub.getDen();
	cout << "\n" << frac.getNum() << "/" << frac.getDen() << " * " << frac1.getNum() << "/" << frac1.getDen() << ": "<< mult.getNum() << "/" << mult.getDen();
	cout << "\n" << frac.getNum() << "/" << frac.getDen() << " / " << frac1.getNum() << "/" << frac1.getDen() << ": "<< div.getNum() << "/" << div.getDen();
	
	// Retorna todas as operacoes entre uma fracao e um inteiro
	cout << "\n\nOperacoes entre uma fracao e um inteiro:";
	cout << "\n" << frac1.getNum() << "/" << frac1.getDen() << " + 3: "<< sum1.getNum() << "/" << sum1.getDen();
	cout << "\n" << frac1.getNum() << "/" << frac1.getDen() << " - 3: "<< sub1.getNum() << "/" << sub1.getDen();
	cout << "\n" << frac1.getNum() << "/" << frac1.getDen() << " * 3: "<< mult1.getNum() << "/" << mult1.getDen();
	cout << "\n" << frac1.getNum() << "/" << frac1.getDen() << " / 3: "<< div1.getNum() << "/" << div1.getDen();
	
	// Retorna o teste do incremento
	cout << "\n\nTeste incremento:";
	
	// Incremento pre-fixado
	++frac1;
	cout << "\nFracao 2 incrementada: " << frac1.getNum() << "/" << frac1.getDen();
	
	// Incremento pos-fixado
	inc = frac++;
	cout << "\nFracao 1 antes incremento: " << inc.getNum() << "/" << inc.getDen();
	cout << "\nFracao 1 apos incremento: " << frac.getNum() << "/" << frac.getDen();
	
	// Retorna o teste do decremento
	cout << "\n\nTeste Decremento:";
	
	// Decremento pre-fixado
	--frac1;
	cout << "\nFracao 2 decrementada: " << frac1.getNum() << "/" << frac1.getDen();
	
	// Decremento pos-fixado
	dec = frac--;
	cout << "\nFracao 1 antes decremento: " << dec.getNum() << "/" << dec.getDen();
	cout << "\nFracao 1 apos decremento: " << frac.getNum() << "/" << frac.getDen();
 	
	cout << "\n\n";
	system("PAUSE");
	return 0;
}
