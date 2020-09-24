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
	// TODO
	cout << "A turma precisa aprender a fazer o proprio codigo!" << endl;
}