#include<bits/stdc++.h>
using namespace std;



bool backspaceCompare(string s, string t)
    {
        stack<char>s1,s2;
        int m=s.size(),n=t.size();
        int i=0;
        while(i<m||i<n)
        {
            if(s[i]=='#'&&i<m)
                 {
                     if(!s1.empty())
                     {
                         s1.pop();
                     }
                 }
            else 
            {
                if(i<m) 
                 {
                    s1.push(s[i]);
                 }
            }
            
            
            if(t[i]=='#'&&i<n)
                 {
                     if(!s2.empty())
                     {
                         s2.pop();
                     }
                 }
            else 
            {
                if(i<n) 
                 {
                    s2.push(t[i]);
                 }
            }
        
        i++;
        }
        
        
        while(!s1.empty()&&!s2.empty())
        {
            if(s1.top()==s2.top())
            {
                s1.pop();s2.pop();
            }
            else
            {
                return false;
            }
        }

        if(s1.empty()&&s2.empty())
        {
        return true;
        }
        return false;
    }
    

int main()
{
    string s,s2;


    cin>>s>>s2;
    cout<<backspaceCompare(s,s2);


    //  /a/./b/../../c/

}