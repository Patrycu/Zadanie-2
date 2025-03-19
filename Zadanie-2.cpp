#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  int liczba;
  int liczba_maksymalna = INT_MIN; // przydzielenie najmniejszej wartosci typu int

  cout << "Wprowadz liczby calkowite, aby zakonczyc dzialanie programu wpisz '0'" << endl;

  // Petla, ktora umozliwia podanie liczb
  while(true) {
    cout << "Wprowadz liczbe: ";
    cin >> liczba;

    // sprawdza czy podana liczba jest wieksza
    if (liczba > liczba_maksymalna) {
      liczba_maksymalna = liczba;
    }

    // sprawdza czy uzytkownik podal 0
    if (liczba == 0) {
      break;
    }
  }

  cout << "Najwieksza wprowadzona liczba to: " << liczba_maksymalna << endl;

  return 0;
}
