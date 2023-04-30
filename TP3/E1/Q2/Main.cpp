#include "Poly2deg.cpp"

int main()
{
	Complexe c1,c2;
	Poly2deg p1(1,1,5);
	
	p1.Affiche();
	p1.Solution(c1,c2);
	cout<<"x1 = ";
	c1.Affiche();
	cout<<"x2 = ";
	c2.Affiche();
	
	return 0;
}