// find the lenght of array 

#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    system("clear");
    char name[20];
    cout <<"Enter your name :"<< endl;
   

    cin >> name;
    
    cout << "Your name is :" << endl;
    cout << name << endl;

    cout << " Lenght :" << getlength(name) << endl;
     return 0;
}