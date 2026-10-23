#include<iostream>
using namespace std;

int sum1(int a) {
    
    int sum=0;
    for(int i=1;i<=a;i++){
        sum =sum + i;
    }

    return sum;
}

int main () {

    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;

    cout<<"The sum till n is : "<<sum1(n);

    return 0;

}