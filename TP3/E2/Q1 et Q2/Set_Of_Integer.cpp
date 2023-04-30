#include "Set_Of_Integer.hpp"

void Set_Of_Integer::Ajouter(int a)
{
	if(_nb_elem < _taille)
	{
		_table[_nb_elem] = a;
		_nb_elem++;
	}
	else
		cout<<"Pas d'espace!"<<endl;
}
int Set_Of_Integer::Nb_elements() const
{
	return _nb_elem;
}
int Set_Of_Integer::Chercher_Num(int num) const //return 1 si il fait partie et 0 sinon.
{
	int i = 0;
	while(i<_nb_elem)
	{
		if(_table[i] == num)
			return 1;
		else
			i++;
	}
	return 0;
}
int Set_Of_Integer::Return_Num(int pos) const //return le numero d'une position donnee du tableau
{
	if(pos<_nb_elem)
		return _table[pos];
	return -1;
}