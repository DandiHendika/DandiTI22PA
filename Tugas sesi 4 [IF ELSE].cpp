#include<iostream>
using namespace std;

int main()
{
  string nama;
  int nilai1, nilai2, nilai3, nilai4=0;
  
  cout << "Masukan Nama Siswa : ";
  cin >> nama;
  cout << "\nNilai Pertandingan I : ";
  cin >> nilai1;
  cout << "\nNilai Pertandingan II : ";
  cin >> nilai2;
  cout << "\nNilai Pertandingan III : ";
  cin >> nilai3;

  nilai4 = (nilai1+nilai2+nilai3)/3;

  if (nilai4 >=85){
    cout << " \nNilai Rata-rata yang diperoleh siswa bernama "<< nama << " adalah " << nilai4 << " dari hasil perlombaan yang diikutinya hadiah yang di dapat adalah komputer Core i5";
  }
  else if (nilai4 >=70){
    cout << " \nNilai Rata-rata yang diperoleh siswa bernama "<< nama << " adalah " << nilai4 << " dari hasil perlombaan yang diikutinya hadiah yang di dapat adalah uang sebesar Rp. 2.500.000";
  }
  else {
    cout << " \nNilai Rata-rata yang diperoleh siswa bernama "<< nama << " adalah " << nilai4 << " dari hasil perlombaan yang diikutinya hadiah yang di dapat adalah hiburan";
  }
  getchar();
}