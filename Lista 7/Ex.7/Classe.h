# include <string>
using namespace std;

class Motor{
	public:
		Motor();
		Motor(int numCilindro, int potencia);
		
		// Getter e setter
		void getdata();
		void putdata();
		
	private:
		int n_cilindro, pot;
};

class Veiculo{
	public:
		Veiculo();
		Veiculo(int pesoVeiculo, int velocidadeMax, float precoVeiculo);
		
		// Getter e setter
		void getdata();
		void putdata();
	
	private:
		int peso, v_max;
		float preco;
};

class CarroPasseio: public Motor, Veiculo{
	public:
		CarroPasseio();
		CarroPasseio(int numCilindro, int potencia, int pesoVeiculo, int velocidadeMax, float precoVeiculo, string corCarro, string modeloCarro);
	
		// Getter e setter
		void getdata();
		void putdata();
	
	private:
		string cor, modelo;
};

class Caminhao: public Motor, Veiculo{
	public:
		Caminhao();
		Caminhao(int numCilindro, int potencia, int pesoVeiculo, int velocidadeMax, float precoVeiculo, int cargaMaxima, int alturaMaxima, int comprimento);
		
		// Getter e setter
		void getdata();
		void putdata();
		
	private:
		int ton, alt_max, comp;

};
