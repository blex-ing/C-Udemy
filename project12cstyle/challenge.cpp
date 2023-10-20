#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
    string  key {"zyxwvutsrqponmlkjihgfedcbaABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
    string  secret_message {};
    string  encrypted_message {};

    cout << "Enter your secret message: ";
    getline(cin, secret_message);

    cout << "\nEncrypting message..." << endl;
    for (char c : secret_message)
    {
        size_t position = alphabet.find(c);
        if (position != string::npos)
        {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        }
        else
            encrypted_message += c;
    }
    cout << "Your message is: \t" << secret_message << endl;
    cout << "Your encrypted message is: \"" << encrypted_message << "\"\n";

    string decryted_message {};
    cout << "Decrypting message..." << endl;
    for (char c : encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_char {alphabet.at(position)};
            decryted_message += new_char;
        }else
            decryted_message += c;
    }
    cout << "Your decrypted message is: \"" << decryted_message << "\"\n";
    return (0);
}