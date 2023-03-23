//Check whether the number is prime or not.

#include<iostream>
using namespace std;


bool isprime(int n){
    if(n<=1){
        return false;
    }

    for(int i = 2; i<n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    system("clear");

    int n;
    cin >> n;

        //divide hogya, not prime
        if(isprime(n)) {
            cout<< " Prime number " << endl;
        }
        else{
            cout<<" Not Prime number " <<endl;
        }
        
    
    return 0;
}