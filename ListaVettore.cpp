#include <iostream>
#include <stdexcept>

// Definizione della classe Lista come template
template <typename T>
class ListaVettore {
  private:
    static const int MAX = 100;   // Dimensione massima dell'array
    T elementi[MAX-1];              // Array per memorizzare gli elementi della lista
    int lung;                     // Numero effettivo di elementi nella lista

  public:
    // Costruttore
    ListaVettore() {
        lung = 0;
    };

    // Verifica se la lista è vuota
    bool listavuota() const{
        return lung==0;
    };

    // Legge un elemento dalla lista
    T leggilista(int p) const{
        if (p > 0 && p <= lung) {
            return elementi[p - 1];  // La posizione dell'utente inizia da 1
        }
        std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
        return T();  // Restituisce un valore di default del tipo T
    };

    // Scrive un elemento nella lista
    void scrivilista(T elem, int p){
        if (p > 0 && p <= lung) {
            elementi[p - 1] = elem;
        } else {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
        }
    };

    // Restituisce la posizione del primo elemento
    int primolista() const{
        return 0;
    };

    // Verifica se si è arrivati alla fine della lista
    bool finelista(int p) const{
        return p>lung;
    };

    // Restituisce la posizione successiva
    int succlista(int p) const{
        return p + 1;
    };

    // Restituisce la posizione precedente
    int predlista(int p) const{
        return p - 1;
    };

    // Inserisce un elemento nella lista
    void inslista(T elem, int p){
        if (lung == MAX) {
            std::cout << "Errore: lista piena. Impossibile inserire nuovi elementi." << std::endl;
            return;
        }
        if (p < 1 || p > lung + 1) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return;
        }

        // Sposta gli elementi per fare spazio per l'elemento da inserire
        for (int i = lung; i >= p; i--) {
            elementi[i] = elementi[i - 1];
        }

        elementi[p - 1] = elem;  // Inserisci l'elemento nella posizione corretta
        lung++;                  // Aumenta la lunghezza della lista
    };   

    // Cancella un elemento dalla lista
    void canclista(int p){
        if (p < 1 || p > lung) {
            std::cout << "Errore: posizione fuori dall'intervallo." << std::endl;
            return;
        }

        // Sposta gli elementi per riempire lo spazio lasciato dall'elemento cancellato
        for (int i = p; i < lung; i++) {
            elementi[i - 1] = elementi[i];
        }

        lung--;  // Riduci la lunghezza della lista
    };

    // Restituisce la lunghezza della lista
    int lunghezza() const{
        return lung;
    };
};