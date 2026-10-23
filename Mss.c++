#include<iostream>
#include<vector>
using namespace std;

int main () {

    vector<int>arr={1,22,34,48,5};
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }

            cout<<" ";
        }

        cout<<"\n";

    }


}