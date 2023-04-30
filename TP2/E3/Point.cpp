#include "Point.h"

void Point::translate(double a, double b) //il fait la translation du point
{
	_x += a;
	_y += b;
}
double Point::abscisse() // il retourne la valeur de _x
{
	return _x;
}
double Point::ordonnee()//il retourne la valeur de _y
{
	return _y;
}
double Point::rho()//il retourne la valeur de rho
{
	return sqrt(_x*_x + _y*_y);
}
double Point::teta() //il retourne la valeur de teta en degrés
{
	return (atan(_y/_x)*180/3.141592);
}
void Point::rotation(double rot) //il fait une rotation en rad 
{
	double teta_new = rot + atan(_y/_x);
	double rho = sqrt(_x*_x + _y*_y);
	_x = rho*cos(teta_new);
	_y = rho*sin(teta_new);
}
