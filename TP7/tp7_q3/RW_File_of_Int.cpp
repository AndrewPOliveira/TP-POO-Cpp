#include "RW_File_of_Int.hpp"

RW_File_of_Int::RW_File_of_Int(std::string nom):W_File_of_Int(nom),R_File_of_Int(nom){}
RW_File_of_Int::~RW_File_of_Int(){}
void RW_File_of_Int::close()
{
    W_File_of_Int::close();
    R_File_of_Int::close();
}
bool RW_File_of_Int::operator!() const
{
    return W_File_of_Int::operator!()&R_File_of_Int::operator!();
}
