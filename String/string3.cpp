// Array of Strings in C++ – 5 Different Ways to Create

/*
Below are the 5 different ways to create an Array of Strings in C++:

Using Pointers
Using 2-D Array
Using the String Class
Using the Vector Class **
Using the Array Class  **

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    system("clear");

//--> intialize array of pointer
    const char* colour[4]={"blue", "red", "black", "violet"};

    //printing string stored in 2d array
    for(int i=0 ; i<4 ; i++){
        cout << colour[i] << endl;
    }

//--> using 2d array
    char colour [4][10]={"blue","red","black","violet"};
    //printing string stored in 2d array
    for(int i=0 ; i<4 ; i++){
        cout << colour[i] << endl;
    }

//--> using string class
    string colour[4]={"blue","red","black","violet"};
    // printing string using string class
    for(int i=0 ; i<4 ; i++){
        cout << colour[i] << endl;
    }
    return 0;

}