// 2D arrays :

/*
    why do we need 2d array?
    ->  we need to make matrix etc.

    2d array is stored in linear array only.

    input -->
    1D
    cin >> arr[i];
    2D
    cin >> arr[i][j];

    output-->
    1D
    cout << arr[i];
    2D
    cout >> arr[i][j];

*/

#include<iostream>
using namespace std;



int main(){
    system("clear");

    //create 2D array :
    int arr[3][4];

    //taking input -> row wise input
    /*
    1 2 3 4 
    5 6 7 8 
    9 10 11 12 
    */
    cout << "row wise input"<< endl;
    for(int i=0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    //printing
    for(int i=0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "col wise input"<< endl;


    //taking input -> col wise input
    /*
    1 4 7 10 
    2 5 8 11 
    3 6 9 12 
    */
    
    for(int i=0; i<4; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[j][i];
        }
    }
    cout << endl;
    //printing
    for(int i=0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // different ways of initializing 2D array
    /*
    
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};
    */
   
   

   return 0;
}