#include <iostream>
using namespace std;
int main() {
	int p=24;
	int l=12;
	int t=18;
	int volume=p*l*t;
	
	if (volume<=100){
		cout<<"balok kecil";
	
	}else if (volume>=100&volume <=200){
		cout<<"balok sedang";
	
	}else{
		cout<<"balok besar";
	
		cout<<volume<<"cm3";
	}
}
