#ifndef _ALUNO_
#define _ALUNO_ 

#include <iostream>

using namespace std;

class Aluno {
	string nome;
	string cpf;
	int matricula;
	string email;
	string telefone;

public:
	Aluno ();
	Aluno (string nome, string cpf, int matricula, 
			string email, string telefone);
	~Aluno ();
	string getNome();
	void setNome(string nome);
	string getCpf();
	void setCpf(string cpf);
	int getMatricula();
	void setMatricula(int matricula);
	string getEmail();
	void setEmail(string email);
	string getTelefone();
	void setTelefone(string telefone);
};

#endif