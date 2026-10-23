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

    sort(arr.begin(),arr.end());

    for (int i=0;i<n;i++){
        int freq=1;
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){ 
                freq+=1;
                if(freq>n/2){ 
                    cout<<"majority element is : "<<arr[i];
                    break;
                }
               }

               else{
                break;
               }
            
        }
    }

}