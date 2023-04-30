#ifndef SET_OF_INTEGER_HPP
#define SET_OF_INTEGER_HPP

#include <iostream>
using namespace std;

class Set_Of_Integer
{
	public:
		Set_Of_Integer(int taille = 10):_taille(taille){_table=new int[taille]; _nb_elem=0;};
		~Set_Of_Integer(){delete [] _table;};
		void Ajouter(int);
		int Nb_elements() const;
		int Chercher_Num(int) const; //return 1 si il fait partie et 0 sinon.
		int Return_Num(int) const; //return le numero d'une position donnee du tableau
	private:
		const int _taille;
		int * _table;
		int _nb_elem;
};

#endif