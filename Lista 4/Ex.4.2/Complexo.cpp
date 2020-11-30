# include "Complexo.h"
# include <iostream>
# include <cmath>

#define PI 3.14159

using namespace std;

// Seta valores default na construção do objeto
Complexo::Complexo(){
	x = 0;
	y = 0;
}

// Escrita do número complexo:
void Complexo::setComplex(){
	cout << "Parte Real: ";
	cin >> x;
	cout << "Parte Imaginaria: ";
	cin >> y;
}

// Impressão do número na forma retangular
void Complexo::getRect(){
	char op;
	op = (y < 0) ? '-' : '+';
	cout << "Forma Retangular: " << x << " " << op << " " << fabs(y) << "i\n";
};

// Impressão do número na forma polar
void Complexo::getPolar(){
	calcPolar();
	cout << "Forma Polar: Modulo: " << mod << " | Fase: " << phase << " graus\n";
};

// Cálculo da forma polar do número
void Complexo::calcPolar(){
	mod = sqrt(x*x + y*y);
	phase = 180*atan(y/x)/PI;
}

// Funcao para somar dois complexos
Complexo sum(Complexo comp, Complexo comp1){
	Complexo soma;
	
	// Soma componentes reais
	soma.x = comp.x + comp1.x;
	
	// Soma componentes imaginarias
	soma.y = comp.y + comp1.y;
	
	return soma;
}

// Funcao para subtrair dois complexos
Complexo sub(Complexo comp, Complexo comp1){
	Complexo subtracao;
	
	// Subtrai componentes reais
	subtracao.x = comp.x - comp1.x;
	
	// Subtrai componentes imaginarias
	subtracao.y = comp.y - comp1.y;
	
	return subtracao;
}

// Funcao para multiplicar dois complexos
Complexo mult(Complexo comp, Complexo comp1){
	Complexo multiplicacao;
	
	// Resultante da parte real
	multiplicacao.x = comp.x * comp1.x - comp.y * comp1.y;
	
	// Resultante da parte imaginaria
	multiplicacao.y = comp.x * comp1.y + comp.y * comp1.x;
	
	return multiplicacao;
}

// Funcao para dividir dois complexos
Complexo div(Complexo comp, Complexo comp1){
	Complexo divisao;
	
	// Resultante da parte real
	divisao.x = (comp.x * comp1.x + comp.y * comp1.y)/(comp1.x * comp1.x + comp1.y * comp1.y);
	
	// Resultante da parte imaginaria
	divisao.y = (comp.y * comp1.x - comp.x * comp1.y)/(comp1.x * comp1.x + comp1.y * comp1.y);
	
	return divisao;
}

// Destrutor da classe
Complexo::~Complexo(){
	cout << "";
}

