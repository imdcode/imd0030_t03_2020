#pragma once

#include <string>
#include <ostream>

using std::string;
using std::ostream;

enum tipoMovimentacao
{
	tmDebito, 
	tmCredito 
};

class Movimentacao {
public:
	Movimentacao(string descricao, double valor, tipoMovimentacao tipo);
	~Movimentacao();
	string getDescricao() const;
	double getValor() const;
	tipoMovimentacao getTipo() const;
private:
	string descricao;
	double valor;
	tipoMovimentacao tipo;
	friend ostream& operator<< (ostream& o, Movimentacao& mov);
};

