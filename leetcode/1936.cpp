#include<bits/stdc++.h>
using namespace std;
 map<char ,int >mp;
    
    int c=0;

    int main()
    {
        string s;
        cin>>s;
      //  cout<<countPalindromicSubsequence(s);

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        //cout<<mp['s']<<"\t";

        for(int i='a';i<='z';i++)
        {
            for(char j='a';j<='z';j++){
                string temp = "";
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(i);

            int pos = 0;
            for(int k = 0 ; k < s.length(); ++k){
                if(s[k] == temp[pos])
                {
                    ++pos;
                }
                if(pos == 3){
                    ++c;
                    break;
                }
            }

        }

        }

        cout<<c;

    }
