#ifndef _CORRIDA_
#define _CORRIDA_

#define MAX_SAPOS 3

#include "sapo.hpp"

#include<iostream>

using namespace std;

class Corrida {
private:
	string titulo;
	Sapo* sapos[MAX_SAPOS];
	int concorrentes;
	int distancia;
public:
	Corrida(string titulo, int distancia);
	string getTitulo();
	int getConcorrentes();
	int getDistancia();
	void addSapo(Sapo * novo);
	void remSapo(string id);
	void run();
};

#endif