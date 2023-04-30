#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point {
    public :
        Point (double abs=0.0, double ord=0.0) {_x=abs ; _y=ord ;}
        void affiche() {std::cout<<"(" <<_x <<","<<_y<<")\n" ;}
    private :
        double _x, _y ;
};

#endif