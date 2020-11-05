#include "agencia.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	ContaCorrente c1("1234-2","1234-5",0.00,tcNormal, 400.00);

	Movimentacao* mov = new Movimentacao("Pagamento da Disney+",272.30,tmDebito);
	cout << (*mov) << endl;
	Movimentacao* mov1 = new Movimentacao("Recebimento da Bolsa",600.00,tmCredito);
	cout << (*mov1) << endl;
	Movimentacao* mov3 = new Movimentacao("Pagamento do Condomínio",760.00,tmDebito);
	cout << (*mov3) << endl;

	cout << c1 << endl;

	if (!c1.processarMovimentacao(mov)) {
		cout << "Operação inválida! " << (*mov) << endl;
	}
	cout << c1 << endl;
	if (!c1.processarMovimentacao(mov1)) {
		cout << "Operação inválida! " << (*mov1) << endl;
	}
	cout << c1 << endl;

	if (!c1.processarMovimentacao(mov3)) {
		cout << "Operação inválida! " << (*mov3) << endl;
	}
	cout << c1 << endl;

	return 0;
}