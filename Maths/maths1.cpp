// count the digits in a number entered.

#include<iostream>
using namespace std;

int count_digits(int n){
    int x = n; 
    int count = 0;
    while(x!=0){
        x = x/10;
        count++;

    }
    return count;
}

int main(){
    system("clear");
    int n;
    cin >> n;
    cout << "The digits in the number " << n <<" entered is : " << count_digits(n);
    return 0;

}