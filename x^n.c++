#include<iostream>
using namespace std;

int power(int x,int n){

    int pow=1;
    for (int i=1;i<=n;i++){
        pow=pow*x;
    }

    return pow;
}

float binary_power(float x,int n){
    
    if (n<0){
        x=1/x;
        n=-n;
    }
    float ans=1;
    while(n>0){    
        if (n%2==1){
            ans*=x;
        }
        x*=x;
        n/=2;
    }
    return ans;
}

int main () {
    int n,x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout <<"Enter the value of n : ";
    cin>>n;

    cout<<binary_power(x,n);
}
