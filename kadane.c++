#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main () {

    vector<int>arr={1,2,3,4,5};
    int n=5;
    int m_s=INT_MIN;
     int c_s=0;
    for (int i=0; i<n;i++) {
            c_s+=arr[i];
            m_s=max(c_s,m_s);

            if (c_s<0){
                c_s=0;
            }
        }
    cout<<"Maximum subarray is : "<<m_s;
    return 0;

}