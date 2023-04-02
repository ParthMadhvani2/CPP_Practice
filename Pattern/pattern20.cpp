/*

ABCDE
ABCD
ABC
AB
A

*/



#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = n;
    while(row >= 1) {

        int col = 1;

        while(col <= row) {
            char ch = 'A' + col - 1;
            cout<< ch;
            col = col + 1;
        }
        cout<<endl;
        row = row - 1;
    }
    return 0;
}