#ifndef COMPLEXE_H
#define COMPLEXE_H

#include <iostream>
#include <math.h>
using namespace std;

class Complexe
{
	public:
		Complexe(double a=0,double b=0):_reel(a),_imag(b){};
		~Complexe(){};
		void Affiche();
		double Reel();
		double Imag();
		Complexe Add(Complexe);
		Complexe Soustraire(Complexe);
		Complexe Mult(Complexe);		
		
	private:
		double _reel, _imag;
	
};

#endif