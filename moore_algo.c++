#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {

    vector<int>arr;
    int n;
    cout<<"Enter the number of element in arr : ";
    cin >> n;
    cout << "Enter the "<<n<<" element : ";
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int freq=0; int ans=0;
    for (int i=0;i<n;i++){
        if (freq=0){
            ans=arr[i];
        }
        if (ans==arr[i]){
            freq ++;
        }
        else{
            freq--;
        }
    }

    cout<<ans;

}