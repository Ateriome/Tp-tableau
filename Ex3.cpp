#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> tab1, tab2, tab3;
    int valeur, reste;


     for (int i = 0; i < 6; i++)
    {
        cout << "Donner la valeur n" << i+1 << " : ";
        cin >> valeur; 
        tab1.push_back(valeur);
    }

    for (int i = 0; i < 6; i++)
    {
       reste = tab1[i] % 2;
       if ( reste == 0)
       {
        tab2.push_back(tab1[i]);
       }
       if ( reste == 1)
       {
        tab3.push_back(tab1[i]);
       }
    }

    int taille { size(tab2) };
    cout << "Tableau paire : ";
    for (int i = 0; i < taille; i++)
    {
        cout << tab2[i];
    }

    int taille1 { size(tab3) };
    cout << endl <<  "Tableau impaire : ";
    for (int i = 0; i < taille1; i++)
    {
        cout << tab3[i];
    }
}