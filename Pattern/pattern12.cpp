// Print star pattern

/*
        *
       ***
      *****
     *******
    *********
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
        // triangle 1
        int space = n -i;
        while(space){
            cout << " ";
            space = space -1;

        }
        //triangle 2
        int j=1;
        while(j<=i){
            cout << "*";
            j++;
        }
        // triangle 3
        j=0;
        while(j<=i-2){
            cout << "*";
            j++;
        }
        
        cout << endl;
        i++;
    }
}