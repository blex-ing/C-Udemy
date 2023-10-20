#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector <char> vowels (5);
    // Initialize vowels vector with 'a', 'e', 'i', 'o', and 'u'
    vowels.at(0) = 'a';
    vowels.at(1) = 'e';
    vowels.at(2) = 'i';
    vowels.at(3) = 'o';
    vowels.at(4) = 'u';

    vector <int> test_scores (10);
    vector <double> hi_tem (365, 80.1);
    // Display contents of hi_tem vector
    for (size_t i = 0; i <hi_tem.size(); i++)
    {
        cout << "\nContenido de temperatura " << i << " : " << hi_tem[i];
    }

    // Display contents of hi_tem vector using at() method
    for (size_t i = 0; i < hi_tem.size(); i++)
    {
        cout << "\nContenido de temperatura " << i << " : " << hi_tem.at(i);
    }
    
    // Display content of test_scores vector

    int score_aux {0};
    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_aux;
    test_scores.push_back(score_aux);

    for (size_t i = 0; i < test_scores.size(); i++)
    {
        cout << "\nTest Score: " << i << " : " << test_scores.at(i) ;
    }
    
    
    return (0);
}