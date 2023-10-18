#include <iostream>
using namespace std;

int helo(){
  cout<<"hello\n";
  return 20;
};
int add(int a,int b){
  cout<<"addition of "<<a<<" and "<<b<<" is: ";
  int c=a+b;
  return c;
};

int main(){
  int h = helo();
  cout<<"H: "<<h<<"\n";
  int j=add(10,20);
  cout<<j<<"\n";
};

