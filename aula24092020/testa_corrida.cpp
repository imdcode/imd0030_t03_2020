#include "corrida.hpp"

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	Sapo* s1 = new Sapo("Sena",15);
	Sapo* s2 = new Sapo("Rubinho",7);
	Sapo* s3 = new Sapo("Massa",9);
	Sapo* s4 = new Sapo("Hamilton",14);
	Corrida gpbrasil("Grande Prêmio de Interlagos", 100);
	gpbrasil.addSapo(s1);
	gpbrasil.addSapo(s2);
	gpbrasil.addSapo(s3);
	gpbrasil.addSapo(s4);

	gpbrasil.run();
	return 0;
}