#include <iostream>
#include "Classe.h"
using namespace std;

int main() {
	// Cria��o de 2 objetos, um da classe m�e e um da classe filho
	Empresa emp;
	Restaurante res;
	
	// M�todo para inserir dados no objeto empresa
	emp.getdata();
	emp.putdata();
	
	cout << "\n";
	
	// M�todo para inserir dados no objeto restaurante
	res.getdata();
	res.putdata();
	
	system("PAUSE");
	return 0;	
}


