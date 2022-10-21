/* ------------------------------ */
/* Program dengan pernyataan goto */
/* ------------------------------ */
#include<iostream>
using namespace std;

int main()
{
  int a, b, c;
  char lagi;
  atas:
  cout<<"Masukkan Bilangan Pertama = ";
  cin>>a;
  cout<<"Masukan Bilangan Kedua = ";
  cin>>b;
  c = a + b;
  cout<<"Hasil Penumlahannya adalah = " << c;
  cout<<"\n\nIngin Hitung Lagi [Y/T] : ";
  cin>>lagi;
  cout<<endl;
if(lagi=='Y'||lagi=='y'){
    goto atas;
  }
  if(lagi=='T'||lagi=='t'){
    goto akhir;
  }
  akhir:
  cout << "sip bang :')\n";
  return 0;
}