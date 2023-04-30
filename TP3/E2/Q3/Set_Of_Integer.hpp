#ifndef SET_OF_INTEGER_HPP
#define SET_OF_INTEGER_HPP

#include <iostream>
using namespace std;

struct Noeud
{
	int donnee;
	Noeud* prochain;
	
	Noeud(int donnee)
	{
		this -> donnee = donnee;
		this -> prochain = NULL;
	}
		
};

class Set_Of_Integer
{
	public:
		Set_Of_Integer(){_nb_elem=0; this->_sommet=NULL;};
		~Set_Of_Integer(){};
		void Ajouter(int);
		int Nb_elements() const;
		int Chercher_Num(int) const; //return 1 si il fait partie et 0 sinon.
	private:
		int _nb_elem;
		Noeud* _sommet;
};

#endif