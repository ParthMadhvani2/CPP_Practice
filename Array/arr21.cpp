// linear search in 2D array

#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){

    for(int row=0; row<3 ; row++){
        for(int col=0; col<4 ; col++){
            
            if( arr[row][col] == target){
            
                return 1;
            
            }
            
            
            
            }
        }
        return 0;
    }

int main(){
    system("clear");
    //create 2D array :
    int arr[3][4];

     cout << "row wise input"<< endl;
    for(int i=0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for(int i=0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Enter the element to seearch : " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element found"<< endl;
    }else{
        cout << "Element not found" << endl;
    }
    return 0;
}