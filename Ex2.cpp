#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> tableau;
    int Maximum, Minimum, valeur;


    for (int i = 0; i < 6; i++)
    {
        cout << "Donner la valeur n" << i+1 << " : ";
        cin >> valeur; 
        tableau.push_back(valeur);
    }

   if (tableau[0] > tableau[1])
   {
    Maximum = tableau[0];
    Minimum = tableau[1];
   }
   else
   {
    Maximum = tableau[1];
    Minimum = tableau[0];
   }

   for (int i = 2; i < 6; i++)
   {
    if (tableau[i] > Maximum)
    {
        Maximum = tableau[i];
    }
    else
    {
        if (tableau[i] < Minimum)
        {
            Minimum = tableau[i];
        }
    }
   }
    cout << "La plus petit valeur est : " << Minimum << " et la plus  grande est : " << Maximum << endl;
}