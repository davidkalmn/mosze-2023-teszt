#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás a konstans neve, N_ELEMENTS kellene, hogy legyen
    std::cout << '1-100 ertekek duplazasa' //nincsen ; a sor végén
    for (int i = 0;) //hiányzik a feltétel, illetve a léptetés
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //mindig hamis lesz a feltétel, mert 0-ról kezd az i
    {
        std::cout << "Ertek:" //nincs kiirandó érték, hiányzik a változó
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializálva
    for (int i = 0; i < N_ELEMENTS, i++) //; kellene a , helyett
    {
        atlag += b[i] //megint nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; 
    //nincs memória felszabadítva
}
