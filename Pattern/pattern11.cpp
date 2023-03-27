// Print star pattern

/*
    12345
    1234
    123
    12
    1
    
*/

#include<iostream>
using namespace std;

int main(){
    system("clear");
    int n;
    cin >> n;
    cout << endl;
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout << j<< " ";
            j++;

        }
        
        cout << endl;
        i++;
    }
}