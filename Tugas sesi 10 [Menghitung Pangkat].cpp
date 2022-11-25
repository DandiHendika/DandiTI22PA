#include <iostream>
using namespace std;

long int pangkat (int x, int y);

int main(){
  long int a, b, hasil;

  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
  cout << "Masukan Nilai X = ";
  cin >> a;
  cout << "Masukan Nilai Y = ";
  cin >> b;

  hasil = pangkat(a,b);
  cout << a << " Dipangkatkan " << b << " = " << hasil << endl;
}

long int pangkat(int x, int y){
  if (y==1){
    return x;
    }  
  else {
    return x*pangkat(x, y-1);
    }
  }