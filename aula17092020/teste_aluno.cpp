#include <iostream>
#include "aluno.hpp"

using namespace std;

int main()
{
	Aluno novo("Paulo Paulada","123456789-11",
			12345,"fortao@epr.com.br","(84) 99779-1123");

	Aluno* outro = new Aluno("Marilia Mendonça","987623455-67",
			54678,"sofrencia@choro.com.br",novo.getTelefone());

	cout << "Temos um novo aluno: " << novo.getNome() 
			<< " tel: " << novo.getTelefone() << endl;
	cout << "Temos mais uma aluna: " << outro->getNome() 
			<< " tel: " << outro->getTelefone() << endl;
			
	delete outro;

	return 0;
}