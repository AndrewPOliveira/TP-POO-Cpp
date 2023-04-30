#include "Complexe.hpp"

int main()
{
	Complexe c1(1,2),c2(3,4),c3;
	int a;
	
	c3 = c1+c2;
	cout<<c3;
	c3 = c1*c2;
	cout<<c3;
	c3 = c1-c2;
	cout<<c3;
	cout<<endl<<"new complex: ";
	cin>>c3;
	cout<<c3;
	
	return 0;
}