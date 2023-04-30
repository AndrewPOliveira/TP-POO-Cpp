#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include "Vecteur3d.hpp"
using namespace std;

class Vecteur3d;

class Matrice
{
	public:
		Matrice();
		Matrice(double[][3]);
		~Matrice(){delete [] _mat;};
		void Affiche() const;
	private:
		double **_mat;

	friend Vecteur3d produit(const Vecteur3d &v1,const Matrice &m1); //fonction amie de la classe Vecteur3d
	
};

#endif