#include "Liste.hpp"

Liste::Liste() {
    _debut = nullptr; //la liste commencee vide
}

Liste::~Liste() {
    element* act = _debut;
    while (act != nullptr) //il faut retirer tous les elements
    {
        element* t = act;
        act = act->suivant;
        delete t;
    }
}

void Liste::ajoute(void *contenu) 
{
    element* new_element = new element;
    new_element->contenu = contenu;
    new_element->suivant = _debut;
    _debut = new_element;
}

void* Liste::premier() 
{
    if (_debut == nullptr) //si il n'y a rien
        return nullptr;
    return _debut->contenu; //si il y a un ou plus elements
}
void* Liste::prochain()
{
    element* new_element = _debut;
    if (new_element == nullptr) //si il n'y a rien
        return nullptr;
    _debut = new_element->suivant;
    return new_element->contenu; //si il y a un ou plus elements
}
int Liste::fini()
{
    if(_debut == nullptr)
        return 1;
    return 0;
}