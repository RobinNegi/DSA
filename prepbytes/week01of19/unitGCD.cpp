#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
cin>>n;
int day = n/2;

if(n%2==0)
{
    cout<<day<<endl;
    for(int i=1;i<=n;i=i+2)
    {cout<<"2 "<<i<<" "<<i+1<<endl;}
}

else{if(n>=3)
{
     cout<<day<<endl;
    cout<<"3 "<<"1 "<<"2 "<<"3"<<endl;
    for(int i=4;i<=n;i=i+2)
    {cout<<"2 "<<i<<" "<<i+1<<endl;}}
   
    else
    {cout<<"1 "<<endl;
cout<<"1 1"<<endl;
}
}
    }
    return 0;
    }