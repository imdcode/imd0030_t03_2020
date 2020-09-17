#include <iostream>

#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Turma imd0030;
	imd0030.setNome("Linguagem de Programação I");
	imd0030.setId("IMD0030");

	Aluno* maria = new Aluno();
	maria->setNome("Maria Antonieta");
	maria->setCpf("000000002-01");
	maria->setMatricula(5321);
	maria->setEmail("mantonieta@realeza.pt");
	maria->setTelefone("+351 99779-1123");

	imd0030.addAluno(maria);

	Aluno* jaspion = new Aluno();
	jaspion->setNome("Jaspion Tokusatsu");
	jaspion->setCpf("010101010-01");
	jaspion->setMatricula(10101);
	jaspion->setEmail("jaspion@caverna.jp");
	jaspion->setTelefone("90876-6544");

	imd0030.addAluno(jaspion);

	Aluno* lampiao = new Aluno();
	lampiao->setNome("Virgulino Ferreira da Silva");
	lampiao->setCpf("000000012-20");
	lampiao->setMatricula(666);
	lampiao->setEmail("cabra@macho.br");

	imd0030.addAluno(lampiao);

	cout << imd0030.getId() << " - " << imd0030.getCapacidade() 
			<< "/" << CAPACIDADE_MAX << endl;
	imd0030.listarAlunos();

	imd0030.removePeloNome("Faustão");
	imd0030.removePeloCpf("010101010-01");


	cout << imd0030.getId() << " - " << imd0030.getCapacidade() 
			<< "/" << CAPACIDADE_MAX << endl;
	imd0030.listarAlunos();


	return 0;
}