#ifndef COORDONNEE_HPP
#define COORDONNEE_HPP

class Coordonnee
{
    public:
        Coordonnee(int x=0,int y=0):_x(x),_y(y){}
        ~Coordonnee(){}
        void deplace(const int dx,const int dy){_x+=dx;_y+=dy;}
        int get_x() const {return _x;}
        int get_y() const {return _y;}
    private:
        int _x, _y;
};

#endif