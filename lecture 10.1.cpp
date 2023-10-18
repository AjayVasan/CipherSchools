#include <iostream>
using namespace std;

int bye(int a,int b){
  a=500;b=10;//formal parameter
  int c = a+b;
  cout<<"value of a & b before is : "<<a<<" , "<<b<<"\n";
  return c;
};

int main (){
  int a,b;
  a=20;b=30;
  int c=bye(a,b);//actual parameter
  cout<<"value of a & b after is : "<<a<<" , "<<b<<"\n";
  return 0;
}
