#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int>arr;
    int n;
    cout<<"Enter the number of element in array : \n";
    cin>>n;
    cout<<"Enter the "<<n<<" element of array \n";
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
         arr.push_back(x);
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;

    vector<int>vec;
    for (int i=0; i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if (arr[i]+arr[j]==target){
                //cout<<arr[i]<<" "<<arr[j];
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
            }
        }
    }

    for (int i : vec) {
        cout<<i<<" ";
    }
}
