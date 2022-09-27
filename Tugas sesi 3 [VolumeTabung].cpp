#include <iostream>
#define phi 3.14152965
using namespace std;
int main()
{
  float jari_jari, tinggi, volume, luas;
  cout<<"Masukan jari-jari tabung = ";
  cin>> jari_jari;
  cout<<"Masukan tinggi tabung = ";
  cin>>tinggi;

  volume=phi*jari_jari*jari_jari*tinggi;
  luas=2*phi*jari_jari*tinggi;

  cout<<"Volume tabung = "<<volume<<endl;
  cout<<"Luas tabung = "<<luas<<endl;
  getchar();
}