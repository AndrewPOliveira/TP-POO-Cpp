#include "Vecteur3d.cpp"

int main()
{
	Vecteur3d v1;//Simulation constructeur defaut
	Vecteur3d v2(0,2,5);//Simulation constructeur avec parametres
	v1.affiche();//Affichage des valeurs
	v2.affiche();
	
	return 0;
}