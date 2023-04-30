#ifndef POLY2DEG_HPP
#define POLY2DEG_HPP

#include <iostream>
#include <math.h>
#include "Complexe.cpp"
using namespace std;

class Poly2deg
{
	public:
		Poly2deg(double=0,double=0, double=0);
		Poly2deg(const Poly2deg &copie);
		~Poly2deg(){};
		void Assign(double,double,double);
		void Affiche() const;
		void Solution(Complexe&, Complexe&) const;
		
	private:
		double _a,_b,_c;
};

#endif