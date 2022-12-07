#include <iostream>
using namespace std;

int main() {
  int a, *nilai;
  nilai = &a;
  *nilai = 200;
  
  cout << "Masukan Nilai = ";
  cin >> *nilai;

  cout << *nilai <<" ";
  (*nilai)++;
  cout << *nilai << " ";
  (*nilai)--;
  cout << *nilai << endl;

  if ((*nilai)%2==0){
    cout << *nilai << " adalah bilangan genap" << endl;
  }
  else {
    cout << *nilai << " adalah bilangan ganjil" << endl;
  }
  return 0;
}