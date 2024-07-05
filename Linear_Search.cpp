#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int n;
    cin>>n;

    int arr[n]; // here we declared an array of size n
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;

    return 0;
}
