/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include<iostream>
using namespace std;

int main(){
    system("clear");
    int n;
    cin >> n;
    cout << endl;
    
        for(int row=1; row<=n; row++)
        {
            int stars = n - row + 1;
            int spaces = n - stars;
            //stars spaces spaces stars
            for(int i=1; i<=stars; i++)
            {
                cout<<"*";
            }
            for(int i=1; i<=spaces; i++)
            {
                cout<<" ";
            }
            for(int i=1; i<=spaces; i++)
            {
                cout<<" ";
            }
            for(int i=1; i<=stars; i++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int row=1; row<=n; row++)
        {
            int stars = row;
            int spaces = n - stars;
            //stars spaces spaces stars
            for(int i=1; i<=stars; i++)
            {
                cout<<"*";
            }
            for(int i=1; i<=spaces; i++)
            {
                cout<<" ";
            }
            for(int i=1; i<=spaces; i++)
            {
                cout<<" ";
            }
            for(int i=1; i<=stars; i++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
    }

