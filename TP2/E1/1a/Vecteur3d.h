#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <iostream>
using namespace std;

class Vecteur3d
{
	
	public:
		Vecteur3d();
		Vecteur3d(double,double,double);
		~Vecteur3d();
		void affiche() const;
	private:
		double _x,_y,_z;
	
};

#endif