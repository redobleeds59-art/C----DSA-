#include<iostream>
using namespace std;

int main () {
    bool is_prime=1;
    int n;
    cout<<"Enter the number n : \n";
    cin>>n;
    
    if(n==1){
        is_prime=0;
    }
    else if(n==2) {
        is_prime=1;
    }
    else if(n>2) {
    for(int i=2; i<n; i++){

        if (n%i==0) {
            is_prime=0;
            break; 
        }
    }
}
    
        if (is_prime==1){
            cout<<n<<" is prime number";
        }

        else if (is_prime==0){
            cout<<n<<" is not prime";
        }

        else {
            cout<<"Wrong input";
        }
}