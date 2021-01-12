# include <iostream>
# include "Classe.h"

using namespace std;

// Construtor da classe Motor com parametros default
Motor::Motor(){
	n_cilindro = 0;
	pot = 0;
}

// Construtor da classe Motor com parametros inseridos
Motor::Motor(int numCilindro, int potencia){
	n_cilindro = numCilindro;
	pot = potencia;
};

// Método para adquirir os atributos da classe Motor
void Motor::getdata(){
	cout << "\nInsira o numero de cilindros do motor: ";
	cin >> n_cilindro;
	cout << "\nInsira a potencia do motor (hp): ";
	cin >> pot;
}

// Método para printar os atributos da classe Motor
void Motor::putdata(){
	cout << "\nNumero de cilindros do motor: " << n_cilindro;
	cout << "\nPotencia do motor: " << pot << " hp";
}

// Construtor da classe Veiculo com parametros default
Veiculo::Veiculo(){
	peso = 0;
	v_max = 0;
	preco = 0.0;
}

// Construtor da classe Veiculo com parametros inseridos
Veiculo::Veiculo(int pesoVeiculo, int velocidadeMax, float precoVeiculo){
	peso = pesoVeiculo;
	v_max = velocidadeMax;
	preco = precoVeiculo;
}

// Método para adquirir os atributos da classe Veiculo
void Veiculo::getdata(){
	cout << "\nInsira o peso do veiculo (kg): ";
	cin >> peso;
	cout << "\nInsira a velocidade maxima do veiculo (km/h): ";
	cin >> v_max;
	cout << "\nInsira o preco do veiculo: R$";
	cin >> preco;
}

// Método para printar os atributos da classe Veiculo
void Veiculo::putdata(){
	cout << "\nPeso do veiculo: " << peso << " kg";
	cout << "\nVelocidade maxima do veiculo: " << v_max << " km/h";
	cout << "\nPreco do veiculo: R$" << preco;
}

// Construtor da classe CarroPasseio com parametros default
CarroPasseio::CarroPasseio(): Motor(), Veiculo(){
	cor = "";
	modelo = "";
}

// Construtor da classe CarroPasseio com parametros inseridos
CarroPasseio::CarroPasseio(int numCilindro, int potencia, int pesoVeiculo, int velocidadeMax,
	float precoVeiculo, string corCarro, string modeloCarro):
 	Motor(numCilindro, potencia), Veiculo(pesoVeiculo, velocidadeMax, precoVeiculo){
	
	cor = corCarro;
	modelo = modeloCarro;
}

// Método para adquirir os atributos da classe CarroPasseio
void CarroPasseio::getdata(){
	Motor::getdata();
	Veiculo::getdata();
	cout << "\nInsira a cor do carro: ";
	cin.ignore();
	getline(cin, cor);
	cout << "\nInsira o modelo do carro: ";
	cin.ignore();
	getline(cin, modelo);
}

// Método para printar os atributos da classe CarroPasseio
void CarroPasseio::putdata(){
	Motor::putdata();
	Veiculo::putdata();
	cout << "\nCor do carro: " << cor;
	cout << "\nModelo do carro: " << modelo;
}

// Construtor da classe Caminhao com parametros default
Caminhao::Caminhao(): Motor(), Veiculo(){
	ton = 0;
	alt_max = 0;
	comp = 0;
}

// Construtor da classe Caminhao com parametros inseridos
Caminhao::Caminhao(int numCilindro, int potencia, int pesoVeiculo, int velocidadeMax, float precoVeiculo, int cargaMaxima, int alturaMaxima, int comprimento)
		: Motor(numCilindro, potencia), Veiculo(pesoVeiculo, velocidadeMax, precoVeiculo){
	
	ton = cargaMaxima;
	alt_max = alturaMaxima;
	comp = comprimento;
}

// Método para adquirir os atributos da classe Caminhao
void Caminhao::getdata(){
	Motor::getdata();
	Veiculo::getdata();
	cout << "\nInsira a carga maxima do caminhao (T): ";
	cin >> ton;
	cout << "\nInsira a altura maxima do caminhao (m): ";
	cin >> alt_max;
	cout << "\nInsira o comprimento do caminhao (m): ";
	cin >> comp;
}

// Método para printar os atributos da classe Caminhao
void Caminhao::putdata(){
	Motor::putdata();
	Veiculo::putdata();
	cout << "\nCarga maxima do caminhao: " << ton << " T";
	cout << "\nAltura maxima do caminhao: " << alt_max << " m";
	cout << "\nComprimento do caminhao: " << comp << " m";
}
