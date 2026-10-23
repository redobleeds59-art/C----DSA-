#include<iostream>
#include<vector>
using namespace std;

int most_water(vector<int>& arr){
    int lp=0,rp=arr.size()-1;
    int max_area=0;

    while (lp<rp){
        int width=rp-lp;
        int area = width*min(arr[lp],arr[rp]);

        max_area=max(max_area,area);

        arr[lp]<arr[rp]?lp++:rp--;
    }

    return max_area;
}

int main (){

    vector<int>height={1,8,6,2,5,4,8,3,7};

    cout<<"most_water= "<<most_water(height);
}