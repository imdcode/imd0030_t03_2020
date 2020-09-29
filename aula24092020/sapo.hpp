#ifndef _SAPO_
#define _SAPO_

#include<iostream>
#include<random>

using namespace std;

//#define MAX_PULO 10;

class Sapo {
private:
	string id;
	int max_pulo;
	int distancia;
	int pulos;
	std::random_device rd; 
	std::default_random_engine gen; 
	std::uniform_int_distribution<> dis;
public:
	//static int max_pulo;
	Sapo(string id, int max_pulo);
	string getId();
	int getMaxPulo();
	int getDistancia();
	int getPulos();
	int pular();
};

#endif