#ifndef LISTE_HPP
#define LISTE_HPP

struct element {element *suivant; void *contenu;} ;
class Liste {
    public:
        Liste();
        ~Liste();
        void ajoute(void *);
        void *premier();
        void *prochain();
        int fini();
    private :
        element *_debut;
};

#endif