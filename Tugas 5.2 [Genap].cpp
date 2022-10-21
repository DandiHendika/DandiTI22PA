#include <iostream>
using namespace std;

int main(){
  int d=2, h=20,jumlah;
  for(d=d;d<=h;d+=2){
    cout<<d;
    if(d<h){
      cout<<"+";
    }
  }
  jumlah=h/2;
  jumlah=jumlah*(jumlah+1);
  cout<< " = " << jumlah;
}