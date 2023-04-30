#include "Vecteur3d.h"

Vecteur3d::Vecteur3d(double _x,double _y,double _z)//constructeur
{
	this -> _x = _x; //atribuition des valeurs
	this -> _y = _y;
	this -> _z = _z;
};

void Vecteur3d::affiche() const //fonction qui affiche les valeurs
{
	cout<<"x = "<<_x<<" , y = "<<_y<<" , z = "<<_z<<endl;
}

Vecteur3d::~Vecteur3d() //destructeur
{
	cout<<"je suis dans le destructeur"<<endl;
}