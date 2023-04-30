#ifndef COMPLEXE_HPP
#define COMPLEXE_HPP

#include <iostream>
using namespace std;

class Complexe
{
	public:
		Complexe(double=0,double=0);
		Complexe(const Complexe &copie);
		~Complexe(){};
		void Affiche() const;
		void Assign(double,double);
		double Reel();
		double Imag();
		Complexe Add(const Complexe);
		Complexe Soustraire(const Complexe);
		Complexe Mult(const Complexe);		
		
	private:
		double _reel, _imag;
	
};

#endif