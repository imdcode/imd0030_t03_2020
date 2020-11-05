#include "agencia.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

Agencia::Agencia(string banco, string numero, string nome):
		banco(banco),numero(numero),nome(nome){}

Agencia::~Agencia() {}

string 
Agencia::getBanco() const {
	return this->banco;
}

string 
Agencia::getNumero() const {
	return this->numero;
}

string 
Agencia::getNome() const {
	return this->nome;
}

vector<ContaCorrente*> 
Agencia::getContas() const {
	return this->contas;
}

bool 
Agencia::criarConta() {
	string cc_numero;
	string cc_tipo;
	double cc_limite;

	cout << "Agência: " << this->numero << endl;
	cout << "Numero: ";
	cin >> cc_numero;
	cout << "Tipo (N - normal/E - especial): ";
	cin >> cc_tipo;
	cout << "Limite: ";
	cin >> cc_limite;
	tcTipo cc_tipo_conta = (cc_tipo == "N") ? tcNormal:tcEspecial;

	ContaCorrente* criada = new ContaCorrente(
			this->numero,
			cc_numero,
			0.00,
			cc_tipo_conta,
			cc_limite
		);

	return adicionarConta(criada);
}

bool Agencia::adicionarConta(ContaCorrente* nova) {
	this->contas.push_back(nova);
	return true;
}

bool 
Agencia::excluirConta(string numero){
	return true;
}

bool 
Agencia::saque(string numero, double valor){
	return true;
}

bool 
Agencia::deposito(string numero, double valor){
	return true;
}

void 
Agencia::saldo(string numero){}

void 
Agencia::extrato(string numero){}

bool 
Agencia::transferencia(string conta_origem, string conta_destino, 
		double valor){
	return true;
}