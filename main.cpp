#include <iostream>
//ez nem hiba de ide beírnám a: using namespace std -t a könnyebb olvashatóság miatt

constexpr int N_ELEMENTS = 100; // ha száz elemű a tömb akor 0-99 ig írja a számokat és nem kapjuk meg a 100*2=200 at

int main()
{
    int *b = new int[NELEMENTS]; // nem pontos a név
    std::cout << '1-100 ertekek duplazasa' // macska köröm kell a cout parancshoz, és hiányzik a pontos veszző
    for (int i = 0;)  // nincs feltétel és nincs megadva, hogy mennyivel nőljön a ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hiányzik a feltétel, és ha ki akarjuk írni a 100 nak a 2 szeresét akkor egytől indul a ciklus
    {
        std::cout << "Ertek:" // nincs pontosvessző és én kiírnám utána az értékét b[i] majd endl -al elválasztanám az olvashatóság miatt
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //kezdőérték kell az átlagnak
    for (int i = 0; i < N_ELEMENTS, i++) // nem veszző az ELEMENTS után hanem pontos veszző
    {
        atlag += b[i] //potnosveszző hiánya
    }
    atlag /= N_ELEMENTS;  
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
