#include <iostream>
using namespace std;

int main(){
  int r, c, a[100][100], b[100][100], sum[100][100], min[100][100], kali[100][100], i, j;

  cout << "Masukan Jumlah Baris (Between 1 and 100) : ";
  cin >> r;

  cout << "Masukan Jumlah Kolom (Between 1 and 100) : ";
  cin >> c;

  cout << endl << "Masukan Matriks Pertama : " << endl;
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      {
        cout << "Matriks A " << i+1 << "-" << j+1 << " : ";
        cin >> a[i][j];
      }
  
  cout << endl << "Masukan Matriks Kedua : " << endl;
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      {
        cout << "Matriks B " << i+1 << "-" << j+1 << " : ";
        cin >> b[i][j];
      }

  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      sum[i][j] = a[i][j] + b[i][j];
  
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      min[i][j] = a[i][j] - b[i][j];
  
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      kali[i][j] = a[i][j] * b[i][j];

  cout << endl << "Penjumlahan Kedua Matriks : " << endl;
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      {
        cout << sum[i][j] << " ";
        if (j == c - 1)
          cout << endl;
      }

  cout << endl << "Pengurangan Kedua Matriks : " << endl;
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      {
        cout << min[i][j] << " ";
        if (j == c - 1)
          cout << endl;
      }

  cout << endl << "Perkalian Kedua Matriks : " << endl;
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
      {
        cout << kali[i][j] << " ";
        if (j == c - 1)
          cout << endl;
      }
  return 0;
}