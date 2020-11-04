#include "Movimentacao.hpp"

Movimentacao::Movimentacao(string descricao, double valor, TipoOp tipo):
                                descricao(descricao), valor(valor), tipo(tipo){}


Movimentacao::~Movimentacao(){}


string Movimentacao::getDescricao() const{
	return this->descricao;
}

double Movimentacao::getValor() const{
	return this->valor;
}

TipoOp Movimentacao::getTipo() const{
	return this->tipo;
}

ostream& operator<< (ostream &o, Movimentacao const m) {
    string strtipo = "Credito";
    if(m.tipo == Debito)
        strtipo = "Débito";
    o << "Movimentação (Desc/Valor/Tipo): " << 
        m.descricao << "\t" << m.valor << "\t" << strtipo << endl;
    return o;
}