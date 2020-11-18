#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
	int liczbaZagl = 0;
  unsigned int towary = 0;

	if(towar == 0){
	return 0;
	}
		Stocznia stocznia{};
	
	while(towary < towar){
	Statek* s1 = stocznia();
	unsigned int towar = s1->transportuj();
	towary += towar;
	if(dynamic_cast<Zaglowiec*>(s1)){
		liczbaZagl++;
	}
	}
    return liczbaZagl;
}