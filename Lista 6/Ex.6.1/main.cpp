#include <iostream>
#include "Classe.h"
using namespace std;

int main() {
	// Cria��o do objeto restaurante
	Restaurante res;
	
	// Exemplo de entrada do usu�rio
	cout << "Exemplo de input: \n";
	res.putdata();
	cout << " (somente o numero float)\n\n";
	
	// M�todo para inserir dados no objeto restaurante
	res.getdata();
	res.putdata();
	
	cout << "\n\n";
	
	system("PAUSE");
	return 0;	
}


