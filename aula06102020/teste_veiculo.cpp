#include "carro.hpp"

int main(int argc, char const *argv[])
{
	Carro c;
	c.setModelo("Toyota Corolla"); 
	c.setPlaca("ABC-1234"); 
	c.setVolumePortaMalas(22.50); 
	c.ligar();
	return 0;
}