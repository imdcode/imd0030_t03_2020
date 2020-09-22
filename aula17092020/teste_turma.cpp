#include <iostream>

#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Turma imd0030("Linguagem de Programação I","IMD0030");

	Aluno* maria = new Aluno("Maria Antonieta","000000002-01",
						5321,"mantonieta@realeza.pt","+351 99779-1123");

	imd0030.addAluno(maria);

	Aluno* jaspion = new Aluno("Jaspion Tokusatsu","010101010-01",
						10101,"jaspion@caverna.jp","90876-6544");

	imd0030.addAluno(jaspion);

	Aluno* lampiao = new Aluno("Virgulino Ferreira da Silva","000000012-20",
						666,"cabra@macho.br","");

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