#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;

    
    //same number right angle triangle...
   /* for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }*/

    //increasing number triangle...
   /* for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }*/


    //Floys's triangle...
    /*int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    } */

    //Reverse number triangle...
    /*for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }*/

    //Reverse number...
   /* for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }*/

    //Reverse starting number...
   /* for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }*/

    //0-1 Triangle...
    int num; 
    
      for(int i=1;i<=n;i++){
        
        if(i%2==0){
            num =0;
        }else {
            num=1;
        }

    for(int j=1;j<=i;j++){
       

        cout<<num<<" ";
        num=1-num;
    }
    cout<<"\n";
    }
    
}