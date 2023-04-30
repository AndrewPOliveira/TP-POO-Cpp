#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
class Point {
    public :
        Point(double abs=0.0, double ord=0.0){_x=abs ; _y=ord ;}
        void affiche(){std::cout<<"coordonnees "<<_x <<" "<<_y<<"\n" ;}
        void deplace (double dx, double dy){_x=_x+dx ;_y=_y+dy ;}
    private :
        double _x, _y ;
};

#endif