#include "Agencia.hpp"

#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    Movimentacao *mov = new Movimentacao("pensão", 100.00, Debito);
    
    Agencia *agencia = new Agencia("123", "555", "Baumerindus");
    
    ContaCorrente* cc = new ContaCorrente("corrente", "999999-1", 160.00, Normal, 100.00);

    ContaPoupanca* cp = new ContaPoupanca("poupança", "88894-2", 500.00, Normal, 0.5);

    Movimentacao* mov2 = new Movimentacao("Energia", 100.00, Credito);

    cc->Operacao(mov);
    cp->Operacao(mov2);

    agencia->adicionarConta(cp);
    agencia->adicionarConta(cc);

    cp->extratoConta();
    cc->extratoConta();
    agencia->listarContas();
    
    agencia->transferencia(cp, cc, 200.00);

    agencia->listarContas();

    return 0;
}