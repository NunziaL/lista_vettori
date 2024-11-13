#include <iostream>
#include "ListaVettore.cpp"

int main() {
    // Creazione di una lista di interi
    ListaVettore<int> listaInt;
    
    // Inserisce alcuni elementi nella lista di interi
    listaInt.inslista(10, 1);
    listaInt.inslista(20, 2);
    listaInt.inslista(30, 3);

    // Stampa i valori della lista di interi
    std::cout << "Elemento alla posizione 1: " << listaInt.leggilista(1) << std::endl;
    std::cout << "Elemento alla posizione 2: " << listaInt.leggilista(2) << std::endl;
    std::cout << "Elemento alla posizione 3: " << listaInt.leggilista(3) << std::endl;

    // Cancella il secondo elemento
    listaInt.canclista(2);

    // Stampa i valori della lista di interi dopo la cancellazione
    std::cout << "Dopo la cancellazione, elemento alla posizione 1: " << listaInt.leggilista(1) << std::endl;
    std::cout << "Dopo la cancellazione, elemento alla posizione 2: " << listaInt.leggilista(2) << std::endl;

    // Creazione di una lista di stringhe
    ListaVettore<std::string> listaString;
    
    // Inserisce alcuni elementi nella lista di stringhe
    listaString.inslista("Ciao", 1);
    listaString.inslista("Mondo", 2);

    // Stampa i valori della lista di stringhe
    std::cout << "Elemento alla posizione 1: " << listaString.leggilista(1) << std::endl;
    std::cout << "Elemento alla posizione 2: " << listaString.leggilista(2) << std::endl;

    return 0;
}
