#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

#include <iostream>
#include "Matrice.hpp"
using namespace std;

class Matrice;

class Vecteur3d
{
	public:
		Vecteur3d(double=0,double=0,double=0);
		Vecteur3d(const Vecteur3d &copie);
		~Vecteur3d(){};
		void affiche() const;
	private:
		double _x,_y,_z;
	
	friend Vecteur3d produit(const Vecteur3d &v1,const Matrice &m1); //fonction amie de la classe Matrice

};

#endif