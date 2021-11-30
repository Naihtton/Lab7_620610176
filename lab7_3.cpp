#include<iostream>
using namespace std;
int adiff(int A,int B){
  int C = (B - A)%360;
  if(C < -180){
    C = C+360;
  }
  if(C > 180){
    C = C-360;
  }
  if(C<0){
    C = -C;
  }
  return C;
}
int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45)<< endl;
  cout << adiff(0,360)<< endl;
  cout << adiff(10,350)<< endl;
  cout << adiff(95,260)<< endl;
  cout << adiff(90,-90)<< endl;
  cout << adiff(1000,280)<< endl;
  cout << adiff(60,244);
}


