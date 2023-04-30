#ifndef STRING1_HPP
#define STRING1_HPP

#include <iostream>

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
		void concatene(const char* s1);
		void concatene(const char);
		friend int egal(const String& s1,const String& s2);
		String minuscule() const;
		
		bool operator==(const String&);
		bool operator!=(const String&);
		String& operator=(const String& copie);
		char& operator[](const int) const;
		String operator+(const String&) const;
		String operator+(const char*) const;
		String& operator+=(const char*);
		String& operator+=(const char);
		friend std::ostream& operator<<(std::ostream&, const String&);
	    friend std::istream& operator>>(std::istream&, String&);
	    friend String operator+(const char*, const String&);
		
	private:
		int _long;
		char* _str;
};

#endif