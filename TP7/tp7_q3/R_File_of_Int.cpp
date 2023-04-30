#include "R_File_of_Int.hpp"

R_File_of_Int::R_File_of_Int(std::string nom)
{
    file.open(nom);
}
R_File_of_Int::~R_File_of_Int()
{
    file.close();
}
void R_File_of_Int::seekg(int i, std::ios_base::seekdir seek)
{
    file.seekg(i,seek);
}
void R_File_of_Int::seekg(int i)
{
    file.seekg(i);
}
int R_File_of_Int::tellg()
{
    return file.tellg()/sizeof(int);
}
bool R_File_of_Int::eof()
{
    return file.eof();
}
void R_File_of_Int::clear()
{
    file.clear();
}
void R_File_of_Int::close()
{
    file.close();
}
bool R_File_of_Int::operator!() const
{
    return !file.is_open();
}
void R_File_of_Int::operator>>(int& i)
{
    file.read((char*)&i,sizeof(i));
}