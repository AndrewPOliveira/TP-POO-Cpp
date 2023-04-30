#include "Vecteur3d.h"


void Vecteur3d::affiche() const //fonction qui affiche les valeurs
{
	cout<<"x = "<<_x<<" , y = "<<_y<<" , z = "<<_z<<endl;
}

Vecteur3d::~Vecteur3d() //destructeur
{
	cout<<"je suis dans le destructeur"<<endl;
}