class fracao{
	public:
		// Inicialização do objeto
		fracao();
		fracao(int numerador, int denominador);
		
		// Funções para retornar numerador e denominador
		int getNum();
		int getDen();
		
		// Funções matemáticas com outros objetos da mesma classe
		fracao operator +(fracao frac);
		fracao operator -(fracao frac);
		fracao operator *(fracao frac);
		fracao operator /(fracao frac);
		
		// Funções matemáticas com inteiros
		fracao operator +(int i);
		fracao operator -(int i);
		fracao operator *(int i);
		fracao operator /(int i);
		
		// Funções incremento 
		fracao operator ++();
		fracao operator ++(int);
		
		// Funções decremento
		fracao operator --();
		fracao operator --(int);
		
	private:
		// Definição atributos numerador e denominador
		int num, den;
};
