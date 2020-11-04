#pragma once

#include <string>
#include <iostream>

using namespace std;

enum TipoOp {
    Credito,
    Debito
};

class Movimentacao
{
    public:
        Movimentacao(string descricao, double valor, TipoOp tipo);
        ~Movimentacao();
        string getDescricao() const;
        double getValor() const;
        TipoOp getTipo() const;

        friend ostream& operator<< (ostream &o, Movimentacao const m);
    private:
        string descricao;
        double valor;
        TipoOp tipo;
        
};