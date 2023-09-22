#include <iostream>
using namespace std;
int main()
{
    float *tableau, moyenne = 0;
    int taille;

    cout << "Combien de valeur voulez vous entrez ?" << endl;
    cin >> taille;
    tableau = new float [taille];

    for (int i = 0; i < taille; i++)
    {
        cout << "Donner la valeur n" << i+1 << endl;
        cin >> tableau[i]; 
    }

    for (int i = 0; i < taille; i++)
    {
        moyenne = moyenne + tableau[i];
    }
    
    moyenne = moyenne / taille;
    cout << "La moyenne est de : " << moyenne << endl;
}