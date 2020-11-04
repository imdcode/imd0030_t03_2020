#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Conta.hpp"

class ContaPoupanca : public Conta {
    public:
        ContaPoupanca();
        ContaPoupanca(string agencia, string numero, double saldo,
                        TipoConta tipo, double taxa);
        ~ContaPoupanca();

        double getTaxa() const;
        bool Operacao(Movimentacao* transacao);

    private:
        double taxa;

};