#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main () {

    vector<int>arr={1,2,3,4,5};
    int n=5;
    int m_s=INT_MIN;
    for (int i=0; i<n;i++) {
        int c_s=0;
        for (int j=i;j<n;j++){
                 c_s+=arr[j];
                m_s=max(c_s,m_s);
              }
    }

    cout<<"Maximum subarray is : "<<m_s;
    return 0;

}