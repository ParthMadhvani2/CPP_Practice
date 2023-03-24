// class with array 
//BUILD A PROGRAM TO TAKE INPUT DROM THE USER OF PEOPLE NAME , AGE , GENDER.


#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){
        
        cout << "NAME : ";
        cout << name;
        cout << endl;
        cout << "AGE : ";
        cout << age;
        cout << endl;
        cout << "GENDER : ";
        cout << endl << endl;
        cout << gender;

    }

};

int main(){
    system("clear");
    int n;
    cout << "size of array " ;
    cin >> n;
    cout << endl;
    student arr[n];
    for(int i = 0; i<n ;i++){
        cout << "NAME : ";
        cin >>arr[i].name;
        
        cout << "AGE : ";
        cin >>arr[i].age;
        
        cout << "GENDER : ";
        cin >>arr[i].gender;
        cout << endl;
    }
    system("clear");
    for(int i = 0; i<n ;i++){
        arr[i].printinfo();
    }

}