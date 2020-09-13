#include <iostream>

// Declaração da Classe Retangulo
#include "retangulo.hpp"

//using namespace std;
//using std::cout;


int main(){
	// Instanciando (estaticamente) um Retangulo
	Retangulo x;
	x.setAltura(3);
	x.setLargura(4);
	std::cout << "Área: " << x.area() << std::endl;
	
	// Instanciando (dinamicamente) um Retangulo
	Retangulo* y = new Retangulo();
	y->setAltura(5);
	y->setLargura(5);
	std::cout << "Área: " << y->perimetro() << std::endl;

	return 0;
}