#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector <char> tab;
   char charactere, finder;
   int compteur = 0;

   for (int i = 0; i < 6; i++)
    {
        cout << "Donner le charactere n" << i+1 << " : ";
        cin >> charactere; 
        tab.push_back(charactere);
    }

    cout << "Donner le charactere a chercher : ";
    cin >> finder;

    for (int i = 0; i < 6; i++)
    {
        if ( finder == tab[i])
        {
            compteur++;
        }        
    }

    cout << "Le nombre de " << finder << " dans le tableau est : "<< compteur;
}