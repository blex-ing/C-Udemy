#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1 ;
    vector<int> v2 ;

    v1.push_back(10);
    v1.push_back(20);
    cout << "\nelements v1 0: " << v1.at(0);
    cout << "\nelements v1 1: " << v1.at(1); 
    cout << "\nsize of v1 is: " << v1.size();

    v2.push_back(100);
    v2.push_back(200);
    cout << "\nelements v2 0: " << v2.at(0);
    cout << "\nelements v2 1: " << v2.at(1); 
    cout << "\nsize of v2 is: " << v2.size();

    vector <vector<int>> vector_2d;
    vector_2d.push_back(v1);
    vector_2d.push_back(v2);

    int cont {0};
    for (auto &i : vector_2d)
    {
        cout <<"\nVector number"<<cont++<<":";
        for (auto &j : i )
        {
            cout << j << ' ';
        }
    }
    vector_2d.at(0).at(0) = 1000;

    int cont1 {0};
    for (auto &i : vector_2d)
    {
        cout <<"\nVector number" << cont1++<<":";
        for (auto &j : i )
        {
            cout << j << ' ';
        }

    }

    // double num5[5];
}
