#include "corrida.hpp"

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	Sapo* s1 = new Sapo("Sena",15);
	Sapo* s2 = new Sapo("Rubinho",7);
	Sapo* s3 = new Sapo("Massa",9);
	Sapo* s4 = new Sapo("Hamilton",14);
	int distancia_total = 100;
	if (argc == 2) {
		distancia_total = atoi(argv[1]);
	}
	Corrida gpbrasil("Grande Prêmio de Interlagos", distancia_total);
	gpbrasil.addSapo(s1);
	gpbrasil.addSapo(s3);
	gpbrasil.addSapo(s4);
	gpbrasil.addSapo(s2);
	cout << "Distância total: " << gpbrasil.getDistancia() << endl;
	
	gpbrasil.run();

	Sapo* campeao = gpbrasil.getVencedor();

	cout << campeao->getId() << " foi o vencedor com " 
		<< campeao->getPulos() << " pulos, alcançando uma distância de "
		<< campeao->getDistancia() << endl;

	cout << campeao->getId() << " é o cara!" << endl;
	return 0;
}



