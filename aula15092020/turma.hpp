#ifndef _TURMA_
#define _TURMA_

#include <iostream>

#include "Aluno.hpp"

#define CAPACIDADE_MAX 10

using namespace std;

class Turma {
	string nome;
	string id;
	Aluno* alunos[CAPACIDADE_MAX];
	int capacidade = 0;
public:
	string getNome();
	void setNome(string nome);
	string getId();
	void setId(string id);
	void listarAlunos();
	void addAluno(Aluno* novo);
	void remAluno(string nome);
};

#endif