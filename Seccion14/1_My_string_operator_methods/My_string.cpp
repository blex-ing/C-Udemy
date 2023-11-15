#include <cstring>
#include <iostream>
#include "My_string.h"

// No-args constructor
My_string::My_string()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
My_string::My_string(const char *s)
    : str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        try {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        } catch (const std::bad_alloc& e) {
            std::cerr << "No se pudo asignar memoria: " << e.what() << '\n';
            // Manejar el error aquí, posiblemente liberando memoria o terminando el programa
        }
    }
}

// Copy constructor
My_string::My_string(const My_string &source)
    : str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Move constructor
My_string::My_string(My_string &&source)
:str(source.str){
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}


// Destructor
My_string::~My_string() {
    if(str == nullptr)
        std::cout << "Destructor called for My_string: nullptr" << std::endl;
    else
        std::cout << "Destructor called for My_string " << str << std::endl;
    delete [] str;
}

// Copy assignment
My_string &My_string::operator=(const My_string &rhs)
{
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return (*this);
}

// Move assignment
My_string &My_string::operator=(My_string &&rhs)
{
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return (*this);
}

// // Equality
// bool My_string::operator==(const My_string &rhs) const
// {
//     return (std::strcmp(str, rhs.str) == 0);
// }

// // Make lowercase
// My_string My_string::operator-() const
// {
//     char *buff = new char[std::strlen(str) + 1];
//     std::strcpy(buff, str);
//     for (size_t i = 0; i < std::strlen(buff); i++)
//         buff[i] = std::tolower(buff[i]);
//     My_string temp{buff};
//     delete [] buff;
//     return temp;
// }

// Concatenation

// My_string My_string::operator+(const My_string &rhs) const
// {
//     char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff, str);
//     std::strcat(buff, rhs.str);
//     My_string temp{buff};
//     delete [] buff;
//     return temp;
// }

// Display method
void My_string::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Length getter
int My_string::get_length() const { return std::strlen(str); }

// String getter
const char *My_string::get_str() const { return str; }

// Equality
bool operator==(const My_string &lhs, const My_string &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Make lowercase
My_string operator-(const My_string &obj)
{
    char *buff = new char [std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    My_string temp{buff};
    delete [] buff;
    return temp;
}

// Concatenation
My_string operator+(const My_string &lhs, const My_string &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    My_string temp{buff};
    delete [] buff;
    return temp;
}

