#include<iostream>
using namespace std;
int main(){
	/*int a,b,c,d;
	cout<<"Give three integers as input : a,b,c"<<endl;
	cin>>a>>b>>d;
	if(a>b &&c>d){
		cout<<"haha";
	}
	else if(a>b && c<d){
		cout<<"hehe";
	}
	else if(a<b && c>d){
		cout<<"huhu";
	}*/
	cin>>a;
	switch(a){
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
		case 3:
			cout<<"The value of a is 3";
		
		
		default:
			cout<<"default will be always printed";
	}
}
