#include "String1.hpp"
#include <iostream>

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
void String::concatene(const String& s1) //on libere la memoire de _str et realloc avec la nouvelle longueur
{
    _long = _long + s1._long;
    string copie = _str;
    delete [] _str;
    _str = new char[_long + 1];
    
    for(int i = 0; i<=_long;i++)
    {
        if(i<_long-s1._long)
            _str[i] = copie[i];
        else
            _str[i] = s1._str[i-(_long-s1._long)];
    }
    _str[_long+1]='\0';
    
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
    String s1(*this);
    for (int i = 0; i<=_long;i++)
    {
        if(islower(_str[i]))
            s1._str[i]=_str[i];
    }

    return s1;
}