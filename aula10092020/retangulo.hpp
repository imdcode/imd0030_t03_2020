#include <iostream>

#ifndef _RETANGULO_
#define _RETANGULO_

class Retangulo {
private:
	int altura;
	int largura;

public:
	int area();
	int perimetro();
	// Definindo métodos de acesso
	int getAltura();
	void setAltura(int altura_);
	int getLargura();
	void setLargura(int largura_);
};

#endif
