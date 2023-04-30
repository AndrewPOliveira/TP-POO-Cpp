#include "Vecteur3d.hpp"

Vecteur3d::Vecteur3d(double a,double b,double c):_x(a),_y(b),_z(c){};//liste d'initialization

Vecteur3d::Vecteur3d(const Vecteur3d &copie) //constructeur de copie
{
	_x = copie._x; //atribuition des valeurs
	_y = copie._y;
	_z = copie._z;
}

void Vecteur3d::affiche() const //fonction qui affiche les valeurs
{
	cout<<"x = "<<_x<<" , y = "<<_y<<" , z = "<<_z<<endl;
}
Vecteur3d produit(const Vecteur3d &v1,const Matrice &m1)
{
	Vecteur3d v2(v1._x*m1._mat[0][0]+v1._y*m1._mat[0][1]+v1._z*m1._mat[0][2],v1._x*m1._mat[1][0]+v1._y*m1._mat[1][1]+v1._z*m1._mat[1][2],v1._x*m1._mat[2][0]+v1._y*m1._mat[2][1]+v1._z*m1._mat[2][2]);
	return v2;
}