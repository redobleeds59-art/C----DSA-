#include<iostream>
using namespace std;

int main () {
    
    int age;
    cout<<"Enter your age :";
    cin >> age;

    if (age>=18){
        cout<<"you are eligible for lisence..."; 
    }
    else{
        cout<< "You are not eligible for lisence...";
    }

    return 0;

}