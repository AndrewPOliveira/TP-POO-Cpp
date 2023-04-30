#ifndef W_FILE_OF_INT_HPP
#define W_FILE_OF_INT_HPP
#include <fstream>
#include <string>

class W_File_of_Int
{
    public:
        W_File_of_Int(std::string);
        ~W_File_of_Int();
        int tellp();
        void seekp(int, std::ios_base::seekdir);
        void seekp(int);
        void close();
        bool operator!() const;
        void operator<<(const int&);
        
    protected:
        std::ofstream file;
};

#endif