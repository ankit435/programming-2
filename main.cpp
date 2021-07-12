#include<bits/stdc++.h>
using namespace std;
 map<char ,int >r,l;
    
 

    int main()
    {
           int c=0;
       std::set<std::string> ms;
       
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            r[s[i]]++;
        }


        for(int i=0;i<s.size();i++)
        {
            if(i==0)
            {
                l[s[i]]++;
                r[s[i]]--;
                continue;
            }
            r[s[i]]--;
            
            for(char c='a';c<='z';c++)
            {
                if(l[c]&&r[c])
                {
                    string temp;
                    temp.push_back(c);
                    temp.push_back(s[i]);
                    temp.push_back(c);
                    ms.insert(temp);

                }
                
            }
            l[s[i]]++;
        }
        cout<<ms.size();
    }



