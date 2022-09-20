#include <iostream>
using namespace std;
#define harga 4500.02
int main()
{
  float jumlah,total;
  cout<<"Masukkan jumlah barang = ";
  cin>>total;
  total=harga*total;
    cout<< "\nYang harus dibayar =\n"<< total;

  return 0;
}