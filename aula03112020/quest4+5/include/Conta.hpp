#pragma once

#include "Movimentacao.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum TipoConta {
    Normal,
    Especial
};

class Conta
{
    public:
        Conta();
        Conta(string agencia, string numero, double saldo, TipoConta tipo);
        virtual ~Conta();

        string getAgencia() const;
        string getNumero() const;
        TipoConta getTipo() const;
        double getSaldo() const;
        void extratoConta();
        virtual bool Operacao(Movimentacao* transacao) {return false;}
        bool operator==(const Conta& conta2) const;

    protected:
        string agencia;
        string numero;
        double saldo;
        TipoConta tipo;
        vector<Movimentacao*> extrato;

};