# include <iostream>
# include <array>

using namespace std;

int main()
{
    array<int, 5> tab1 { 1, 2, 3, 4, 5 }, tab3 { 20, 30, 40, 50, 60 };
    array<int, 8> tab2;

    cout << "Contenue de tab1 : ";
    for (int i = 0; i < size(tab1); i++)
    {
        cout << tab1[i];
    }

    cout << endl << "taille de tab1 : " << size(tab1);
    cout << endl << "taille max de tab1 : " << tab1.max_size() ;
    cout << endl << "premier element de tab1 : " << tab1.front() ;
    cout << endl << "dernier element de tab1 : " << tab1.back();

    tab2.fill(5);

    cout << endl << "Contenue de tab2 : ";
    for (int i = 0; i < size(tab2); i++)
    {
        cout << tab2[i];
    }

    tab1.swap(tab3);

    cout << endl << "Contenue de tab1 : ";
    for (int i = 0; i < size(tab1); i++)
    {
        cout << tab1[i] << " ";
    }

    cout << endl << "Contneue de tab3 : ";
    for (int i = 0; i < size(tab3); i++)
    {
        cout << tab3[i];
    }

}