// Reverse a string 
// check a palindrome
// not case sensitive
/*
     a string = [ a , b , c , b , a ];

     reverse string = [ a , b , c , b , a ];

     when a string is reversed then it would look the same a string from front.


*/

#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkpalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(tolowercase( a[s] ) != tolowercase( a[e] ) ){
            return 0;
        }    
        else{
            s++;
            e--;
        }
    }
    return 1;
}

char getmaxoccchar(string s){

    int arr[26] = {0};
    // create an array of count of characters 
    for (int i =0 ; i<26 ; i++){
        char ch = s[i];
    
    
    //lowercase
    int number = 0;
    if(ch >= 'a' && ch<= 'z'){
        number = ch - 'a';

    }//uppercase
    else{
        number = ch - 'A';

    }
    arr[number]++;
    
    }
    int maxi = -1, ans = 0;

    for(int i =0 ; i<s.length() ; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

int main(){
    system("clear");
    char name[20];
    cout <<"Enter your name :"<< endl;
   

    cin >> name;
    
    cout << "Your name is :" << endl;
    cout << name << endl;

    int len = getlength(name);
    cout << " Lenght :" << len << endl;


    reverse(name, len);
    cout << "Your  reverse name is :" << endl;
    cout << name << endl;


    cout << "Palindrome or not : " << checkpalindrome(name, len) << endl;

    system("clear");
    string s;
    cin >> s;
    cout << getmaxoccchar(s) << endl;

     return 0;
}

