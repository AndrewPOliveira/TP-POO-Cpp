#ifndef STRING1_HPP
#define STRING1_HPP

#include <cstring>

class String
{
	public:
	    String();
		String(const char*, int=0);
		String(const char, int=0);
		String(const String& copie);
		~String();
		
		void saisie();
		int longueur() const;
		char &nieme(const int) const;
		void affiche() const;
		void concatene(const String& s1);
		friend int egal(const String& s1,const String& s2);
		String minuscule() const;
		
	private:
		int _long;
		char* _str;
};

#endif