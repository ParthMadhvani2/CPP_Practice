#include<iostream>
using namespace std;

int main() {

// Find the area of a triangle
    int l,b;
    cin>>l;
    cin>>b;
    int area;
    area=l*b;
    cout<<area;

// Print name and age of a person
 
	string name;
	int age;
	cin>>name>>age;
	cout<< "The name of the person is "<<name<<" and the age is "<<age<<"."<<endl;
	
//Calculate simple interest

    int p,t,s;
	double r;
	cin >> p >> r >> t;
	s = (p*r*t)/100;
	cout << s << endl;

    return 0;
}