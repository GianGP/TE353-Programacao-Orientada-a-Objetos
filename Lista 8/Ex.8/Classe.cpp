#include <iostream>
#include <cstring>
#include "Classe.h"

// Construtores da classe abstrata Conta
Conta::Conta(){
	std::strcpy(nome, "None");
	numero = -1;
	saldo = 0.0;
}

Conta::Conta(char nome_conta[], int num_conta, float saldo_conta){
	std::strcpy(nome, nome_conta);
	numero = num_conta;
	saldo = saldo_conta;
}

// Método de deposito na conta
void Conta::depositar(int valor){
	saldo += valor;
}

// Construtores da classe filha ContaComum
ContaComum::ContaComum() : Conta(){
}

ContaComum::ContaComum(char nome_conta[], int num_conta, float saldo_conta)
			: Conta(nome_conta, num_conta, saldo_conta){
}

// Método para extrato tomando como base a função virtual
void ContaComum::extrato(){
	std::cout << "==============Dados Conta Comum===============\n";
	std::cout << "Numero da Conta: " << numero << "\n";
	std::cout << "Titular: " << nome << "\n";
	std::cout << "Saldo: " << saldo << "\n";
	std::cout << "==============================================\n\n";
}

// Construtores da classe ContaPoupanca
ContaPoupanca::ContaPoupanca(): Conta(){
	std::strcpy(aniversario, "01/01/1990");
}

ContaPoupanca::ContaPoupanca(char nome_conta[], int num_conta, float saldo_conta, char aniversario_conta[])
				: Conta(nome_conta, num_conta, saldo_conta){
	std::strcpy(aniversario, aniversario_conta);					
}

// Método para extrato tomando como base a função virtual
void ContaPoupanca::extrato(){
	std::cout << "==============Dados Conta Poupanca===============\n";
	std::cout << "Numero da Conta: " << numero << "\n";
	std::cout << "Titular: " << nome << "\n";
	std::cout << "Aniversario Titular: " << aniversario << "\n";
	std::cout << "Saldo: " << saldo << "\n";
	std::cout << "=================================================\n\n";
}
