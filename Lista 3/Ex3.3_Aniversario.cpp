#include <iostream>
#include <string>
#include <sstream>
#include <stdbool.h>
using namespace std;

string meses[12] = {"Janeiro", "Feveiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

class Aniversario{
	public:
		void init(string d){
			ix_dia = d.find("/");
			ix_mes = d.find("/",ix_dia+1);			
			data = d;
			temp_dia << data.substr(0,ix_dia);
			temp_dia >> dia;
			
			temp_mes << data.substr(ix_dia+1,ix_mes-ix_dia-1);
			temp_mes >> mes;
			
			temp_ano << data.substr(ix_mes+1,4);
			temp_ano >> ano;
			
			if(validarData()){
				descobrirSigno();
				printarInfos();
			}
			else{
				cout << "Data Invalida.";
			}
		}
		
		void printarInfos(){
			cout << "Data Extenso: " << dia << " de " << meses[mes-1] << " de " << ano << "\n";
			cout << "Signo: " << signo << "\n";
			if(bissexto){
				cout << "Ano bissexto\n";
			}
			else{
				cout << "Ano nao bissexto\n";
			}
		}
	
	private:
		int ix_dia, ix_mes;
		string data, signo, data_extenso;
		int dia, mes, ano;
		stringstream temp_dia, temp_mes, temp_ano;
		bool bissexto;
		
		void descobrirSigno(){
			switch(mes){
	            case 1:
	             	signo = (dia <= 20) ? "Capricornio" : "Aquario";
	            break;

	            case 2:
	             	signo = (dia <= 19) ? "Aquario" : "Peixes";
	            break;

	            case 3:
	            	signo = (dia <= 20) ? "Peixes" : "Aries";
	            break;

	            case 4:
	            	signo = (dia <= 20) ? "Aries" : "Touro";
	            break;

				case 5:
					signo = (dia <= 20) ? "Touro" : "Gemeos";
				break;

	            case 6:
	            	signo = (dia <= 20) ? "Gemeos" : "Cancer";
	            break;

	            case 7:
	            	signo = (dia <= 21) ? "Cancer" : "Leao";
	            break;

	            case 8:
	            	signo = (dia <= 22) ? "Leao" : "Virgem";
	            break;

	            case 9:
	            	signo = (dia <= 22) ? "Virgem" : "Libra";
	            break;

	            case 10:
	            	signo = (dia <= 22) ? "Libra" : "Escorpiao";
	            break;

	            case 11:
	            	signo = (dia <= 21) ? "Escorpiao" : "Sagitario";
	            break;

	            case 12:
	            	signo = (dia <= 21) ? "Sagitario" : "Capricornio";
	            break;
	            
	        	default:
	             	signo = (dia <= 20) ? "Capricornio" : "Aquario";
	    	}
		}
		
		bool validarData(){
			bool erro;
			
			erro = (ano < 1);
			bissexto = ((ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0) && !erro));
			erro = ((mes < 1 || mes > 12) && !erro);
			
			if(!erro){
				if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
					erro = (dia < 1 || dia > 31);
				}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
					erro = (dia < 1 || dia > 30);
				}else if(mes == 2 && bissexto){
					erro = (dia < 1 || dia > 29);
				}else{
					erro = (dia < 1 || dia > 28);
				}
			}
			
			return !erro;
		}
};

int main(){
	
	Aniversario aniv;
	string data;
	
	cout << "Data de seu aniversario (no formato: DD/MM/AAAA): ";
	cin >> data;
	
	aniv.init(data);
	
	return 0;
}
