#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente() {}

ContaCorrente::ContaCorrente(string agencia, string numero, double saldo,
                                TipoConta tipo, double limite):
                                Conta(agencia, numero, saldo, tipo),
                                limite(limite){}
                    
ContaCorrente::~ContaCorrente(){}

double ContaCorrente::getLimite() const {
    return this->limite;
}

bool ContaCorrente::Operacao(Movimentacao* transacao) {
    int val = transacao->getValor();
    switch(transacao->getTipo())
    {
        case Credito:
            this->saldo += val;
            this->extrato.push_back(transacao);
            break;
        case Debito: //S: 200, L:300, D:700
            if( (this->saldo + this->limite) < val){
                cout << "Limite atingido, operação recusada" << endl;
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