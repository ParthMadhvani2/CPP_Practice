//C++ Program to remove spaces from a string

/*
Given a string, remove all spaces from it. 
For example “g e e k” should be converted to “geek” and ” g e ” should be converted to “ge”.
*/

#include<iostream>
using namespace std;

char *removespaces(char *str){
    int i = 0, j = 0;
    while(str[i]){
        if(str[i] != ' '){
            str[j++] = str[i];
            i++;

        }
        str[j] = '\0';
        return str;
    }
}

int main(){
    system("clear");
    char str1[] = "gee k ";
    cout << removespaces(str1) << endl;
 
    char str2[] = " g e e k ";
    cout << removespaces(str2);
    return 0;


}