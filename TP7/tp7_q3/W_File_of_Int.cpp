#include "W_File_of_Int.hpp"

W_File_of_Int::W_File_of_Int(std::string nom)
{
    file.open(nom, std::ios_base::app);// Il ouvre le fichier
}
W_File_of_Int::~W_File_of_Int()
{
    file.close();
}
int W_File_of_Int::tellp()
{
    return file.tellp()/sizeof(int);
}
void W_File_of_Int::seekp(int i, std::ios_base::seekdir seek)
{
    file.seekp(i,seek);
}
void W_File_of_Int::seekp(int i)
{
    file.seekp(i);
}
void W_File_of_Int::close()
{
    file.close();
}
bool W_File_of_Int::operator!() const
{
    if (!file.is_open())// Il vérifie si il a été ouvert correctement
        return true;
    else
        return false;
}
void W_File_of_Int::operator<<(const int& i)
{
    file.write((char*)&i,sizeof(i));
}


