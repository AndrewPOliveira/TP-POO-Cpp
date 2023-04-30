#include "Complexe.hpp"

Complexe::Complexe(double a,double b):_reel(a),_imag(b){}

Complexe::Complexe(const Complexe &copie)//constructeur de copie
{
	_reel = copie._reel;//atribuition des valeurs
	_imag = copie._imag;
}

void Complexe::Affiche() const
{
	if(_imag>=0)
		cout<<_reel<<" + "<<_imag<<"j"<<endl;
	else
		cout<<_reel<<" "<<_imag<<"j"<<endl;
}
void Complexe::Assign(double re,double im)
{
	_reel = re;
	_imag = im;
}
double Complexe::Reel()
{
	return _reel;
}
double Complexe::Imag()
{
	return _imag;
}
Complexe Complexe::Add(const Complexe c2)
{
	Complexe sum(_reel+c2._reel,_imag+c2._imag);
	return sum;
}
Complexe Complexe::Soustraire(const Complexe c2)
{
	Complexe sous(_reel-c2._reel,_imag-c2._imag);
	return sous;
}
Complexe Complexe::Mult(const Complexe c2)
{
	Complexe mult(_reel*c2._reel-_imag*c2._imag,_reel*c2._imag+_imag*c2._reel);
	return mult;
}
bool Complexe::operator==(Complexe &c1)
{
	if((c1.Reel()==_reel)&&(c1.Imag()==_imag))
		return true;
	else
		return false;
}
bool Complexe::operator!=(Complexe &c1)
{
	if(c1.Reel()!=_reel&&c1.Imag()!=_imag)
		return true;
	else
		return false;
}
bool Complexe::operator!()
{
	if((!_reel)&&(!_imag))
		return true;
	else
		return false;
}	
Complexe Complexe::operator=(const Complexe &c1)
{
	this-> _reel = c1._reel;
	this-> _imag = c1._imag;
	return *this;
}
Complexe Complexe::operator+(const Complexe &c1)
{
	return Complexe(c1._reel+_reel,c1._imag+_imag);
}
Complexe Complexe::operator-(const Complexe &c1)
{
	return Complexe(_reel-c1._reel,_imag-c1._imag);
}
Complexe Complexe::operator*(const Complexe &c1)
{
	return Complexe(c1._reel*_reel-c1._imag*_imag,c1._reel*_imag+c1._imag*_reel);
}
ostream &operator<<(ostream &os,const Complexe &c1)
{
	if(c1._imag<0)
		return os<<c1._reel<<c1._imag<<"j"<<endl;
	else
		return os<<c1._reel<<"+"<<c1._imag<<"j"<<endl;
}
istream& operator>>(istream& is, Complexe& c1)
{
	return is>>c1._reel>>c1._imag;
}