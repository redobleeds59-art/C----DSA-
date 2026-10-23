#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;



vector<vector<int>> Three_sum(vector <int> &arr ){
   int n= arr.size();
   
   vector<vector<int>> ans;
   set<vector<int>> s;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            
            if(arr[i]+arr[j]+arr[k]==0){
               vector<int> trip ={arr[i],arr[j],arr[k]};
               sort(trip.begin() , trip.end());

               if(s.find(trip) == s.end()){
                s.insert(trip);
                ans.push_back(trip);
               }           
            }
        }     
    }
   }
   return ans;
}
int main () {
vector<int> arr1 = {-1, 0, 1, 2, -1, -4};
    cout << "Test Case 1 Output:" << endl;
    vector<vector<int>> res1 = Three_sum(arr1);
    for (auto trip : res1) {
        cout << "[" << trip[0] << ", " << trip[1] << ", " << trip[2] << "] ";
    }
    cout << "\n\n";
}