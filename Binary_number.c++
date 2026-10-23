#include<iostream>
using namespace std;

void dec_bi(int n);

int main () {

    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Your Binary number is : ";
    dec_bi(a);

}

void dec_bi(int n) {

    int rem[100];
    int i=0;
    while(n>0){
    rem[i]=n%2;
    n=n/2; 
    i++;
}
for (int j = i - 1; j >= 0; j--)
{
    cout << rem[j];
}
}