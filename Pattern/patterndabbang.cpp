// Dabbang Pattern 
/*

print the following pattern :-

1234554321
1234**4321
123****321
12******21
1********1

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){

        // print 1st triangle

        int col=n-row+1;
        int value=1;
        while(col){
        cout << value;
        value = value+1;
        col = col-1;
        }
        

       //print 2nd triangle 
        int j = 2;
        while(j <= row ) {
            cout<<"*";
            j = j + 1;
        }

        //print 3rd triangle

        int start = row - 1;
        while(start) {
            cout<<"*";
            start = start - 1;
        }
        
        // print 4th triangle

        int colu=n-row+1;
        int values=n-row+1;
        while(colu){
        cout << values;
        values = values-1;
        colu = colu-1;
        }

        
        
        cout<<endl;
        row = row + 1;
    }
    return 0;
}