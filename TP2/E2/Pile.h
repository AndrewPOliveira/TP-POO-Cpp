#ifndef PILE_H
#define PILE_H

#include <iostream>
using namespace std;

class Pile
{
	public:
		Pile(int max):_max(max){_nb_elem=0; _etat=vide; _table=new int[max]; _nb_obj_pile++;}//increment de 1 a chaque objet pile cree
		~Pile(){ delete [] _table;}
		void empiler(int);
		int depiler();
		void afficher();
		int nb_elements();
		int obj_pile(); 
	private:
		const int _max;
		int * _table;
		int _nb_elem ;
		enum pile_etat {ok, plein, vide} ;
		pile_etat _etat ;
		static int _nb_obj_pile; //variable qui contient la quantite d'objets pile crees
} ;

#endif