# include <iostream>
# include <string>
# include "Classe.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	CarroPasseio carro;
	Caminhao caminhao;
	
	
	cout << "===========================================";
	cout << "\nCarro Passeio";
	cout << "\n===========================================\n";
	
	carro.getdata();
	
	cout << "\n===========================================";
	carro.putdata();
	cout << "\n===========================================\n";


	cout << "\n\n===========================================";
	cout << "\nCaminhao";
	cout << "\n===========================================\n";
	caminhao.getdata();
	
	cout << "\n===========================================";
	caminhao.putdata();
	cout << "\n===========================================\n";
		
	return 0;
}

