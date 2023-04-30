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

bool Vecteur3d::operator==(Vecteur3d &v1)
{
    if((_x==v1._x)&&(_y==v1._y)&&(_z==v1._z))
        return true;
    else
        return false;
}
bool Vecteur3d::operator!=(Vecteur3d &v1)
{
    if((_x!=v1._x)||(_y!=v1._y)||(_z!=v1._z))
        return true;
    else
        return false;
}
Vecteur3d Vecteur3d::operator+(const Vecteur3d &v1)
{
    return Vecteur3d(_x+v1._x,_y+v1._y,_z+v1._z);
}
double Vecteur3d::operator*(const Vecteur3d &v1)
{
    return (_x*v1._x+_y*v1._y+_z*v1._z);
}
ostream &operator<<(ostream &os, const Vecteur3d &v1)
{
    return os<<"("<<v1._x<<","<<v1._y<<","<<v1._z<<")"<<endl;
}
istream& operator>>(istream& is, Vecteur3d& v1)
{
    return is>>v1._x>>v1._y>>v1._z;
}