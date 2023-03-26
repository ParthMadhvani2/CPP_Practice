// Print star pattern

/*
    1
    12
    123
    1234
    12345

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
        while(j<=i){
            cout << j<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}