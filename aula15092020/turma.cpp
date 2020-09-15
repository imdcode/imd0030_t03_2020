#include <iostream>

#include "Turma.hpp"

using namespace std;

string 
Turma::getNome(){
	return this->nome;
}
void 
Turma::setNome(string nome){
	this->nome = nome;
}
string 
Turma::getId(){
	return this->id;
}
void 
Turma::setId(string id){
	this->id = id;
}
void listarAlunos(){
	for (int i = 0; i < this->capacidade; ++i)
	{
		cout << alunos[i].getNome() << endl;
	}
}
void addAluno(Aluno* novo){
	if (capacidade < CAPACIDADE_MAX) {
		alunos[capacidade++] = novo;
	}
}
void remAluno(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->capacidade; ++i)
	{
		if (alunos[i].getNome == nome) {
			// É o aluno a ser removido da turma
			Aluno* tmp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou==true) {
		delete alunos[this->capacidade-1];
		this->capacidade--;
	}
}