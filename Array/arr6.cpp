//find the last index of element entered in the array to be find as a key


#include <iostream>

using namespace std;

int lastIndex(int arr[], int n, int x){
   for(int i = n-1; i>=0; i--){
       if(arr[i] == x){
           return i;
       }
   }
   return -1;
}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i =0; i<n; i++){
       cin>>arr[i];
   }
   int x;
   cin>>x;
   cout<<lastIndex(arr, n, x);

   return 0;
}