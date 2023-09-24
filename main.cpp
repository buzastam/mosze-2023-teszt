#include <iostream>
using namespace std;

constexpr int N_ELEMENTS = 101;

int main()
{
    int *b = new int[N_ELEMENTS];
    cout << "1-100 ertekek duplazasa" << endl;

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = i*2;
    }

    for (int i = 1; i < N_ELEMENTS; i++)
    {
        cout << "Ertek: " << b[i] << endl; 
    }

    cout << "Atlag szamitasa: " << endl;
    int atlag = 0; 
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i]; 
    }
    atlag /= N_ELEMENTS; 
    cout << "Atlag: " << atlag << endl;

    cout << "szép munka";

    return 0;
}
