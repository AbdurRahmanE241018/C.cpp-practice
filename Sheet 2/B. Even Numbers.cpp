//B.Even Numbers

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a<2)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=2; i<=a; i=i+2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}


