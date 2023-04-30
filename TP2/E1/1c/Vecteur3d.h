#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <iostream>
using namespace std;

class Vecteur3d
{
	
	public:
		Vecteur3d(double a=0,double b=0,double c=0):_x(a),_y(b),_z(c){};
		~Vecteur3d();
		void affiche() const;
	private:
		double _x,_y,_z;
	
};

#endif