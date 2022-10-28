#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;
int main(){
  char kata[100]="KAMPUS UNGUL INSTITUT BISNIS DAN INFORMATIKA KESATUAN", katabaru[100];
  cout << "Katanya adalah "<<kata<<"\n";
  cout << "Kebalikannya adalah = ";

  int x=strlen(kata);
  for(int i=x-1;i>=0;i--){
    cout <<kata[i];
  }

  for (int i=0; i<strlen(kata); i++) {
  if(kata[i] >= 'a' && kata[i] <= 'z'){
  katabaru[i] = toupper(katabaru[i]);
  }
  else{
  katabaru[i] = tolower(kata[i]);
    }
  }
  cout << "\nHasil Perubahan = " << katabaru << endl;
return 0;
}