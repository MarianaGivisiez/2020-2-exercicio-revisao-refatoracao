#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

		double calcula(){

			double x = peso * custokg;
			x += x * 0.25;
			
			return x;
		}
    
void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custokg << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << T << std::endl;

		}