#include "retangulo.hpp"

int Retangulo::area() {
	return altura*largura;
}

int Retangulo::perimetro() {
	return (2*largura + 2*altura);
}

int Retangulo::getAltura() {
	return altura;
}

void Retangulo::setAltura(int altura_) {
	altura = altura_;
}

int Retangulo::getLargura() {
	return largura;
}
void Retangulo::setLargura(int largura_) {
	largura = largura_;
}

