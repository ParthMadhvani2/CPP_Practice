//Write a program to reverse an array or string

/*

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

*/

#include<iostream>
using namespace std;




int main(){
    system("clear");
    int n;
    cin >> n;
    int arr[n];
    int start = 0;
    int end = n-1;
    // input array
    for(int i = 0; i<n ; i++){
        cin >> arr[i];

    }
    cout << endl;
    // print array
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // reverse of an array
    cout << "The reverse of an array is : "<< endl;
    while(start < end){
        swap(arr[start++], arr[end--]);

    }
    // print array
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}