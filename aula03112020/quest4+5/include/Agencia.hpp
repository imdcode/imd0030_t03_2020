#pragma once

#include "Conta.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Agencia 
{
    public:
        Agencia(string nome, string numero, string banco);
        ~Agencia();
        string getNome() const;
        string getNumero() const;
        string getBanco() const;
        int getContas() const;

        bool adicionarConta(Conta* nova);
        bool excluirConta(Conta* exc);
        bool transferencia(Conta* destino, Conta* origem, double val);
        void listarContas() const;
        
    private:
        string nome;
        string numero;
        string banco;

        vector<Conta*> contas;
};