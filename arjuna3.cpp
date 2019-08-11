#include<bits/stdc++.h>

using namespace std;

int fun(string s,int i,int len)
{
    if(i==len)
    return 1;
    
    
    if(s[i]=='0')
    return 0;
    
    int count =fun(s,i+1,len);
    
    if(i<len-1)
    {
        int temp;
        
        string s1 = "";
        s1+=s[i];
        s1+=s[i+1];
        
        stringstream g(s1);
        g>>temp;
        
        if(temp<27 && temp>0)
        count +=  fun(s,i+2,len);
    }
    
    return count;
}

int main()
{
    string s;
    
    cin>>s;
    
    cout<<fun(s,0,s.length())<<endl;
}
