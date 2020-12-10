# include "fracao.h"
# include <iostream>
using namespace std;

// Seta valores default na constru��o do objeto
fracao::fracao(){
	num = 1;
	den = 1;
}

// Seta valores parametrizados na constru��o do objeto
fracao::fracao(int numerador, int denominador){
	num = numerador;
	den = denominador;
}

// Retorna numerador
int fracao::getNum(){
	return num;
}

// Retorna denominador
int fracao::getDen(){
	return den;
}

// Sobrep�e fun��o soma
fracao fracao::operator +(fracao frac){
	fracao sum;
	
	sum.num = num * frac.den + frac.num * den;
	sum.den	= den * frac.den;
	
	return sum;
}

// Sobrep�e fun��o subtra��o
fracao fracao::operator -(fracao frac){
	fracao sub;
	
	sub.num = num * frac.den - frac.num * den;
	sub.den	= den * frac.den;
	
	return sub;
}

// Sobrep�e fun��o multiplica��o
fracao fracao::operator *(fracao frac){
	fracao mult;
	
	mult.num = num * frac.num;
	mult.den = den * frac.den;
	
	return mult;
}

// Sobrep�e fun��o divis�o
fracao fracao::operator /(fracao frac){
	fracao div;
	
	div.num = num * frac.den;
	div.den = den * frac.num;
	
	return div;
}

// Sobrep�e fun��o soma com inteiro
fracao fracao::operator +(int i){
	fracao sum;
	
	sum.num = num + den * i;
	sum.den = den;
	
	return sum;
}

// Sobrep�e fun��o subtra��o com inteiro
fracao fracao::operator -(int i){
	fracao sub;
	
	sub.num = num - den * i;
	sub.den = den;
	
	return sub;
}

// Sobrep�e fun��o multiplica��o com inteiro
fracao fracao::operator *(int i){
	fracao mult;
	
	mult.num = num * i;
	mult.den = den;
	
	return mult;
}

// Sobrep�e fun��o divis�o com inteiro
fracao fracao::operator /(int i){
	fracao div;
	
	div.num = num;
	div.den = den * i;
	
	return div;
}

// Sobrep�e incremento pr�-fixado
fracao fracao::operator ++(){
	num = num + den;
	return *this;
}

// Sobrep�e incremento p�s-fixado
fracao fracao::operator ++(int){
	fracao autoinc;
	
	autoinc.num = num;
	autoinc.den = den;
	
	num = num + den;
	
	return autoinc;
}

// Sobrep�e decremento pr�-fixado
fracao fracao::operator --(){
	num = num - den;
	return *this;
}

// Sobrep�e decremento p�s-fixado
fracao fracao::operator --(int){
	fracao autodec;
	
	autodec.num = num;
	autodec.den = den;
	
	num = num - den;
	
	return autodec;
}
