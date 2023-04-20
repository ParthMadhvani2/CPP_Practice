//find the first index of element entered in the array to be find as a key

#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    int arr[n];
    int key;
    bool m = false;
    cin >> n;
    for(int i=0 ;i<n;i++){
        cin >> arr[i];
        
    }
    int ele;
    cin >> ele;
    for (int i = 0 ; i<n ; i++)
        if(arr[i] == ele){
            cout << i;
            m = true;
            break;
        }
        if (m==false)
            cout << -1;
        
    
    return 0;
}