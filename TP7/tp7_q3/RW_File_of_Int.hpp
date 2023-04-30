#ifndef RW_FILE_OF_INT_HPP
#define RW_FILE_OF_INT_HPP
#include <fstream>
#include <string>
#include "W_File_of_Int.hpp"
#include "R_File_of_Int.hpp"

class RW_File_of_Int:public W_File_of_Int, public R_File_of_Int
{
    public:
        RW_File_of_Int (std::string);
        ~RW_File_of_Int ();
        void close();
        bool operator!() const;
        
};

#endif
