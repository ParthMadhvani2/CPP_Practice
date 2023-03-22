
// set bits using function
#include <iostream>

 

using namespace std;

 

   //Write your countBits function here

int countBits(int n)

   {

       int count = 0;

       string binary = "";

       while (n != 0)

       {

           int remainder = (n % 2);

           binary += to_string(remainder);

           n = n / 2;

       }

       for (auto x : binary)

       {

           if (x == '1')

           {

               count += 1;

           }

       }

       return count;

   }

 

int main() {

   int n;

   cin >> n;

   cout<<countBits(n);

   return 0;

}