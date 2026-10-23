#include<iostream>
using namespace std;

int Linear_search(int arr[],int size,int find);

int main () {

    int arr[]={20,30,40,50,60,70,89};
    int search;
    cout <<"search here : ";
    cin>>search;

    cout<<"your search element index is : "<< Linear_search(arr,sizeof(arr)/sizeof(arr[0]),search);


}

int Linear_search(int arr[],int size,int find){

    for(int i=0; i<size;i++){

        if(arr[i]==find){
            return i;
           }
      }

      return -1;
}