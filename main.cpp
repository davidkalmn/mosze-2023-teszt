#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Korrigáltuk a konstans nevét
    int *b = new int[N_ELEMENTS]; 
    
    // Hozzáadtunk egy hiányzó pontosvesszőt
    std::cout << "1-100 ertekek duplazasa" << std::endl; 
    
    // Javítva: feltétel és léptetés hozzáadva
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = i * 2;
    }
    
    // Feltétel kijavítva, hogy lefusson 0-tól N_ELEMENTS-ig
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        // Kiíratjuk az értéket
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // Inicializáljuk az 'atlag' változót
    int atlag = 0;
    
    // Javítva: helyes elválasztás a for ciklusnál (; a , helyett)
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        // Pontosvessző hozzáadva
        atlag += b[i];
    }
    
    // Átlag számítása
    atlag /= N_ELEMENTS;
    
    std::cout << "Atlag: " << atlag << std::endl;
    
    // Memória felszabadítása
    delete[] b; 
    
    return 0; 
}
