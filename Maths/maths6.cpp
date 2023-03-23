// GCD / HCF

/*
Euclid's algo

gcd( a%b , b);
lcm(a,b) * gcd(a,b) = a*b;

*/

/*
            GFG SOLUTION LCM & GCD
    //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
  int hcf(int a , int b){
       if(a==0){
        return { b};
    }

    if(b==0)
    return { a};

    while(a != b){
        if( a> b){
            a= a-b;

        }else{
            b= b-a;
        }

    }
    return { a};
  }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long gcd = hcf(A,B);
        long lcm=A*B/gcd;
        return{lcm,gcd};
       
}
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends

*/

#include<iostream>
using namespace std;

int gcd(int a , int b){
    if(a==0){
        return b;
    }

    if(b==0)
    return a;

    while(a !=b){
        if( a> b){
            a= a-b;

        }else{
            b= b-a;
        }

    }
    return a;
}

int main(){
    system("clear");

    int a,b;
    cout << "Enter the values of a & b : " << endl;
    cin >> a >> b;

    int ans = gcd( a,b );
    cout << "The GCD of " << a << " & " << b << " is : " << ans << endl;
    return 0;
}