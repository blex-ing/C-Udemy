#include <iostream>
#include <cstring> // for string function
#include <cctype> // for character-based function

using namespace std;

int main()
{
    char    first_name[20] {};
    char    last_name[20] {};
    char    full_name[50] {};
    char    temp[50] {};

    // cout << "Enter first name: ";
    // cin >> first_name;
    // cout << "Enter last name: ";
    // cin >> last_name;
    // cout << "-----------------------" << endl;

    // cout << "Hi, " << first_name << "number of characters: " << strlen(first_name) << endl;
    // cout << "Your last name is " << last_name << " has " << strlen(last_name) << endl;

    // //use strcpy for copy first name y full name
    // strcpy(full_name, first_name);
    // //concatenate full name and a space
    // strcat(full_name," ");
    // //concatenate last name fo full name
    // strcat(full_name, last_name);
    // cout<<"\nFull Name : "<<full_name<<endl;

    //enter the full name
    cout << "Please enter your Full Name: ";
    cin.getline(full_name,50);
    //print the full name
    cout << "\nYou ful name is: " << full_name << endl;
    cout << "-----------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << "and " << full_name << " are different" << endl;

    for (size_t i = 0; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    //print full name
    cout << "\nAfter converting to uppercase: " << full_name << endl;
    cout << "-----------------------" << endl;
    

    return (0);
}