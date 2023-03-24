// Create a class of animals to understand the concept of class 

#include<iostream>
using namespace std;

//creating animals class
class Animal{
    public:
    bool givesbirth;
    bool layegg;
    bool liveonground;
    bool liveinwater;
    bool havewings;
};

int main(){
    system("clear");

    Animal mammal; 
    //assign values to instance variables 
    mammal.givesbirth = true; 
    mammal.layegg = false; 
    mammal.liveonground = true; 
    mammal.liveinwater = false; 
    mammal.havewings = false;

    Animal amphibian; 
    amphibian.givesbirth = false; 
    amphibian.layegg = true; 
    amphibian.liveonground = true; 
    amphibian.liveinwater = true; 
    amphibian.havewings = false; 
    
    Animal bird; 
    bird.givesbirth = false; 
    bird.layegg = true; 
    bird.liveonground = true; 
    bird.liveinwater = false; 
    bird.havewings = true;


}