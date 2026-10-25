#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

set <vector<int>> Three_sum(vector<int> &arr){
    int n=arr.size();
    set<vector<int>> ans;
   
    for(int i=0;i<n;i++){ 
        set<int> s;
        int A=-arr[i];
        for(int j=i+1; j<n;j++){
            int B=arr[j];
            int C = A-B;
           if( s.find(C) != s.end()){
            vector<int> trip={arr[i], B , C};
            sort(trip.begin() , trip.end());
            ans.insert(trip);
           }
           s.insert(B);
        }
    }

    return ans ;
}

int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
     set<vector<int>> res1 = Three_sum(nums);
     for(auto i :res1){
       cout<<"["<<i[0]<<" "<<i[1]<<" "<<i[2]<<"]";
     }
}

//time complexity = (NlogN)