class Complexo{
	public:
		// Inicializacao do objeto
		Complexo();
		
		// Escrita dos numeros complexos
		void setComplex();
		
		// Leitura dos numeros complexos
		void getRect();
		void getPolar();

		// Funcoes matem�ticas
		friend Complexo sum(Complexo comp, Complexo comp1);
		friend Complexo sub(Complexo comp, Complexo comp1);
		friend Complexo mult(Complexo comp, Complexo comp1);
		friend Complexo div(Complexo comp, Complexo comp1);
		
		// Destrutor da classe
		~Complexo();
	private:
		// Defini��o dos atributos
		float x, y, mod, phase;
				
		// Calculo do n�mero na forma polar
		void calcPolar();
};


