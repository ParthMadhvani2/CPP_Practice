// Print star pattern

/*
    1
    01
    101
    0101
    10101
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
        int bit;
        while(j<=i){
            if(i%2==0){
                bit = (j%2==0) ? 1 : 0;
            }else{
                bit = (j%2==0) ? 0 : 1;
            }
            cout << bit;
            j++;
            

        }
        cout << endl;
        i++;
    }
}