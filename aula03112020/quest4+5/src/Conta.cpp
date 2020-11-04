#include "Conta.hpp"

Conta::Conta(){}

Conta::Conta(string agencia, string numero, double saldo,
                    TipoConta tipo):
                    agencia(agencia), numero(numero), saldo(saldo),
                    tipo(tipo){}


Conta::~Conta(){}

string Conta::getAgencia() const {
    return this->agencia;
}

string Conta::getNumero() const {
    return this->numero;
}

double Conta::getSaldo() const {
    return this->saldo;
}

void Conta::extratoConta() {
    for (auto& transacao: this->extrato)
	{
		cout << *transacao;
	}
}

bool Conta::operator==(const Conta& conta2) const{
    cout << this->agencia << endl;

    return ( this->agencia == conta2.getAgencia() ) &&
            ( this->numero == conta2.getNumero() );
}