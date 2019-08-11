#include<bits/stdc++.h>

using namespace std;


int fun(int n,int i)
{
    if(i==3)
    return 0;
    
    if(n==0)
    return 1;
    
    
    return fun(n-1,i+1) + fun(n-1,0);
    
    
    //return fun(n-1,i+1) + fun(n-1,i);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<fun(n,0)<<endl;
}
