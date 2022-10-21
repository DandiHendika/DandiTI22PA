#include <iostream>
using namespace std;

int main(){
  int d=1, h=19,jumlah;
  for(d=d;d<=h;d+=2){
    cout<<d;
    if(d<h){
      cout<<"+";
    }
  }
  jumlah=(h+1)/2;
  jumlah=jumlah*jumlah;
  cout<< " = " << jumlah;
}