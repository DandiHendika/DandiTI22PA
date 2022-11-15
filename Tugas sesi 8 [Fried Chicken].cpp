#include <iostream>
using namespace std;

int main(){
  int x, pajak, jumlahbayar, total, jumlahharga, banyak;
  int harga[100];
  string jenis[100];
  string kode[100];
  int banyakpot[100];

  cout << "| GEROBAK FRIED CHICKEN         |" << endl;
  cout << "|-------------------------------|" << endl;
  cout << "| KODE |   JENIS   |   HARGA    |" << endl;
  cout << "|-------------------------------|" << endl;
  cout << "|  D   |    Dada   | Rp. 2.500  |" << endl;
  cout << "|  P   |    Paha   | Rp. 2.000  |" << endl;
  cout << "|  S   |    Sayap  | Rp. 1.500  |" << endl;
  
  cout << "\nBanyak Jenis : ";
  cin >> banyak;
  for (x=1;x<=banyak;x++){
    cout << "\nJenis ke - " << x << endl;
    cout << "Jenis Potong [D/P/S] : ";
    cin >> kode[x];
    cout << "Banyak Potong : ";
    cin >> banyakpot[x];
    }
  
  cout << "\n";
  cout << "          GEROBAK FRIED CHICKEN            " << endl;
  cout << "--------------------------------------------" << endl ;
  cout << "No.   Jenis     Harga      Banyak   Jumlah" << endl;
  cout << "      Potong    Satuan     Beli     Harga " << endl;
  cout << "--------------------------------------------" << endl;
  
  for (x=1;x<=banyak;x++){
    if (kode[x] == "D"){
    harga[x]=2500;
    jenis[x]="Dada";
    }
  else if (kode[x] == "P"){
    harga[x]=2000;
    jenis[x]="Paha";
    }
  else if (kode[x] == "S"){
    harga[x]=1500;
    jenis[x]="Sayap";
  }
    cout << x;
    cout << "      " << jenis[x];
    cout << "     " << "Rp." << harga[x];
    cout << "     " << banyakpot[x];
    jumlahharga = harga[x]*banyakpot[x];
    cout << "      " <<jumlahharga;
    cout << endl;
    }
  jumlahbayar = jumlahharga * x;
  pajak = jumlahbayar * 0.1;
  total = jumlahbayar + pajak;
  cout << "--------------------------------------------" << endl;
  cout << "                       Jumlah Bayar  Rp."<< jumlahbayar<<endl;
  cout << "                       Pajak 10%     Rp."<< pajak <<endl;
  cout << "                       Total Bayar   Rp."<< total<<endl;
  }
