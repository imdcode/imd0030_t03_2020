#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca() {}

ContaPoupanca::ContaPoupanca(string agencia, string numero, double saldo,
                                TipoConta tipo, double taxa):
                                Conta(agencia, numero, saldo, tipo),
                                taxa(taxa){}
                    
ContaPoupanca::~ContaPoupanca(){}

double ContaPoupanca::getTaxa() const {
    return this->taxa;
}

bool ContaPoupanca::Operacao(Movimentacao* transacao) {
    int val = transacao->getValor();
    switch(transacao->getTipo())
    {
        case Credito:
            this->saldo += val;
            this->extrato.push_back(transacao);
            break;
        case Debito:
            if( (this->saldo - val) < 0 ) {
                cout << "Saldo insuficiente!" << endl;
                return false;
            }
            this->saldo -= val;
            this->extrato.push_back(transacao);
            break;
        default:
            break;
    }

    return true;
}