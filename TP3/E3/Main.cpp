#include "Vecteur3d.hpp"
#include "Matrice.hpp"

int main()
{
	Vecteur3d v1(1,2,3);
	double mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	Matrice m1(mat);
	Vecteur3d v2(produit(v1,m1));
	v2.affiche();
	
	return 0;
}