#include "corrida.hpp"

#include<iostream>

using namespace std;

Corrida::Corrida(string titulo, int distancia):titulo(titulo),
			concorrentes(0),distancia(distancia){}
string 
Corrida::getTitulo(){
	return this->titulo;
}
int 
Corrida::getConcorrentes(){
	return this->concorrentes;
}
int 
Corrida::getDistancia(){
	return this->distancia;
}
Sapo* 
Corrida::getVencedor(){
	return this->vencedor;
}
void 
Corrida::addSapo(Sapo * novo){
	if (this->concorrentes<MAX_SAPOS) {
		this->sapos[this->concorrentes++] = novo;
	} else {
		cout << "Corrida lotada! " << novo->getId() << " ficou de fora." << endl;
	}
}
void 
Corrida::remSapo(string id){
	// TODO
}
void 
Corrida::run(){
	bool fim = false;
	while (!fim) {
		for (int i = 0; i < this->concorrentes; ++i)
		{
			//int pulou = 
			this->sapos[i]->pular();
			//cout << sapos[i]->getId() << " pulou +" 
			//		<< pulou << " para uma distância de "
			//		<< sapos[i]->getDistancia() << endl;
			if (sapos[i]->getDistancia()>this->distancia){
				fim = true;
				this->vencedor = sapos[i];
				break;
			}

		}
	}
}










