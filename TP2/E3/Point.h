#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
	public:
		Point(double a = 0,double b = 0){ _x = a; _y = b;};
		~Point(){cout<<endl<<"...!";};
		void translate(double, double);
		double abscisse();
		double ordonnee();
		double rho();
		double teta();
		void rotation(double);
	private:
		double _x, _y;
} ;

#endif