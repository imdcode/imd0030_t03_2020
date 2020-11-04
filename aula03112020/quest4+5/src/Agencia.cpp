#include "Agencia.hpp"

Agencia::Agencia(string nome, string numero, string banco):
                    nome(nome), numero(numero), banco(banco){}

Agencia::~Agencia(){}

string Agencia::getNumero() const {
    return this->numero;
}

string Agencia::getNome() const {
    return this->nome;
}

string Agencia::getBanco() const {
    return this->banco;
}

int Agencia::getContas() const {
    return this->contas.size();
}

bool Agencia::adicionarConta(Conta* nova) {
    this->contas.push_back(nova);
    return true;
}

bool Agencia::excluirConta(Conta* exc) {
    int index = 0;
    auto pos = this->contas.begin();

    for (const auto& conta : this->contas) {
		if(conta == exc) {
            this->contas.erase(pos + index);
            cout << "Conta removida" << endl;
        }
        index++;
	}
    return true;
}

bool Agencia::transferencia(Conta* destino, Conta* origem, double val) {
    if(origem->Operacao(new Movimentacao("Transferencia", 
    val, Debito))) {
        destino->Operacao(new Movimentacao("Transferencia", 
    val, Credito));
        cout << "Transferência concluída com sucesso" << endl;
    } else {
        cout << "Saldo insuficiente para conta origem" << endl;
        return false;
    }
    return true;
}


void Agencia::listarContas() const {
    cout << setfill(' ') << setw(15) << "Agencia" << " | " 
        << setfill('.') << setw(5) << "Numero" << " | "
        << setfill(' ') << setw(5) << "Saldo" << " | "<< endl;
    for (auto& conta: this->contas)
	{
		cout << setfill(' ') << setw(15) << conta->getAgencia() << " | " 
        << setfill(' ') << setw(5) << conta->getNumero() << " | "
        << setfill(' ') << setw(3) << conta->getSaldo() << " | " << endl;
	}
}