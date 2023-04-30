#include "Vecteur3d.h"


Vecteur3d::Vecteur3d()//constructeur default
{
	cout<<"je suis dans le constructeur default"<<endl;
	_x =_y =_z = 0; //initialisation des variables avec 0
}
Vecteur3d::Vecteur3d(double _x,double _y,double _z) // constructeur avec parametres
{
	this -> _x = _x; //atribuition des valeurs
	this -> _y = _y;
	this -> _z = _z;
	
	cout<<"je suis dans le constructeur avec parametre"<<endl;
}

void Vecteur3d::affiche() const //fonction qui affiche les valeurs
{
	cout<<"x = "<<_x<<" , y = "<<_y<<" , z = "<<_z<<endl;
}

Vecteur3d::~Vecteur3d() //destructeur
{
	cout<<"je suis dans le destructeur"<<endl;
}