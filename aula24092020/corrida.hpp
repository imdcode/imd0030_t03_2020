#ifndef _CORRIDA_
#define _CORRIDA_

#define MAX_SAPOS 4

#include "sapo.hpp"

#include<iostream>

using namespace std;

class Corrida {
private:
	string titulo;
	Sapo* sapos[MAX_SAPOS];
	int concorrentes;
	int distancia;
	Sapo* vencedor;
public:
	Corrida(string titulo, int distancia);
	string getTitulo();
	int getConcorrentes();
	int getDistancia();
	Sapo* getVencedor();
	void addSapo(Sapo * novo);
	void remSapo(string id);
	void run();
};

#endif