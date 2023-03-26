// Print star pattern

/*
    1
    22
    333
    4444
    55555
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
            cout << i<< " ";
            j++;

        }
        cout << endl;
        i++;
    }
}