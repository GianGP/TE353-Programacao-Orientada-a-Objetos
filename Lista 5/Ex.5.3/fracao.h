class fracao{
	public:
		// Inicializa��o do objeto
		fracao();
		fracao(int numerador, int denominador);
		
		// Fun��es para retornar numerador e denominador
		int getNum();
		int getDen();
		
		// Fun��es matem�ticas com outros objetos da mesma classe
		fracao operator +(fracao frac);
		fracao operator -(fracao frac);
		fracao operator *(fracao frac);
		fracao operator /(fracao frac);
		
		// Fun��es matem�ticas com inteiros
		fracao operator +(int i);
		fracao operator -(int i);
		fracao operator *(int i);
		fracao operator /(int i);
		
		// Fun��es incremento 
		fracao operator ++();
		fracao operator ++(int);
		
		// Fun��es decremento
		fracao operator --();
		fracao operator --(int);
		
	private:
		// Defini��o atributos numerador e denominador
		int num, den;
};
