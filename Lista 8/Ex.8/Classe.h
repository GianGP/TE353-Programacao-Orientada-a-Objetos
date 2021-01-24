// Definição classe abstrata Conta
class Conta{
	protected:
		// Atributos da classe
		char nome[30];
		int numero;
		float saldo;
	
	public:
		// Construtores da classe
		Conta();
		Conta(char nome_conta[], int num_conta, float saldo_conta);
		
		// Método de depósito
		void depositar(int valor);
		
		// Função virtual base para classes filhas
		virtual void extrato() = 0;
};

class ContaComum: public Conta{
	public:
		// Construtores da classe
		ContaComum();
		ContaComum(char nome_conta[], int num_conta, float saldo_conta);
		
		// Método de extrato, usando a função virtual
		void extrato();
};

class ContaPoupanca: public Conta{
	private:
		// Atributo exclusivo da classe ContaPoupanca
		char aniversario[10];
	
	public:
		// Construtores da classe
		ContaPoupanca();
		ContaPoupanca(char nome_conta[], int num_conta, float saldo_conta, char aniversario_conta[]);
		
		// Método de extrato, usando a função virtual
		void extrato();
};
