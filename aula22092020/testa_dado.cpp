#include <iostream> 
#include <cstdlib>

#include "dado.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Dado meu_dado;
	for (int i=0;i<atoi(argv[1]);++i) {
		cout << meu_dado.jogar() << endl;
	}
	return 0; 
}