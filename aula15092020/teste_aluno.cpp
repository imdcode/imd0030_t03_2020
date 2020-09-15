#include <iostream>
#include "Aluno.hpp"

using namespace std;

int main()
{
	Aluno novo;
	novo.setNome("Paulo Paulada");
	novo.setCpf("123456789-11");
	novo.setMatricula(12345);
	novo.setEmail("fortao@epr.com.br");
	novo.setTelefone("(84) 99779-1123");

	Aluno* outro = new Aluno();
	outro->setNome("Marilia Mendonça");
	outro->setCpf("987623455-67");
	outro->setMatricula(54678);
	outro->setEmail("sofrencia@choro.com.br");
	outro->setTelefone(novo.getTelefone());

	cout << "Temos um novo aluno: " << novo.getNome() 
			<< " tel: " << novo.getTelefone() << endl;
	cout << "Temos mais uma aluna: " << outro->getNome() 
			<< " tel: " << outro->getTelefone() << endl;
	return 0;
}