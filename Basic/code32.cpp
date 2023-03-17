// Use for loop 

#include<iostream>
using namespace std;

int main() {
    
    // Find the Fahrenheit to Celsius
    int s,e,b;
	cin >> s >> e >> b ;
	
	for( int i = s ; i<=e ; i = i+b ){
        
		double f;
        f = ((i-32)*5)/9;
		cout << i << "  " << f << endl;
	}
    // Factorial of a number
    int n;

   cin>>n;

   int factorial=1;

   if(n<0){

       cout<<"Error";

   }

   else{

   for(int i=1;i<=n;i++){

       factorial=factorial*i;

   }

   cout<<factorial;

       

   }
    return 0;
}