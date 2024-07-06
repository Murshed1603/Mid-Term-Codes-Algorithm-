#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n*factorial(n-1);
}

int main(void)
{
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;


    return 0;
}
