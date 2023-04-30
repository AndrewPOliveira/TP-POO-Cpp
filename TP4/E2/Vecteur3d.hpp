#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

#include <iostream>
using namespace std;

class Vecteur3d
{
	public:
		Vecteur3d(double=0,double=0,double=0);
		Vecteur3d(const Vecteur3d &copie);
		~Vecteur3d(){};
		void affiche() const;
		
		bool operator==(Vecteur3d &v1);
		bool operator!=(Vecteur3d &v1);
		
		Vecteur3d operator+(const Vecteur3d &v1);
		double operator*(const Vecteur3d &v1);
		
		friend ostream &operator<<(ostream &os, const Vecteur3d &v1);
		friend istream& operator>>(istream& is, Vecteur3d& v1);
	private:
		double _x,_y,_z;
};

#endif