#include "Vecteur3d.h"

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

Vecteur3d::~Vecteur3d() //destructeur
{
	cout<<"je suis dans le destructeur"<<endl;
}