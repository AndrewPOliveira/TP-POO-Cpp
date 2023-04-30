#ifndef R_FILE_OF_INT_HPP
#define R_FILE_OF_INT_HPP
#include <fstream>
#include <string>

class R_File_of_Int
{
    public:
        R_File_of_Int(std::string);
        ~R_File_of_Int();
        void seekg(int, std::ios_base::seekdir);
        void seekg(int);
        int tellg();
        bool eof();
        void clear();
        void close();
        bool operator!() const;
        void operator>>(int&);
    protected:
        std::ifstream file;
};

#endif