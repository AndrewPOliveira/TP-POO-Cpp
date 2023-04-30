#include "Point.cpp"

int main()
{
	Point p1(1, 10); //on a cree un point
	cout<<"("<<p1.abscisse()<<","<<p1.ordonnee()<<")"<<endl;
	cout<<"rho = "<<p1.rho()<<", teta = "<<p1.teta()<<endl<<endl;
	p1.translate(2,3);//on a fait la translation du point
	cout<<"("<<p1.abscisse()<<","<<p1.ordonnee()<<")"<<endl;
	cout<<"rho = "<<p1.rho()<<", teta = "<<p1.teta()<<endl<<endl;
	p1.rotation(3.141592/2); //rotation de 90° ou pi/2
	cout<<"("<<p1.abscisse()<<","<<p1.ordonnee()<<")"<<endl;
	cout<<"rho = "<<p1.rho()<<", teta = "<<p1.teta()<<endl<<endl;
	
	return 0;
}