#include<iostream>
#include<vector>
#include<string>
using namespace std;

 vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> s3;
        int st=0;
        int temp=-1;
        while(st<s1.length()){
            if(s1[st]==s2[st]){
                if(temp!=-1){
                    vector<string> arr;
                    string sub1 = s1.substr(temp, st - temp);
                    string sub2 = s2.substr(temp, st - temp);
                    arr. push_back(sub1);
                    arr.push_back(sub2);
                    s3.push_back(arr);
                    temp=-1;
                }
            }
            
            if(s1[st]!=s2[st]){
                if(temp == -1){
                    temp=st;
                }
            }
              st++;
        }

        if (temp != -1) {
    vector<string> arr;
    arr.push_back(s1.substr(temp, s1.length() - temp));
    arr.push_back(s2.substr(temp, s2.length() - temp));
    s3.push_back(arr);
                          }

        if(s3.size()==0){
            return {};
        }

        return s3;
    }

    int main() {
        string s1 = "abcde";
        string s2 = "abXde";
        vector<vector<string>> result = findMismatchedSegments(s1, s2);
        
        for (const auto& segment : result) {
            cout << "[" << segment[0] << ", " << segment[1] << "]" << endl;
        }
        
        return 0;
    }