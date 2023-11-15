#ifndef _MY_STRING_H_
#define _MY_STRING_H_

#include <iostream>
#include <cstring>

class My_string {
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    My_string(); // No-args constructor
    My_string(const char *s); // Overloaded constructor
    My_string(const My_string &source); // Copy constructor
    ~My_string(); // Destructor

    My_string &operator=(const My_string &rhs); // Copy assignment
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MY_STRING_H_
