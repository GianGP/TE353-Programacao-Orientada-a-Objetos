# include <string>
using namespace std;

class Empresa{
	public:
		// Construtores da classe
		Empresa();
		Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone);
		
		// Método para setar atributos
		void getdata();
		
		// Método para ler atributos
		void putdata();
	protected:
		// Abtributos da classe
		string name, end, cid, est, cep_emp, tel;
		
};

class Restaurante : public Empresa{
	public:
		// Construtores da classe
		Restaurante();
		Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone, string comida, float preco);
		
		// Método para setar atributos
		void getdata();
		
		// Método para ler atributos
		void putdata();
	private:
		// Atributos da classe
		string food;
		float price;
};


