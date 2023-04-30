#include "Set_Of_Integer.hpp"

void Set_Of_Integer::Ajouter(int a)
{
	Noeud* newNoeud = new Noeud(a);

   if (this->_sommet == NULL)
   {
   		this->_sommet = newNoeud;
   		_nb_elem++;
   }
   else{
		Noeud* actuel = this->_sommet;
    	while (actuel->prochain != NULL)
			actuel = actuel->prochain;
		actuel->prochain = newNoeud;
	}
}
int Set_Of_Integer::Nb_elements() const
{
	return _nb_elem;
}
int Set_Of_Integer::Chercher_Num(int num) const //return 1 si il fait partie et 0 sinon.
{
	Noeud* limite = _sommet;
	
    while (limite != NULL) {
        if (limite->donnee == num)
            return 1;
        limite = limite->prochain;
    }
	return 0;
}