# include "Classe.h"
# include <iostream>
using namespace std;

// Seta valores default na construção do objeto
Empresa::Empresa(){
	name = "Empresa";
	end = "R. Empresa, 10";
	cid = "Cidade";
	est = "Estado";
	cep_emp = "CEP";
	tel = "Telefone";
}

// Seta valores parametrizados na construção do objeto
Empresa::Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone){
	name = nome;
	end = endereco;
	cid = cidade;
	estado = est;
	cep_emp = cep;
	tel = telefone;
}

// Escreve nas variaveis de acordo com o input do usuário
void Empresa::getdata(){
	cout << "\nInsira os dados para criar a sua nova empresa:";
	cout << "\n----------------------------------------------\n";
	cout << "Nome da empresa: ";
	cin >> name;
	cout << "Endereco Comercial: ";
	cin >> end;
	cout << "Cidade: ";
	cin >> cid;
	cout << "Estado: ";
	cin >> est;
	cout << "CEP: ";
	cin >> cep_emp;
	cout << "Telefone de Contato: ";
	cin >> tel;
}

// Le as variáveis
void Empresa::putdata(){
	cout << "\nDados da empresa " << name << ":";
	cout << "\n==============================================";
	cout << "\nEndereco: " << end;
	cout << "\nCidade: " << cid;
	cout << "\nEstado: " << est;
	cout << "\nCEP: " << cep_emp;
	cout << "\nTelefone: " << tel;
}

// Seta valores default na construção do objeto
Restaurante::Restaurante():Empresa(){
	food = "Comida";
	price = 50.0;
}

// Seta valores parametrizados na construção do objeto
Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone, string comida, float preco) : 
Empresa(nome, endereco, cidade, estado, cep, telefone){
	food = comida;
	price = preco;
}

// Sobrepões função getdata da classe mãe e adiciona mais informações
void Restaurante::getdata(){
	Empresa::getdata();
	cout << "Tipo de Comida do Restaurante: ";
	cin >> food;
	cout << "Preco Medio dos Pratos: ";
	cin >> price;
}

// Sobrepões função putdata da classe mãe e adiciona mais informações
void Restaurante::putdata(){
	Empresa::putdata();
	cout << "\nTipo de comida: " << food;
	cout << "\nPreco Medio: R$ " << price;
	cout << "\n\n";
}

