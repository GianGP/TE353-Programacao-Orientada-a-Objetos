#include <iostream>
#define PI 3.14
using namespace std;

class Circulo{
	public:
		float raio;
		int centro_x;
		int centro_y;
		
		void init(float r){
			raio = r;
		}
		
		void aumentarRaio(int porcentagem){
			raio *= (1 + (float) porcentagem/100);
		}
		
		void centrarCirculo(int x, int y){
			centro_x = x;
			centro_y = y;
		}
		
		void imprimirRaio(void){
			cout << "Raio: " << raio << "\n";
		}
		
		void imprimirCentro(void){
			cout << "Centro: (" << centro_x << "," << centro_y << ")\n";
		}
		
		void imprimirArea(void){
			calcularArea();
			cout << "Area: " << area << "\n";
		}
		
		void imprimirPerimetro(void){
			calcularPerimetro();
			cout << "Perimetro: " << perimetro << "\n";
		}
		
	private:
		float area, perimetro;
		
		void calcularArea(void){
			area = PI * raio * raio;
		}
		
		void calcularPerimetro(void){
			perimetro = 2 * PI * raio;
		}
		
};

int main(){
	Circulo circ;
	
	circ.init(2.5);
	circ.imprimirRaio();
	circ.aumentarRaio(1);
	circ.imprimirRaio();
	circ.centrarCirculo(4, 5);
	circ.imprimirArea();
	circ.imprimirCentro();
	circ.imprimirPerimetro();
	
	return 0;
}
