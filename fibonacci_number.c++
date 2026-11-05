#include<iostream>
using namespace std;


    int fib(int n)
    {
        if (n <= 1) return n;

        static int memoization[31];
        memoization[0] = 0;
        memoization[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            memoization[i] = memoization[i - 1] + memoization[i - 2];
        }
        return memoization[n];
    }


int main() {
    int m=4;
    
    cout<<"your fib number is "<<fib(m);
}