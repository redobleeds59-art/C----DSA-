#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the numebr n : \n";
    cin>>n;

    for(int i=1; i<=n;i++){

        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        if(i>1){
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        }

        cout<<"\n";
    }
}