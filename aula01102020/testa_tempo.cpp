#include "tempo.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	Tempo r(12, 35, 10); // 12h 30min 0s 
	Tempo t(1, 20, 25); // 1h 20min 0s

	//Tempo s = r.somar(t); // s é o resultado da soma de r e t

	Tempo s = r + t;

	cout << s.getHoras() << ":"
		<< s.getMinutos() << ":"
		<< s.getSegundos() << endl;
	return 0;
}
