#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector <vector<int>> movie_ratings
    { 
        { 1, 2, 3, 4}, 
        { 1, 2, 3, 5}, 
        { 1, 2, 4, 4}, 
        { 1, 2, 2, 4} 
    };
    int cont {0};
    int n = movie_ratings.size();
    while (cont < n)
    {
        int cont2 {0};
        while (cont2 < movie_ratings.at(0).size())
        {
            cout << "\nMovie ratings index " << cont << " : " << movie_ratings.at(cont).at(cont2);
            cont2++;
        }
        cont++;
    }
    
}