// Print star pattern

/*
        *
       ***
      *****
     *******
    *********
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
    
     for(int i = 1; i <= n; i++)
        {
            for(int k=n-i; k>0; k--)
            {
                cout<<" ";
            }
            for(int j = 1; j <= i; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
         for(int i = n; i > 0; i--){

             for(int j = 0; j < n-i; j++) 
                cout <<" ";
    
             for(int j = 0; j < i; j++) 
                cout << "* ";
    
             cout << endl;
	    }
        
    }

