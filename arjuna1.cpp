#include<bits/stdc++.h>

using namespace std;

vector<int> fun(string s)
{
    string s1="";
    
    vector<int>v;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
        	if(s1=="")
        	continue;
            int temp;
            stringstream g(s1);
            g>>temp;
            v.push_back(temp);
            
            //cout<<s1<<" "<<temp<<endl;
            
            s1="";
            
            
        }
        
        else
        s1+=s[i];
    }
    
    int temp;
    stringstream g(s1);
    g>>temp;
    v.push_back(temp);
    
    return v;
}

int  main()
{
    int n;
    cin>>n;
    
    vector<vector<int > >v;
    /*
    for(int i=0;i<2000;i++)
    {
        vector<int>v1;
        v.push_back(v1);
    }*/
    
    string s;
    map<int,int>m;
    getline(cin,s);
    
    //cout<<"heoo";
    
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        //cout<<s;
        v.push_back(fun(s));
        m[v[i][0]]=i;
        
       // cout<<v[i][0];
        
    }
    
    
    int k;
    cin>>k;
    
    
    int sum=0;
    
    
    stack<int>st;
    
    st.push(k);
    
    int visited[2000];
    
    
    
    memset(visited,0,sizeof(visited));
    
    visited[k]=true;
    
    while(!st.empty())
    {
        int temp = st.top();
        st.pop();
        temp = m[temp];
        
        sum += v[temp][1];
        //cout<<temp;
        for(int i=2;i<v[temp].size();i++)
        {
            
            
                visited[v[temp][i]]=true;
                
                st.push(v[temp][i]);
            
        }
        
    }
    
    cout<<sum<<endl;
}
/*
4
1 6 2 4
2 4 3
3 5
4 2
2

6
10 7 8 9 2
8 5 3 4
2 6
9 4 3
3 5
4 8

*/
