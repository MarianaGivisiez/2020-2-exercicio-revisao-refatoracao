#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

	double calcula(){

		double x = peso * custokg;

		return x;
	}

	void print(){
		
    Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << peso << std::endl
			<< "  Custo por kg: " << custokg << std::endl
			<< "  Custo total: " << T << std::endl;

	}