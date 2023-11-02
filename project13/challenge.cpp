#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Function prototypes
void    display_menu();
char    get_selection();

//Menu handling functions prototypes
void    handle_display(const vector<int> &v);
void    handle_add(vector<int> &v);
void    handle_mean(const vector<int> &v);
void    handle_smallest(const vector<int> &v);
void    handle_largest(const vector<int> &v);
void    handle_find(const vector<int> &v);
void    handle_quit();
void    handle_unknown();

//Prototypes for functions that work with the list
//to display it, calculate mean, etc.
void    display_list(const vector<int> &v);
double  calculate_mean(const vector<int> &v);
int     get_smallest(const vector<int> &v);
int     get_largest(const vector<int> &v);
bool    find(const vector<int> &v, int target);

int main()
{
    vector<int> numbers;  //our list of numbers
    char selection {};       //the user's selection

    do{
        display_menu();     //display the menu
        selection = get_selection();    //get the user's selection
        switch (selection)
        {
        case 'P':
            handle_display(numbers);
            break;
        case 'A':
            handle_add(numbers);
            break;
        case 'M':
            handle_mean(numbers);
            break;
        case 'S':
            handle_smallest(numbers);
            break;
        case 'L':
            handle_largest(numbers);
            break;
        case 'F':
            handle_find(numbers);
            break;
        case 'Q':
            handle_quit();
            break;
        
        default:
            handle_unknown();
        }

    }while(selection != 'Q');

    cout << endl;
    return (0);

}

/**
 * @brief Displays a menu with options to print numbers, add a number, display mean of the numbers, display the smallest number, display the largest number and quit.
 * 
 */
void    display_menu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

/**
 * @brief Gets user input for selection and returns it in uppercase.
 * 
 * @return char The user's selection in uppercase.
 */
char    get_selection()
{
    char selection {};
    cin >> selection;
    return (toupper(selection));
}

void    handle_display(const vector<int> &v)
{
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        display_list(v);
}

void    handle_add(vector<int> &v)
{
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

void    handle_mean(const vector<int> &v)
{
    if (v.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else
    {
        cout << "The mean is: " << calculate_mean(v) << endl;
    }
}

void    handle_smallest(const vector<int> &v)
{
    if (v.size() == 0)
        cout << "Unable to determine the smallest number - list is empty" << endl;
    else
    {
        cout << "The smallest number is: " << get_smallest(v) << endl;
    }
}

void    handle_largest(const vector<int> &v)
{
    if (v.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else
        cout << "The largest number is: " << get_largest(v) << endl;
}

void    handle_find(const vector<int> &v)
{
    int target {};
    if (v.size() == 0)
        cout << "Unable to find the number - list is empty" << endl;
    else
    {
        cout << "Enter the number to find: ";
        cin >> target;
        cout << "The number " << target << (find(v, target) ? " was found" : " was not found") << endl;
    }
}

void    handle_quit()
{
    cout << "Goodbye" << endl;
}

void    handle_unknown()
{
    cout << "Unknown selection - try again";
}

/**
 * Displays the contents of a vector of integers.
 * @param v The vector to display.
 */
void    display_list(const vector<int> &v)
{
    cout << "[ ";
    for (auto num: v)
        cout << num << " ";
    cout << "]" << endl;
}

double  calculate_mean(const vector<int> &v)
{
    int sum {};
    for(auto num: v)
        sum += num;
    return (static_cast<double>(sum) / v.size());
}

int get_smallest(const vector<int> &v)
{
    int smallest = v.at(0);
    
    for(auto num:v)
    {
        if(num < smallest)
            smallest = num;
    }
    return (smallest);
}

int get_largest(const vector <int> &v)
{
    int largest = v.at(0);
    for(auto num:v)
    {
        if(num > largest)
            largest = num;
    }
    return (largest);
}

bool    find(const vector<int> &v, int target)
{
    for(auto num:v)
    {
        if(num == target)
            return (true);
    }
    return (false);
}