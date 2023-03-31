/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){
    system("clear");

    int n;
    cin >> n;

    
    for(int i=1;i<=n;i++){
    //triangle 1
        int j=1;
        while( j<=i ){
            cout << j;
            j++;
            
        }
        

    //triangle 2
        j=n-i;
        while(j){
            cout << " ";
            j--;
        }
        

        //triangle 3
        j=n-i;
        while(j){
            cout << " ";
            j--;
        }

        //triangle 4
        j=i;
        while( j>=1 ){
            cout << j;
            j--;
            
        }

        cout << endl;
    
    }
}