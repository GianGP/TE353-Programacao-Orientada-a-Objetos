#include <iostream>
#include "Classe.h"

int main() {
	 ContaComum contaExemplo1, conta1("Carlos", 1, 10.0);
	 ContaPoupanca contaExemplo2, conta2("Jose", 2, 20.0, "30/08/1999");
	 
	 contaExemplo1.extrato();
	 
	 contaExemplo2.extrato();
	 
	 conta1.extrato();
	 conta1.depositar(100);
	 conta1.extrato();
	 
	 conta2.extrato();
	 conta2.depositar(500);
	 conta2.extrato();
	return 0;
}
