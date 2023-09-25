#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <float> tableau;
    vector <int>::size_type i;
    float valeur = 0, moyenne = 0;

    while ( valeur >= 0)
    {
        cout << "Donner une valeur : ";
        cin >> valeur;
        if ( valeur >= 0)
        {
            tableau.push_back(valeur);
        }
    }
    
    auto taille { std::size(tableau) };

    for (i = 0; i < taille; i++)
    {
        moyenne = moyenne + tableau[i];
    }

    moyenne = moyenne / taille;
    cout << "La moyenne est de : " << moyenne << endl;
}