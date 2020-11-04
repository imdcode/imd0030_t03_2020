#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Conta.hpp"

class ContaCorrente : public Conta {
    public:
        ContaCorrente();
        ContaCorrente(string agencia, string numero, double saldo,
                        TipoConta tipo, double limite);
        ~ContaCorrente();

        double getLimite() const;
        bool Operacao(Movimentacao* transacao);

    private:
        double limite;
};