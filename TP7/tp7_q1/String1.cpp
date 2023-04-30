#include "String1.hpp"
#include <iostream>
#include <cstring>

using namespace std;

String::String() //constructeur defaut
{
    _long = 0;
    _str = nullptr;
}
String::String(const char* str1, int lg) //constructeur avec parametres
{
    if( strlen(str1)>lg)
        _long = strlen(str1);
    else
        _long = lg;
    _str = new char[_long + 1];//_long + 1 parce qu'il y a '\0' a la fin d'un string
    strcpy(_str,str1);    
}
String::String(const char str1, int lg) //constructeur avec parametres
{
    if(lg<1)
        _long = 1;
    else
        _long = lg;
    _str = new char[_long + 1];//_long + 1 parce qu'il y a '\0' a la fin d'un string
    _str[0] = str1;    
}
String::String(const String& copie) //constructeur de copie
{
    _long = copie._long;
    _str = new char[_long + 1];
    strcpy(_str,copie._str);
}
String::~String() //destructeur
{
    delete [] _str;
}

void String::saisie() //on fait une affectation si _long de s1<1024
{
    char* s1 = new char[1025];
    cin.getline(s1,1024);
    delete [] _str;
    _str = new char[_long + 1];
    strcpy(_str,s1);
}
int String::longueur() const
{
    return _long;
}
char &String::nieme(const int n) const
{
    if(n<_long)
        return _str[n-1];
    else
    {
        cout<<"valeur non valide!"<<endl;
        exit(EXIT_FAILURE);
    }
}
void String::affiche() const
{
    cout<<_str<<endl;
}
void String::concatene(const char* c1) //on libere la memoire de _str et realloc avec la nouvelle longueur
{
    char* newstr;
	int n_long = strlen(c1) + _long;
	newstr = new char[n_long + 1];
	strcpy(newstr, _str);
	strcpy(newstr + _long, c1);
	delete [] _str;
	_str = newstr;
	_long = n_long;
    
}
void String::concatene(const char c)
{
    char c_new[2];
    c_new[0] = c;
    c_new[1] = '\0';
    concatene(c_new);
}
int egal(const String& s1,const String& s2) //on compare chaque caractere et retourne 1 si tous sont egal
{
    if(s2._long == s1._long)
    {
        for(int i = 0; i<=s1._long;i++)
        {
            if(s2._str[i] != s1._str[i])
                return 0;
        }
        return 1;
    }
    else
        return 0;
}
String String::minuscule() const 
{
    char* s1 = new char[_long + 1];
    for (int i = 0; i<=_long;i++)
        s1[i] = tolower(_str[i]);
    String min(s1);
    delete [] s1;
    return min;
}

bool String::operator==(const String& s1)
{
    if(egal(_str,s1)==1)
        return true;
    return false;
}
bool String::operator!=(const String& s1)
{
    if(egal(s1,_str)!=1)
        return true;
    return false;
}
String& String::operator=(const String& copie)
{
    if(this == &copie)
        return *this;
    delete [] _str;
    _long = copie._long;
    _str = new char[_long+1];
    strcpy(_str,copie._str);
    return *this;
}
char& String::operator[](const int k) const
{
    return nieme(k);
}
String String::operator+(const String& s1) const
{
    return *this + s1._str;
}
String String::operator+(const char* c1) const
{
    String n_str = *this;
    n_str.concatene(c1);
    return n_str;
}
String& String::operator+=(const char* c1)
{
    concatene(c1);
    return *this;
}
String& String::operator+=(const char c1)
{
    concatene(c1);
    return *this;
}
std::ostream& operator<<(std::ostream& os, const String& s1)
{
    os<<s1._str;
	return os;
}
std::istream& operator>>(std::istream& is, String& s1)
{
    char n_str[1024];
	is.getline(n_str, 1024);
	s1._long = strlen(n_str);
	delete [] s1._str;
	s1._str = new char[s1._long + 1];
	strcpy(s1._str, n_str);
	return is;
}
String operator+(const char* c1, const String& s1)
{
    return String(c1)+s1;
}