#include<iostream>
using namespace std;
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}

int comp(int a ,int b){
	cout<<"\ngreater number is:\n";
	if(a>b){
	return a;
	}else{return b;};
}
int main(){
	int a,b;
	a=3;
	b=5;
	int c;
	c=sum(a,b);
	cout<<c;
	int k =comp(a,b);
	cout<<k;
	return 0;
}
