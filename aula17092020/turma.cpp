#include <iostream>

#include "turma.hpp"

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
void 
Turma::listarAlunos(){
	for (int i = 0; i < this->capacidade; ++i)
	{
		cout << alunos[i]->getNome() << endl;
	}
}
void 
Turma::addAluno(Aluno* novo){
	if (capacidade < CAPACIDADE_MAX) {
		alunos[capacidade++] = novo;
	}
}
void 
Turma::removePeloNome(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->capacidade; ++i)
	{
		if (this->alunos[i]->getNome() == nome) {
			// É o aluno a ser removido da turma
			Aluno* tmp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou==true) {
		delete alunos[this->capacidade];
		this->capacidade--;
	}
}
void 
Turma::removePeloCpf(string cpf){
	bool encontrou = false;
	for (int i = 0; i < this->capacidade; ++i)
	{
		if (this->alunos[i]->getCpf() == cpf) {
			// É o aluno a ser removido da turma
			Aluno* tmp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou==true) {
		delete alunos[this->capacidade];
		this->capacidade--;
	}
}
void 
Turma::removePeloEmail(string email){
	bool encontrou = false;
	for (int i = 0; i < this->capacidade; ++i)
	{
		if (this->alunos[i]->getEmail() == email) {
			// É o aluno a ser removido da turma
			Aluno* tmp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou==true) {
		delete alunos[this->capacidade];
		this->capacidade--;
	}
}
int 
Turma::getCapacidade(){
	return this->capacidade;
}