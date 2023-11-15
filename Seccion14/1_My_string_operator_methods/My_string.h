#ifndef _MY_STRING_H_
#define _MY_STRING_H_

#include <iostream>
#include <cstring>

class My_string {
    friend bool operator==(const My_string &lhs, const My_string &rhs);
    friend My_string operator-(const My_string &obj);
    friend My_string operator+(const My_string &lhs, const My_string &rhs);

    friend std::ostream &operator<<(std::ostream &os, const My_string &rhs);
    
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    My_string(); // No-args constructor
    My_string(const char *s); // Overloaded constructor
    My_string(const My_string &source); // Copy constructor
    My_string(My_string &&source); // Move constructor
    ~My_string(); // Destructor

    My_string &operator=(const My_string &rhs); // Copy assignment
    My_string &operator=(My_string &&rhs); // Move assignment
    // My_string operator-() const; // Make lowercase
    // My_string operator+(const My_string &rhs) const; // Concatenation
    //bool operator==(const My_string &rhs) const; // Equality
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MY_STRING_H_
