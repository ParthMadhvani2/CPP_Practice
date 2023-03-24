// Print star pattern

/*
    *
    **
    ***
    ****
    *****
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
            cout << "* ";
            j++;

        }
        cout << endl;
        i++;
    }
}