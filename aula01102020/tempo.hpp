#ifndef _TEMPO_
#define _TEMPO_

#include <iostream>

using namespace std;

class Tempo { 
private:
	short horas; 
	short minutos; 
	short segundos;
public: 
	Tempo();
	Tempo(short h, short m, short s);
	short getHoras();
	short getMinutos();
	short getSegundos();
	Tempo somar(Tempo t);

	Tempo operator+ (Tempo &t);
	friend ostream& operator<< (ostream &o, Tempo t);
	friend istream& operator>> (istream &i, Tempo &t);
};

#endif