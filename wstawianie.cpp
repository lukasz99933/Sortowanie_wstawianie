// Sortowanie przez wstawianie.

#include <iostream>

using namespace std;

class Tablica
{
  int n = 20;                // rozmiar tablicy
  int* tablica = new int[n]; // tablica alokowana dynamicznie
public:
  void sortowanie(int i); // Metoda do sortowania
  void wyswietlanie();    // Metoda do wyświetlania
  Tablica();              // konstruktor
  ~Tablica();
};

Tablica::Tablica()
{
  for (int i = 0; i < n; i++) {
    tablica[i] = (rand() % 50);
  }
}

Tablica::~Tablica()
{
  delete[] tablica;
}

void
Tablica::sortowanie(int i)
{
  if (i < n) {
    int j = i;
    while (tablica[j] < tablica[j - 1] && j > 0) {
      int a;
      a = tablica[j];
      tablica[j] = tablica[j - 1];
      tablica[j - 1] = a;
      j--;
    }
    sortowanie(i + 1);
  } else
    return;
}

void
Tablica::wyswietlanie()
{
  for (int k = 0; k < n; k++) {
    cout << tablica[k] << "\t";
  }
}

int
main()
{
  Tablica K;
  K.sortowanie(1);
  K.wyswietlanie();
  return 0;
}
