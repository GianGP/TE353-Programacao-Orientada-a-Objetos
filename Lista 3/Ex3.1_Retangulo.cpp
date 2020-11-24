#include <iostream>
using namespace std;

class retangulo{
	public:
		int base;
		int altura;
		int perimetro;
		int area;
		
		void init_ret(int b, int h){
			base = b;
			altura = h;
		}
		
		void calc_perimetro(){
			perimetro = base*2 + altura*2;
		}
		
		void calc_area(){
			area = base*altura;
		}
		
		void valor_medidas(){
			cout << "Perimetro: " << perimetro << "\n";
			cout << "Area: " << area << "\n";
		}
};

int main(){
	retangulo ret;
	ret.init_ret(5,6);
	ret.calc_area();
	ret.calc_perimetro();
	ret.valor_medidas();
	return 0;
}
