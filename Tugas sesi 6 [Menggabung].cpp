#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char a1[25]="Teknik", a2[25]="Informatika";

  cout << "\nKalimat1 = "<<a1;
  cout << "\nKalimat2 = "<<a2;

  strcat(a1,a2);
  cout << "\nMenjadi = "<<a1;
  getchar();
}