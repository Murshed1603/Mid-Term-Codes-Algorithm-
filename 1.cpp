#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;  //1 2 3
    }
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<endl;  //1 2 3
    }
    return 0;
}
