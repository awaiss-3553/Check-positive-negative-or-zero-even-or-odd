#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	
	if(n>0){
		if(n%2==0){
			cout<<"Number is Positive and Even";
		} else {
			cout<<"Number is Positive and Odd";
		}
	} else if (n<0){
		cout<<"Number is Negative";
	} else {
		cout<<"Number is Zero";
	}
	return 0;
}
