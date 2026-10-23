#include<iostream>
using namespace std;

int dec_bi(int n);
int bi_dec(int n);
int main () {

    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

   // cout<<"Your Binary number is : "<< dec_bi(a);
   // cout<<"\n";
    cout<<"Your decimal number is : "<< bi_dec(a);
    

}

int dec_bi(int n){

    int ans=0;
    int pow=1;
    int rem;
    while (n>0) {
        rem=n%2;
        n=n/2;
        ans+=(rem*pow);
        pow=(pow*10);
      }

      return ans;
}

int bi_dec(int n) {
    int ans=0,rem;
    int pow=1;
    while(n>0){
        rem=n%10;
        n=n/10;
        ans+=(rem*pow);
        pow=(pow*2);

    }

    return ans;
}