#include "Complexe.cpp"

int main()
{
	Complexe c1(1,2), c2(c1),c3;
	c1.Affiche();
	c2.Affiche();
	c3 = c1.Add(c2);
	c3.Affiche();
	c3 = c1.Soustraire(c3);
	c3.Affiche();
	c3 = c1.Mult(c2);
	c3.Affiche();
	
	return 0;
}