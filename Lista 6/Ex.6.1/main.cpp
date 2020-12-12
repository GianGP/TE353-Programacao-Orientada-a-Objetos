#include <iostream>
#include "Classe.h"
using namespace std;

int main() {
	// Criação de 2 objetos, um da classe mãe e um da classe filho
	Empresa emp;
	Restaurante res;
	
	// Método para inserir dados no objeto empresa
	emp.getdata();
	emp.putdata();
	
	cout << "\n";
	
	// Método para inserir dados no objeto restaurante
	res.getdata();
	res.putdata();
	
	system("PAUSE");
	return 0;	
}


