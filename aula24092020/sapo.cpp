#include "sapo.hpp"

#include <iostream>

using namespace std;

Sapo::Sapo(string id, int max_pulo):id(id),max_pulo(max_pulo),
			distancia(0),pulos(0),rd(),gen(rd()),dis(1,max_pulo){}

string 
Sapo::getId(){
	return this->id;
}

int 
Sapo::getMaxPulo(){
	return this->max_pulo;
}

int 
Sapo::getDistancia(){
	return this->distancia;
}

int 
Sapo::getPulos(){
	return this->pulos;
}

void 
Sapo::pular(){
	this->pulos++;
	this->distancia += round(dis(gen));
}
