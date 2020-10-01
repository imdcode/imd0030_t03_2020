#include "tempo.hpp"

Tempo::Tempo(short h, short m, short s):horas(h),
		minutos(m),segundos(s){}
short 
Tempo::getHoras(){
	return this->horas;
}
short 
Tempo::getMinutos(){
	return this->minutos;
}
short 
Tempo::getSegundos(){
	return this->segundos;
}