#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,int>> linear_search(vector<vector<int>> &arr,int row,int col,int key){
    vector<pair<int,int>> ans;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
               ans.push_back({i,j});
            }
        }
    }
    if(ans.size() == 0){
        ans.push_back({-1, -1});
    }
    return ans;
}

int main () {
    vector<vector<int>>arr={{1,4,3},{4,7,5},{4,8,5}};
   vector<pair<int, int>> result = linear_search(arr, 3, 3, 4);

  for(int k=0;k<result.size();k++){
    cout<<result[k].first<<" "<<result[k].second;
    cout<<endl;
  }
}