// oop concepts

/*
    class & objects,
    polymorphism, 
    inheritance, 
    encapsulation, 
    abstraction,

*/

#include<iostream>
using namespace std;

//class Explained : 


/*

Class :-

A class is a logical entity used to define a new data type. 
A class is a user-defined type that describes what a particular kind of object will look like. 
Thus, a class is a template or blueprint for an object. 
A class contains variables, methods, and constructors.



 Eg class class_name{
//class body
    //prperties
    //methods
};

class: class keyword is used to create a class in C++. 
class_Name: The name of the class. 
class body: Curly braces surround the class body. 
After closing curly braces, a semicolon(;) is used.

*/

class hero{
    //properties
    int health;
};

int main(){
    system("clear");
    
    //Object Explained :

    /*
    Object :-
    
    An object is an instance of a Class. 
    It is an identifiable entity with some characteristics and behavior. 
    Objects are the basic units of object-oriented programming.  
    It may be any real-world object like a person, chair, table, pen, animal, car, etc.

    class_name objectName;

    Syntax to create an object dynamically in C++: 
    class_name * objectName = new class_name();
    
    */
    hero h1;
    cout << "size of : " << sizeof(h1) << endl;
    // in the of empty class the size of class will be 1 only
    
    return 0;
}