#include "Poly2deg.hpp"

Poly2deg::Poly2deg(double a,double b, double c):_a(a),_b(b),_c(c){}

Poly2deg::Poly2deg(const Poly2deg &copie)
{
	_a = copie._a;
	_b = copie._b;
	_c = copie._c;
}
void Poly2deg::Assign(double a,double b,double c)
{
	_a = a;
	_b = b;
	_c = c;
}
void Poly2deg::Affiche() const
{
	cout<<"a = "<<_a<<"; b = "<<_b<<"; c = "<<_c<<";"<<endl;
}
void Poly2deg::Solution(Complexe &c1, Complexe &c2) const
{
	double delta = _b*_b-4*_a*_c;
	if(delta>=0)
	{
		c1.Assign((-_b+sqrt(delta))/(2*_a),0.0);
		c2.Assign((-_b-sqrt(delta))/(2*_a),0.0);
	}
	else
	{
		c1.Assign(-_b/(2*_a),sqrt(-delta)/(2*_a));
		c2.Assign(-_b/(2*_a),-sqrt(-delta)/(2*_a));
	}
}