// Types of data 

#include<iostream>
using namespace std;

int main(){
    system("clear");

    int a;//declaration of variables
    a = 5;//initialization to variables

    cout << "Size of int : " << sizeof(a) << endl;

    float b;
    cout << "Size of float : " << sizeof(b) << endl;

    char c;
    cout << "Size of char : " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool : " << sizeof(d) << endl;

    //modifiers

    short int si;
    long int li;
    cout << "Size of si : " << sizeof(si) << endl;
    cout << "Size of li : " << sizeof(li) << endl;

}