# include "fracao.h"
# include <iostream>
using namespace std;

// Seta valores default na construção do objeto
fracao::fracao(){
	num = 1;
	den = 1;
}

// Seta valores parametrizados na construção do objeto
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

// Sobrepõe função soma
fracao fracao::operator +(fracao frac){
	fracao sum;
	
	sum.num = num * frac.den + frac.num * den;
	sum.den	= den * frac.den;
	
	return sum;
}

// Sobrepõe função subtração
fracao fracao::operator -(fracao frac){
	fracao sub;
	
	sub.num = num * frac.den - frac.num * den;
	sub.den	= den * frac.den;
	
	return sub;
}

// Sobrepõe função multiplicação
fracao fracao::operator *(fracao frac){
	fracao mult;
	
	mult.num = num * frac.num;
	mult.den = den * frac.den;
	
	return mult;
}

// Sobrepõe função divisão
fracao fracao::operator /(fracao frac){
	fracao div;
	
	div.num = num * frac.den;
	div.den = den * frac.num;
	
	return div;
}

// Sobrepõe função soma com inteiro
fracao fracao::operator +(int i){
	fracao sum;
	
	sum.num = num + den * i;
	sum.den = den;
	
	return sum;
}

// Sobrepõe função subtração com inteiro
fracao fracao::operator -(int i){
	fracao sub;
	
	sub.num = num - den * i;
	sub.den = den;
	
	return sub;
}

// Sobrepõe função multiplicação com inteiro
fracao fracao::operator *(int i){
	fracao mult;
	
	mult.num = num * i;
	mult.den = den;
	
	return mult;
}

// Sobrepõe função divisão com inteiro
fracao fracao::operator /(int i){
	fracao div;
	
	div.num = num;
	div.den = den * i;
	
	return div;
}

// Sobrepõe incremento pré-fixado
fracao fracao::operator ++(){
	num = num + den;
	return *this;
}

// Sobrepõe incremento pós-fixado
fracao fracao::operator ++(int){
	fracao autoinc;
	
	autoinc.num = num;
	autoinc.den = den;
	
	num = num + den;
	
	return autoinc;
}

// Sobrepõe decremento pré-fixado
fracao fracao::operator --(){
	num = num - den;
	return *this;
}

// Sobrepõe decremento pós-fixado
fracao fracao::operator --(int){
	fracao autodec;
	
	autodec.num = num;
	autodec.den = den;
	
	num = num - den;
	
	return autodec;
}
