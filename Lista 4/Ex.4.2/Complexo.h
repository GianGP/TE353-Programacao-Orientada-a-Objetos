class Complexo{
	public:
		// Inicializacao do objeto
		Complexo();
		
		// Escrita dos numeros complexos
		void setComplex();
		
		// Leitura dos numeros complexos
		void getRect();
		void getPolar();

		// Funcoes matemáticas
		friend Complexo sum(Complexo comp, Complexo comp1);
		friend Complexo sub(Complexo comp, Complexo comp1);
		friend Complexo mult(Complexo comp, Complexo comp1);
		friend Complexo div(Complexo comp, Complexo comp1);
		
		// Destrutor da classe
		~Complexo();
	private:
		// Definição dos atributos
		float x, y, mod, phase;
				
		// Calculo do número na forma polar
		void calcPolar();
};


