#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int> &arr, vector<int> &subset, int index) {
    if (index == arr.size()) {
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }

    // Include the current element
    subset.push_back(arr[index]);
    subsets(arr, subset, index + 1);

    // Exclude the current element
    subset.pop_back();
    subsets(arr, subset, index + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> subset;
    subsets(arr, subset, 0);
    return 0;
}