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
		
		bool operator==(Complexe &c1);
		bool operator!=(Complexe &c1);
		bool operator!();
		
		Complexe operator=(const Complexe &c1);
		
		Complexe operator+(const Complexe &c1);
		Complexe operator-(const Complexe &c1);
		Complexe operator*(const Complexe &c1);
		
		friend ostream &operator<<(ostream &os, const Complexe &c1);
		friend istream& operator>>(istream& is, Complexe& c1);
		
	private:
		double _reel, _imag;
	
};

#endif