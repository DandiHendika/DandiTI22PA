#include <iostream>

using namespace std;

int main() {

  int maksimum, minimum, jumlah=10, i = 1, lokasi;
  int nilai[10] = {23,6,89,12,45,67,9,90,54,30};

  cout << "Menghitung Nilai Max dan Min Array"; 
  for (i = 0; i < jumlah; i ++) {
    cout << "\nNilai Array Index ke - " <<(i) <<": "<<nilai[i];
  }

  maksimum = nilai[0];

  for(i = 0; i < jumlah; i++) {
    if (nilai[i] > maksimum)  {
      maksimum = nilai[i];
      lokasi = i;
    }
  }

  cout << "\nNilai maksimum adalah " << maksimum << " berada di index ke " << lokasi << endl;
  
  minimum = nilai[0];
  for(i = 0; i < jumlah; i++) {
    if (nilai[i] < minimum)  {
      minimum = nilai[i];
      lokasi = i;
      }
    }
  cout << "Nilai minimum adalah "<< minimum << " berada di index ke " << lokasi << endl;
}