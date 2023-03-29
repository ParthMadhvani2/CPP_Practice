// Print star pattern

/*
    *********
     *******
      *****
       ***
        *
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
        // print space
        int j=1;
        while(j<=i-1){
            cout << " ";
            j++;

        }

        // print star
         
    
        int q=n-i+1;
        while(q>=1){
            cout << "*";
            q--;

        }
        //print 2 star
        int s=n-i;
        while(s>=1){
            cout << "*";
            s--;

        }
        
        
        cout << endl;
        i++;
    }
}
