#pragma once

#include "contacorrente.hpp"

#include <string>
#include <vector>

using std::vector;
using std::string;

class Agencia {
public:
	Agencia(string banco, string numero, string nome);
	~Agencia();
	string getBanco() const;
	string getNumero() const;
	string getNome() const;
	vector<ContaCorrente*> getContas() const;
	bool criarConta();
	bool adicionarConta(ContaCorrente* nova);
	bool excluirConta(string numero);
	bool saque(string numero, double valor);
	bool deposito(string numero, double valor);
	void saldo(string numero);
	void extrato(string numero);
	bool transferencia(string conta_origem, string conta_destino, 
			double valor);
private:
	string banco;
	string numero;
	string nome;
	vector<ContaCorrente*> contas;
};