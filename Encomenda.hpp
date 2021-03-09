#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		double peso = 0.0;
		double custokg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			dest.print();
		}

};

#endif