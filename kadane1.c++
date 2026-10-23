#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main () {

    vector<int>arr={1,-2,5,6,-1};

    int current_sum=0;
    int max_sum=INT_MIN;
    int start=0,tempstart=0,end=0;

    for(int i=start;i<arr.size();i++){
        current_sum+=arr[i];

        if (current_sum>max_sum) {
            max_sum=current_sum;
            start=tempstart;
            end=i;
        }

        if(current_sum<0){
            current_sum=0;
            tempstart=i+1;
        }
    }

    cout<<"Maximum sum= "<<max_sum<<endl;
    cout<<"subarray = ";
    cout<<"[";
    for (int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}